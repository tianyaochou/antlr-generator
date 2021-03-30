#include <vector>
#include <map>
#include <tuple>
#include <string>

#include "antlr4-runtime.h"
#include "ANTLRv4ParserBaseVisitor.h"
#include "Rules/Rule.h"

struct RuleParser : public ANTLRv4ParserBaseVisitor
{

    std::map<std::string, std::shared_ptr<Rule>> parserRules;
    std::map<std::string, std::shared_ptr<Rule>> lexerRules;

    bool isVisited(std::string &name)
    {
        return parserRules.find(name) != parserRules.end() || lexerRules.find(name) != lexerRules.end();
    }

    antlrcpp::Any visitGrammarSpec(ANTLRv4Parser::GrammarSpecContext *ctx) override
    {
        visitChildren(ctx); // visitRules()
        return std::tuple{parserRules, lexerRules};
    }

    antlrcpp::Any visitParserRuleSpec(ANTLRv4Parser::ParserRuleSpecContext *ctx) override
    {
        // visit rule and add it to this->parserRules
        std::string name = ctx->RULE_REF()->getText();
        std::shared_ptr<Rule> rule;
        try
        {
            rule = visitRuleBlock(ctx->ruleBlock()).as<std::shared_ptr<Rule>>();
            rule->name = name;
            rule->isParseRule = true;
        }
        catch (std::bad_cast const &e)
        {
            std::cerr << __FILE__ << ":" << __LINE__ << ": " << __func__ << ": " << e.what() << std::endl;
            return nullptr;
        }
        parserRules.insert({name, rule});
        return nullptr; // TODO: think about what success result should be
    }

    antlrcpp::Any visitLexerRuleSpec(ANTLRv4Parser::LexerRuleSpecContext *ctx) override
    {
        std::string name = ctx->TOKEN_REF()->getText();
        std::shared_ptr<Rule> rule;
        try
        {
            rule = visitLexerRuleBlock(ctx->lexerRuleBlock()).as<std::shared_ptr<Rule>>();
            rule->name = name;
            rule->isParseRule = false;
        }
        catch (std::bad_cast const &e)
        {
            std::cerr << __FILE__ << ":" << __LINE__ << ": " << __func__ << ": " << e.what() << std::endl;
            return nullptr;
        }
        lexerRules.insert({name, rule});
        return nullptr; // TODO: think about what success result should be
    }

    antlrcpp::Any visitRuleAltList(ANTLRv4Parser::RuleAltListContext *ctx) override
    {
        // must return an OrRule
        std::vector<std::shared_ptr<Rule>> alts;
        for (ANTLRv4Parser::LabeledAltContext *alt : ctx->labeledAlt())
        {
            std::shared_ptr<Rule> rule;
            try
            {
                rule = visitLabeledAlt(alt).as<std::shared_ptr<Rule>>();
            }
            catch (std::bad_cast const &e)
            {
                std::cerr << __FILE__ << ": " << __func__ << ": " << e.what() << std::endl;
                return nullptr;
            }
            alts.push_back(rule);
        }
        return std::static_pointer_cast<Rule>(std::make_shared<OrRule>(alts));
    }

    antlrcpp::Any visitAltList(ANTLRv4Parser::AltListContext *ctx) override 
    {
        // return an OrRule
        std::vector<std::shared_ptr<Rule>> alts;
        for (ANTLRv4Parser::AlternativeContext *alt : ctx->alternative())
        {
            std::shared_ptr<Rule> rule;
            try
            {
                rule = visitAlternative(alt).as<std::shared_ptr<Rule>>();
            }
            catch (std::bad_cast const &e)
            {
                std::cerr << __FILE__ << ": " << __func__ << ": " << e.what() << std::endl;
                return nullptr;
            }
            alts.push_back(rule);
        }
        if (alts.size() == 1)
        {
            return alts.at(0);
        }
        else
        {
            return std::static_pointer_cast<Rule>(std::make_shared<OrRule>(alts));
        }
    }

    antlrcpp::Any visitLexerAltList(ANTLRv4Parser::LexerAltListContext *ctx) override
    {
        // return an OrRule
        std::vector<std::shared_ptr<Rule>> alts;
        for (ANTLRv4Parser::LexerAltContext *alt : ctx->lexerAlt())
        {
            std::shared_ptr<Rule> rule;
            try
            {
                rule = visitLexerAlt(alt).as<std::shared_ptr<Rule>>();
            }
            catch (std::bad_cast const &e)
            {
                std::cerr << __FILE__ << ":" << __LINE__ << ": " << __func__ << ": " << e.what() << std::endl;
                return nullptr;
            }
            alts.push_back(rule);
        }
        if (alts.size() == 1)
        {
            return alts.at(0);
        }
        else
        {
            return std::static_pointer_cast<Rule>(std::make_shared<OrRule>(alts));
        }
    }

    antlrcpp::Any visitLabeledAlt(ANTLRv4Parser::LabeledAltContext *ctx) override
    {
        return visitAlternative(ctx->alternative());
    }

    antlrcpp::Any visitLexerAlt(ANTLRv4Parser::LexerAltContext *ctx) override
    {
        return visitLexerElements(ctx->lexerElements());
    }

    antlrcpp::Any visitAlternative(ANTLRv4Parser::AlternativeContext *ctx) override
    {
        // return a SeqRule
        std::vector<std::shared_ptr<Rule>> seq;
        for (ANTLRv4Parser::ElementContext *elem : ctx->element())
        {
            std::shared_ptr<Rule> rule;
            try
            {
                rule = visitElement(elem).as<std::shared_ptr<Rule>>();
            }
            catch (std::bad_cast const &e)
            {
                std::cerr << __FILE__ << ":" << __LINE__ << ": " << __func__ << ": " << e.what() << std::endl;
                return nullptr;
            }
            seq.push_back(rule);
        }
        if (seq.size() == 1)
        {
            return seq.at(0);
        }
        else
        {
            return std::static_pointer_cast<Rule>(std::make_shared<SeqRule>(seq));
        }
    }

    antlrcpp::Any visitLexerElements(ANTLRv4Parser::LexerElementsContext *ctx) override
    {
        std::vector<std::shared_ptr<Rule>> seq;
        for (ANTLRv4Parser::LexerElementContext *elem : ctx->lexerElement())
        {
            std::shared_ptr<Rule> rule;
            try
            {
                rule = visitLexerElement(elem).as<std::shared_ptr<Rule>>();
            }
            catch (std::bad_cast const &e)
            {
                std::cerr << __FILE__ << ":" << __LINE__ << ": " << __func__ << ": " << e.what() << std::endl;
                return nullptr;
            }
            seq.push_back(rule);
        }
        if (seq.size() == 1)
        {
            return seq.at(0);
        }
        else
        {
            return std::static_pointer_cast<Rule>(std::make_shared<SeqRule>(seq));
        }
    }

    antlrcpp::Any visitElement(ANTLRv4Parser::ElementContext *ctx) override
    {
        // return a ElementRule
        // element
        //    : labeledElement (ebnfSuffix |)
        //    | atom (ebnfSuffix |)
        //    | ebnf
        //    | actionBlock QUESTION?
        //    ;
        std::shared_ptr<Rule> child = nullptr;
        if (ctx->labeledElement())
        {
            std::shared_ptr<Rule> element;
            try
            {
                element = visitLabeledElement(ctx->labeledElement()).as<std::shared_ptr<Rule>>();
            }
            catch (std::bad_cast const &e)
            {
                std::cerr << __FILE__ << ":" << __LINE__ << ": " << __func__ << ": " << e.what() << std::endl;
                return nullptr;
            }
            child = element;
        }
        else if (ctx->atom())
        {
            std::shared_ptr<Rule> atom;
            try
            {
                atom = visitAtom(ctx->atom()).as<std::shared_ptr<Rule>>();
            }
            catch (std::bad_cast const &e)
            {
                std::cerr << __FILE__ << ":" << __LINE__ << ": " << __func__ << ": " << e.what() << std::endl;
                return nullptr;
            }
            child = atom;
        }

        if (ctx->ebnfSuffix())
        {
            assert(child);
            std::shared_ptr<EbnfSuffixRule> rule = std::make_shared<EbnfSuffixRule>();
            size_t symbol = -1;
            if (ctx->ebnfSuffix()->STAR())
            {
                symbol = EbnfSuffixRule::Star;
            }
            else if (ctx->ebnfSuffix()->PLUS())
            {
                symbol = EbnfSuffixRule::Plus;
            }
            else
            {
                assert(ctx->ebnfSuffix()->QUESTION().size() >= 1);
                symbol = EbnfSuffixRule::Question;
            }
            rule->symbol = symbol;
            rule->child = child;
            return std::static_pointer_cast<Rule>(rule);
        }

        if (ctx->ebnf())
        {
            std::shared_ptr<Rule> ebnf;
            try
            {
                ebnf = visitEbnf(ctx->ebnf()).as<std::shared_ptr<Rule>>();
            }
            catch (std::bad_cast const &e)
            {
                std::cerr << __FILE__ << ":" << __LINE__ << ": " << __func__ << ": " << e.what() << std::endl;
                return nullptr;
            }
            return ebnf;
        }

        return child;
    }

    antlrcpp::Any visitLexerElement(ANTLRv4Parser::LexerElementContext *ctx) override
    {
        // lexerElement
        //    : labeledLexerElement ebnfSuffix?
        //    | lexerAtom ebnfSuffix?
        //    | lexerBlock ebnfSuffix?
        //    | actionBlock QUESTION?
        //    ;
        std::shared_ptr<Rule> child;
        if (ctx->labeledLexerElement())
        {
            std::shared_ptr<Rule> element;
            try
            {
                element = visitLabeledLexerElement(ctx->labeledLexerElement()).as<std::shared_ptr<Rule>>();
            }
            catch (std::bad_cast const &e)
            {
                std::cerr << __FILE__ << ":" << __LINE__ << ": " << __func__ << ": " << e.what() << std::endl;
                return nullptr;
            }
            child = element;
        }
        else if (ctx->lexerAtom())
        {
            std::shared_ptr<Rule> atom;
            try
            {
                atom = visitLexerAtom(ctx->lexerAtom()).as<std::shared_ptr<Rule>>();
            }
            catch (std::bad_cast const &e)
            {
                std::cerr << __FILE__ << ":" << __LINE__ << ": " << __func__ << ": " << e.what() << std::endl;
                return nullptr;
            }
            child = atom;
        }
        else if (ctx->lexerBlock())
        {
            std::shared_ptr<Rule> block;
            try
            {
                block = visitLexerBlock(ctx->lexerBlock()).as<std::shared_ptr<Rule>>();
            }
            catch (std::bad_cast const &e)
            {
                std::cerr << __FILE__ << ":" << __LINE__ << ": " << __func__ << ": " << e.what() << std::endl;
                return nullptr;
            }
            child = block;
        }

        if (ctx->ebnfSuffix())
        {
            assert(child);
            std::shared_ptr<EbnfSuffixRule> rule = std::make_shared<EbnfSuffixRule>();
            size_t symbol = -1;
            if (ctx->ebnfSuffix()->STAR())
            {
                symbol = EbnfSuffixRule::Star;
            }
            else if (ctx->ebnfSuffix()->PLUS())
            {
                symbol = EbnfSuffixRule::Plus;
            }
            else
            {
                assert(ctx->ebnfSuffix()->QUESTION().size() >= 1);
                symbol = EbnfSuffixRule::Question;
            }
            rule->symbol = symbol;
            rule->child = child;
            return std::static_pointer_cast<Rule>(rule);
        }
        else
        {
            return child;
        }
    }

    antlrcpp::Any visitLabeledElement(ANTLRv4Parser::LabeledElementContext *ctx) override
    {
        if (ctx->atom())
        {
            return visitAtom(ctx->atom());
        }
        else
        {
            assert(ctx->block() != nullptr);
            return visitBlock(ctx->block());
        }
    }

    antlrcpp::Any visitLabeledLexerElement(ANTLRv4Parser::LabeledLexerElementContext *ctx) override
    {
        if (ctx->lexerAtom())
        {
            return visitLexerAtom(ctx->lexerAtom());
        }
        else
        {
            assert(ctx->lexerBlock() != nullptr);
            return visitLexerBlock(ctx->lexerBlock());
        }
    }

    antlrcpp::Any visitAtom(ANTLRv4Parser::AtomContext *ctx) override
    {
        // DOT refers to any token
        if (ctx->terminal())
        {
            return visitTerminal(ctx->terminal());
        }
        else if (ctx->ruleref())
        {
            return visitRuleref(ctx->ruleref());
        }
        else if (ctx->notSet())
        {
            return visitNotSet(ctx->notSet());
        }
        else
        {
            assert(ctx->DOT() != nullptr);
            std::shared_ptr<DotRule> rule = std::make_shared<DotRule>();
            rule->isParseRule = true;
            return std::static_pointer_cast<Rule>(rule);
        }
    }

    antlrcpp::Any visitLexerAtom(ANTLRv4Parser::LexerAtomContext *ctx) override
    {
        // DOT refers to any character
        if (ctx->characterRange())
        {
            return visitCharacterRange(ctx->characterRange());
        }
        else if (ctx->terminal())
        {
            return visitTerminal(ctx->terminal());
        }
        else if (ctx->notSet())
        {
            return visitNotSet(ctx->notSet());
        }
        else if (ctx->LEXER_CHAR_SET())
        {
            return std::static_pointer_cast<Rule>(CharSetRule::getCharSetByLexerCharSet(ctx->LEXER_CHAR_SET()->getText()));
        }
        else
        {
            assert(ctx->DOT() != nullptr);
            std::shared_ptr<DotRule> rule = std::make_shared<DotRule>();
            rule->isParseRule = false;
            return std::static_pointer_cast<Rule>(rule);
        }
    }

    antlrcpp::Any visitBlock(ANTLRv4Parser::BlockContext *ctx) override
    {
        return visitAltList(ctx->altList());
    }

    antlrcpp::Any visitLexerBlock(ANTLRv4Parser::LexerBlockContext *ctx) override
    {
        return visitLexerAltList(ctx->lexerAltList());
    }

    antlrcpp::Any visitEbnf(ANTLRv4Parser::EbnfContext *ctx) override
    {
        std::shared_ptr<Rule> blockRule;
        try
        {
            blockRule = visitBlock(ctx->block()).as<std::shared_ptr<Rule>>();
        }
        catch (std::bad_cast const &e)
        {
            std::cerr << __FILE__ << ":" << __LINE__ << ": " << __func__ << ": " << e.what() << std::endl;
            return nullptr;
        }

        if (ctx->blockSuffix())
        {
            std::shared_ptr<EbnfSuffixRule> rule = std::make_shared<EbnfSuffixRule>();
            size_t symbol = -1;
            if (ctx->blockSuffix()->ebnfSuffix()->STAR())
            {
                symbol = EbnfSuffixRule::Star;
            }
            else if (ctx->blockSuffix()->ebnfSuffix()->PLUS())
            {
                symbol = EbnfSuffixRule::Plus;
            }
            else
            {
                assert(ctx->blockSuffix()->ebnfSuffix()->QUESTION().size() >= 1);
                symbol = EbnfSuffixRule::Question;
            }
            rule->symbol = symbol;
            rule->child = blockRule;
            return std::static_pointer_cast<Rule>(rule);
        }
        else
        {
            return blockRule;
        }
    }

    antlrcpp::Any visitTerminal(ANTLRv4Parser::TerminalContext *ctx) override
    {
        // return a literal rule or a token ref
        if (ctx->TOKEN_REF())
        {
            auto rule = std::make_shared<TokenRefRule>(ctx->TOKEN_REF()->getText());
            return std::static_pointer_cast<Rule>(rule);
        }
        else
        {
            assert(ctx->STRING_LITERAL() != nullptr);
            std::string squoteLiteral = ctx->STRING_LITERAL()->getText();
            std::string literal = squoteLiteral.substr(1, squoteLiteral.length() - 2);
            auto rule = std::make_shared<StringLiteralRule>(literal);
            return std::static_pointer_cast<Rule>(rule);
        }
    }

    antlrcpp::Any visitRuleref(ANTLRv4Parser::RulerefContext *ctx) override
    {
        // TODO: find rule in rules map and return an existing rule
        std::string ruleRef = ctx->RULE_REF()->getText();
        auto rule = std::make_shared<RuleRefRule>(ruleRef);
        return std::static_pointer_cast<Rule>(rule);
    }

    antlrcpp::Any visitNotSet(ANTLRv4Parser::NotSetContext *ctx) override
    {
        auto rule = std::make_shared<NotSetRule>();
        if (ctx->setElement())
        {
            std::shared_ptr<Rule> elem;
            try
            {
                elem = visitSetElement(ctx->setElement()).as<std::shared_ptr<Rule>>();
            }
            catch (std::bad_cast const &e)
            {
                std::cerr << __FILE__ << ":" << __LINE__ << ": " << __func__ << ": " << e.what() << std::endl;
                return nullptr;
            }
            rule->setElements.push_back(std::dynamic_pointer_cast<TerminalRule>(elem));
        }
        else
        {
            assert(ctx->blockSet() != nullptr);
            for (ANTLRv4Parser::SetElementContext *setElem : ctx->blockSet()->setElement())
            {
                std::shared_ptr<Rule> elem;
                try
                {
                    elem = visitSetElement(setElem).as<std::shared_ptr<Rule>>();
                }
                catch (std::bad_cast const &e)
                {
                    std::cerr << __FILE__ << ":" << __LINE__ << ": " << __func__ << ": " << e.what() << std::endl;
                    return nullptr;
                }
                rule->setElements.push_back(std::dynamic_pointer_cast<TerminalRule>(elem));
            }
        }
        return std::static_pointer_cast<Rule>(rule);
    }

    antlrcpp::Any visitSetElement(ANTLRv4Parser::SetElementContext *ctx) override
    {
        if (ctx->TOKEN_REF())
        {
            auto rule = std::make_shared<TokenRefRule>(ctx->TOKEN_REF()->getText());
            return std::static_pointer_cast<Rule>(rule);
        }
        else if (ctx->STRING_LITERAL())
        {
            auto token = ctx->STRING_LITERAL();
            std::string squoteLiteral = token->getText();
            std::string literal = squoteLiteral.substr(1, squoteLiteral.length() - 2);
            auto rule = std::make_shared<StringLiteralRule>(literal);
            return std::static_pointer_cast<Rule>(rule);
        }
        else if (ctx->characterRange())
        {
            return visitCharacterRange(ctx->characterRange());
        }
        else
        {
            assert(ctx->LEXER_CHAR_SET() != nullptr);
            return std::static_pointer_cast<Rule>(CharSetRule::getCharSetByLexerCharSet(ctx->LEXER_CHAR_SET()->getText()));
        }
    }

    antlrcpp::Any visitBlockSet(ANTLRv4Parser::BlockSetContext *ctx) override
    {
        std::vector<std::shared_ptr<Rule>> alts;
        for (ANTLRv4Parser::SetElementContext *setElem : ctx->setElement())
        {
            std::shared_ptr<Rule> elem;
            try
            {
                elem = visitSetElement(setElem).as<std::shared_ptr<Rule>>();
            }
            catch (std::bad_cast const &e)
            {
                std::cerr << __FILE__ << ":" << __LINE__ << ": " << __func__ << ": " << e.what() << std::endl;
                return nullptr;
            }
            alts.push_back(elem);
        }
        auto rule = std::make_shared<OrRule>(alts);
        return std::static_pointer_cast<Rule>(rule);
    }

    antlrcpp::Any visitCharacterRange(ANTLRv4Parser::CharacterRangeContext *ctx) override
    {
        // TODO: Unicode
        std::string start = ctx->STRING_LITERAL(1)->getText();
        std::string end = ctx->STRING_LITERAL(0)->getText();
        wchar_t s;
        wchar_t e;
        size_t processed;
        if (start.length() >= 3 && start.at(2) == 'u') {
            s = std::stoi(start.substr(3, start.length() - 4), &processed, 16);
            e = std::stoi(end.substr(3, end.length() - 4), &processed,16);
        } else {
            s = start.at(1);
            s = start.at(1);
        }
        assert(s <= e);
        std::vector<wchar_t> set;
        for (wchar_t i = s; i <= e; i++)
        {
            set.push_back(i);
        }
        auto rule = std::make_shared<CharSetRule>(set);
        return std::static_pointer_cast<Rule>(rule);
    }
};
