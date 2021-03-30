#include <algorithm>
#include <random>
#include <map>
#include "Rules/Rule.h"
#include "Utils/Inf.h"

struct CountMinDepth : public RuleVisitor
{
    bool changed = false; // Flag, if minDepth reached a fixpoint

    virtual std::any visitSeqRule(SeqRule *rule)
    {
        std::vector<WithInf<size_t>> childMinDepths;
        for (auto &child : rule->sequence)
        {
            WithInf<size_t> childDepth = std::any_cast<WithInf<size_t>>(child->accept(this));
            childMinDepths.push_back(childDepth);
        }
        WithInf<size_t> childMinDepth = *std::max_element(childMinDepths.begin(), childMinDepths.end());
        if (childMinDepth < rule->minDepth)
        {
            changed = true;
            rule->minDepth = childMinDepth;
        }
        return rule->minDepth;
    };
    virtual std::any visitOrRule(OrRule *rule)
    {
        std::vector<WithInf<size_t>> childMinDepths;
        for (auto &child : rule->alternatives)
        {
            WithInf<size_t> childDepth = std::any_cast<WithInf<size_t>>(child->accept(this));
            childMinDepths.push_back(childDepth);
        }
        WithInf<size_t> childMinDepth = *std::min_element(childMinDepths.begin(), childMinDepths.end());
        if (childMinDepth < rule->minDepth)
        {
            if (rule->isParseRule)
            {
                if (childMinDepth + WithInf<size_t>(1) < rule->minDepth)
                {
                    changed = true;
                    rule->minDepth = childMinDepth + WithInf<size_t>(1);
                }
            }
            else
            {
                if (childMinDepth < rule->minDepth)
                {
                    changed = true;
                    rule->minDepth = childMinDepth;
                }
            };
        }
        return rule->minDepth;
    };
    virtual std::any visitEbnfSuffixRule(EbnfSuffixRule *rule)
    {
        WithInf<size_t> childMinDepth = std::any_cast<WithInf<size_t>>(rule->child->accept(this));
        if (childMinDepth < rule->minDepth)
        {
            changed = true;
            rule->minDepth = childMinDepth;
        }
        return rule->minDepth;
    };
    virtual std::any visitRuleRefRule(RuleRefRule *rule)
    {
        WithInf<size_t> childMinDepth = rule->ref->minDepth;
        if (childMinDepth < rule->minDepth)
        {
            changed = true;
            rule->minDepth = childMinDepth;
        }
        return rule->minDepth;
    };
    virtual std::any visitNotSetRule(NotSetRule *rule)
    {
        return WithInf<size_t>(0);
    };
    virtual std::any visitDotRule(DotRule *rule)
    {
        return WithInf<size_t>(0);
    };
    virtual std::any visitTokenRefRule(TokenRefRule *rule)
    {
        WithInf<size_t> defaultTerminalDepth = 0;
        if (defaultTerminalDepth < rule->minDepth)
        {
            changed = true;
            rule->minDepth = defaultTerminalDepth;
        }
        return rule->minDepth;
    };
    virtual std::any visitStringLiteralRule(StringLiteralRule *rule)
    {
        WithInf<size_t> defaultTerminalDepth = 0;
        if (defaultTerminalDepth < rule->minDepth)
        {
            changed = true;
            rule->minDepth = defaultTerminalDepth;
        }
        return rule->minDepth;
    };
    virtual std::any visitCharSetRule(CharSetRule *rule)
    {
        WithInf<size_t> defaultTerminalDepth = 0;
        if (defaultTerminalDepth < rule->minDepth)
        {
            changed = true;
            rule->minDepth = defaultTerminalDepth;
        }
        return rule->minDepth;
    };

    void reset()
    {
        changed = false;
    }
};