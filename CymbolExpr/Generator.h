#ifndef GENERATOR_H
#define GENERATOR_H
#include <set>
#include "Rule.h"
#include "CymbolExprRules.h"
#include "Nodes.h"

struct FileGenerator : public CymbolExprGenerator
{
    using CymbolExprGenerator::CymbolExprGenerator;
    virtual std::any visitFileRule(FileRule *rule) override;
    virtual std::any visitStatRule(StatRule *rule) override;
    virtual void enterStatRule(StatRule *rule) override;
    virtual void exitStatRule(StatRule *rule) override;
};

struct VarDeclGenerator : public CymbolExprGenerator
{
    using CymbolExprGenerator::CymbolExprGenerator;
    std::any visitVarDeclRule(VarDeclRule *rule) override;
    std::any visitTypeRule(TypeRule *rule) override;
    void enterTypeRule(TypeRule *rule) override;
    void exitTypeRule(TypeRule *rule) override;
    std::any visitIDRule(IDRule *rule) override;
    void enterIDRule(IDRule *rule) override;
    void exitIDRule(IDRule *rule) override;
    std::any visitExprRule(ExprRule* rule) override;
    void enterExprRule(ExprRule *rule) override;
    void exitExprRule(ExprRule *rule) override;
};

struct TypeGenerator : public CymbolExprGenerator
{
    using CymbolExprGenerator::CymbolExprGenerator;
    std::any visitTypeRule(TypeRule *rule) override;
};

struct StatGenerator : public CymbolExprGenerator
{
    using CymbolExprGenerator::CymbolExprGenerator;
    struct Br1 : public CymbolExprGenerator {
        
    };
};

#endif