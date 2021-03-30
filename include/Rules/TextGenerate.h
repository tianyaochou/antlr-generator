#include <random>
#include "Rule.h"

#define MAX_REPEAT 6
#define MAX_DEPTH 20

std::random_device rd;
std::mt19937_64 gen(rd());

struct TextGenerator : public RuleVisitor
{
    int depth;

    virtual std::any visitSeqRule(SeqRule *rule) override
    {
        std::string result("");
        for (auto &child : rule->sequence)
        {
            std::string childResult = std::any_cast<std::string>(child->accept(this));
            result.append(childResult);
        }
        return result;
    }

    virtual std::any visitOrRule(OrRule *rule) override
    {
        // depth += 1;
        std::vector<size_t> childMinDepths;
        std::transform(rule->alternatives.begin(), rule->alternatives.end(), std::back_insert_iterator(childMinDepths), [](std::shared_ptr<Rule> ptr) -> size_t {assert(!ptr->minDepth.isInf); return ptr->minDepth.value; });
        std::vector<size_t> expandableIndices;
        for (auto i = childMinDepths.begin(); i != childMinDepths.end(); i++) {
            if(*i <= MAX_DEPTH - depth) {
                expandableIndices.push_back(std::distance(childMinDepths.begin(), i));
            }
        }
        std::uniform_int_distribution<size_t> rand(0, expandableIndices.size() - 1);
        std::any result = rule->alternatives.at(expandableIndices.at(rand(gen)))->accept(this);
        // depth -= 1;
        return result;
    }

    virtual std::any visitEbnfSuffixRule(EbnfSuffixRule *rule) override
    {
        std::string result("");
        size_t repeat;
        switch (rule->symbol)
        {
        case EbnfSuffixRule::Plus:
        {
            std::uniform_int_distribution<size_t> rand(1, MAX_REPEAT);
            repeat = rand(gen);
        }
        break;
        case EbnfSuffixRule::Star:
        {
            std::uniform_int_distribution<size_t> rand(0, MAX_REPEAT);
            repeat = rand(gen);
        }
        break;
        case EbnfSuffixRule::Question:
        {
            std::uniform_int_distribution<size_t> rand(0, 1);
            repeat = rand(gen);
        }
        break;
        default:
            // should never happen
            assert(false);
            repeat = 0;
            break;
        }
        for (size_t i = 0; i < repeat; i++)
        {
            result.append(std::any_cast<std::string>(rule->child->accept(this)));
        }
        return result;
    }

    virtual std::any visitRuleRefRule(RuleRefRule *rule) override
    {
        depth += 1;
        std::any result = rule->ref->accept(this);
        depth -= 1;
        return result;
    }

    virtual std::any visitNotSetRule(NotSetRule *rule) override
    {
        // TODO:
        const std::vector<wchar_t> alphabet{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k'};
        return "NOTSETRULE";
    }

    virtual std::any visitDotRule(DotRule *rule) override
    {
        return "DOTRULE";
    }

    virtual std::any visitTokenRefRule(TokenRefRule *rule) override
    {
        std::string result = std::any_cast<std::string>(rule->ref->accept(this));
        return result;
    }

    virtual std::any visitStringLiteralRule(StringLiteralRule *rule) override
    {
        if (rule->literal.length() > 1)
        {
            return " " + rule->literal + " ";
        }
        else
        {
            return rule->literal;
        }
    }

    virtual std::any visitCharSetRule(CharSetRule *rule) override
    {
        std::uniform_int_distribution<size_t> rand(0, rule->chars.size() - 1);
        size_t index = rand(gen);
        std::string result("");
        result.push_back(rule->chars.at(index));
        return result;
    }
};