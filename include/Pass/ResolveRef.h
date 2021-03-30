#include <map>
#include "Rules/Rule.h"

struct ResolveRef : public RuleVisitor
{
    std::map<std::string, std::shared_ptr<Rule>> &parserRules;
    std::map<std::string, std::shared_ptr<Rule>> &lexerRules;

    ResolveRef(std::map<std::string, std::shared_ptr<Rule>> &parserRules, std::map<std::string, std::shared_ptr<Rule>> &lexerRules) : parserRules(parserRules), lexerRules(lexerRules) {}

    virtual std::any visitSeqRule(SeqRule *rule)
    {
        for (auto &child : rule->sequence)
        {
            child->accept(this);
        }
        return nullptr;
    }
    virtual std::any visitOrRule(OrRule *rule)
    {
        for (auto &child : rule->alternatives)
        {
            child->accept(this);
        }
        return nullptr;
    };
    virtual std::any visitEbnfSuffixRule(EbnfSuffixRule *rule)
    {
        rule->child->accept(this);
        return nullptr;
    };
    virtual std::any visitRuleRefRule(RuleRefRule *rule)
    {
        rule->ref = parserRules.at(rule->refName);
        return nullptr;
    };
    virtual std::any visitNotSetRule(NotSetRule *rule)
    {
        return nullptr;
    };
    virtual std::any visitDotRule(DotRule *rule)
    {
        return nullptr;
    };
    virtual std::any visitTokenRefRule(TokenRefRule *rule)
    {
        rule->ref = lexerRules.at(rule->refName);
        return nullptr;
    };
    virtual std::any visitStringLiteralRule(StringLiteralRule *rule)
    {
        return nullptr;
    };
    virtual std::any visitCharSetRule(CharSetRule *rule)
    {
        return nullptr;
    };
};