#ifndef CYMBOL_EXPR_RULES_H
#define CYMBOL_EXPR_RULES_H
#include "Rules/Rule.h"

struct FileRule : public ParserRule {
    struct FileNode {
    };
    virtual std::any accept(CymbolExprGenerator *visitor) override;
    virtual void enterRule(CymbolExprGenerator *listener) override;
    virtual void exitRule(CymbolExprGenerator *listener) override;
};

struct VarDeclRule : public ParserRule {
    std::any accept(CymbolExprGenerator *visitor);
    void enterRule(CymbolExprGenerator *listener);
    void exitRule(CymbolExprGenerator *listener);
};

struct TypeRule : public ParserRule {
    std::any accept(CymbolExprGenerator *visitor);
    void enterRule(CymbolExprGenerator *listener);
    void exitRule(CymbolExprGenerator *listener);
};

struct StatRule : public ParserRule {
    std::any accept(CymbolExprGenerator *visitor);
    void enterRule(CymbolExprGenerator *listener);
    void exitRule(CymbolExprGenerator *listener);
};

struct ExprRule : public ParserRule {
    std::any accept(CymbolExprGenerator *visitor);
    void enterRule(CymbolExprGenerator *listener);
    void exitRule(CymbolExprGenerator *listener);
};

struct IDRule : public LexerRule {
    struct IDNode {
    };
    std::any accept(CymbolExprGenerator *visitor);
    void enterRule(CymbolExprGenerator *listener);
    void exitRule(CymbolExprGenerator *listener);
};

struct INTRule : public LexerRule {
    std::any accept(CymbolExprGenerator *visitor);
    void enterRule(CymbolExprGenerator *listener);
    void exitRule(CymbolExprGenerator *listener);
};
#endif