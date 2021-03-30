#ifndef NODES_H
#define NODES_H
#include "Rules/Rule.h"
#include "Rules/TextGenerate.h"
#include "CymbolExprGenerator.h"
#include "CymbolExprRules.h"

struct CymbolExprGenerator;

struct CymbolExprGenerator : public TextGenerator
{
    std::set<std::string> &symbolTable;
    CymbolExprGenerator(std::set<std::string>& s) : symbolTable(s) {}
    // Visit
    virtual std::any visitFileRule(FileRule *rule) {
        return visitOrRule(static_cast<OrRule *>(rule));
    }
    virtual std::any visitVarDeclRule(VarDeclRule *rule) {
        return visitOrRule(static_cast<OrRule *>(rule));
    }
    virtual std::any visitTypeRule(TypeRule *rule) {
        return visitOrRule(static_cast<OrRule *>(rule));
    }
    virtual std::any visitStatRule(StatRule *rule) {
        return visitOrRule(static_cast<OrRule *>(rule));
    }
    virtual std::any visitExprRule(ExprRule *rule) {
        return visitOrRule(static_cast<OrRule *>(rule));
    }
    virtual std::any visitIDRule(IDRule *rule) {
        return visitOrRule(static_cast<OrRule *>(rule));
    }
    virtual std::any visitINTRule(INTRule *rule) {
        
        return visitOrRule(static_cast<OrRule *>(rule));
    }

    // Listen
    virtual void enterFileRule(FileRule *rule) {}
    virtual void exitFileRule(FileRule *rule) {}
    virtual void enterVarDeclRule(VarDeclRule *rule) {}
    virtual void exitVarDeclRule(VarDeclRule *rule) {}
    virtual void enterTypeRule(TypeRule *rule) {}
    virtual void exitTypeRule(TypeRule *rule) {}
    virtual void enterStatRule(StatRule *rule) {}
    virtual void exitStatRule(StatRule *rule) {}
    virtual void enterExprRule(ExprRule *rule) {}
    virtual void exitExprRule(ExprRule *rule) {}
    virtual void enterIDRule(IDRule *rule) {}
    virtual void exitIDRule(IDRule *rule) {}
    virtual void enterINTRule(INTRule *rule) {}
    virtual void exitINTRule(INTRule *rule) {}
};
#endif