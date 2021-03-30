#include <iostream>
#include <string>
#include "antlr4-runtime.h"
#include "ANTLRv4Lexer.h"
#include "ANTLRv4Parser.h"
#include "Pass/ParseRule.h"
#include "Rules/Rule.h"

using namespace antlr4;

int main(int argc, char *argv[]) {
    
    std::string filename("../../tests/Hello.g4");
    ANTLRFileStream stream(filename);
    ANTLRv4Lexer lexer(&stream);
    CommonTokenStream tokens(&lexer);
    ANTLRv4Parser parser(&tokens);

    tree::ParseTree *tree = parser.grammarSpec();
    std::cout << tree->toStringTree() << std::endl;

    RuleParser visitor = RuleParser();

    auto result = visitor.visit(tree).as<std::tuple<std::map<std::string, std::shared_ptr<Rule>>,std::map<std::string, std::shared_ptr<Rule>>>>();
    auto parseRules = std::get<0>(result);
    auto lexerRules = std::get<1>(result);
    std::shared_ptr<EbnfSuffixRule> WSRule = std::dynamic_pointer_cast<EbnfSuffixRule>(lexerRules.at("WS"));
    auto charSetRuleWS = std::dynamic_pointer_cast<CharSetRule>(WSRule->child);
    std::shared_ptr<EbnfSuffixRule> IDRule = std::dynamic_pointer_cast<EbnfSuffixRule>(lexerRules.at("ID"));
    auto charSetRuleID = std::dynamic_pointer_cast<CharSetRule>(IDRule->child);

    return 0;
}