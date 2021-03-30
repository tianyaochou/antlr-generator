#include <iostream>
#include <string>
#include "antlr4-runtime.h"
#include "ANTLRv4Lexer.h"
#include "ANTLRv4Parser.h"
#include "Pass/ParseRule.h"
#include "Rules/Rule.h"
#include "Pass/ResolveRef.h"
#include "Pass/CountMinDepth.h"

using namespace antlr4;

int main(int argc, char *argv[]) {
    std::string filename("../../tests/Cymbol.g4");
    ANTLRFileStream stream(filename);
    ANTLRv4Lexer lexer(&stream);
    CommonTokenStream tokens(&lexer);
    ANTLRv4Parser parser(&tokens);

    tree::ParseTree *tree = parser.grammarSpec();

    RuleParser visitor = RuleParser();

    auto result = visitor.visit(tree).as<std::tuple<std::map<std::string, std::shared_ptr<Rule>>,std::map<std::string, std::shared_ptr<Rule>>>>();
    auto parserRules = std::get<0>(result);
    auto lexerRules = std::get<1>(result);

    auto fileRule = parserRules.at("file");
    ResolveRef resolveRefVisitor(parserRules, lexerRules);
    for(auto &kv : parserRules) {
        kv.second->accept(&resolveRefVisitor);
    }
    for(auto &kv : lexerRules) {
        kv.second->accept(&resolveRefVisitor);
    }
    
    std::shared_ptr<OrRule> exprRule = std::dynamic_pointer_cast<OrRule>(parserRules.at("expr"));
    std::shared_ptr<SeqRule> exprRuleFirstAlt = std::dynamic_pointer_cast<SeqRule>(exprRule->alternatives.at(0));
    std::shared_ptr<TokenRefRule> IDRefRule = std::dynamic_pointer_cast<TokenRefRule>(exprRuleFirstAlt->sequence.at(0));

    assert(IDRefRule->refName == IDRefRule->ref->name);

    CountMinDepth countMinDepth;
    for(auto &kv : lexerRules) {
        kv.second->minDepth = WithInf<size_t>(0);
    }
    do {
        countMinDepth.reset();
        for(auto &kv : lexerRules) {
            kv.second->accept(&countMinDepth);
        }
    } while (countMinDepth.changed);

    do {
        countMinDepth.reset();
        for(auto &kv : parserRules) {
            kv.second->accept(&countMinDepth);
        }
    } while (countMinDepth.changed);

    assert(fileRule->minDepth.value == 3);

    return 0;
}