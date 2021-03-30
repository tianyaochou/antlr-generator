#include <iostream>
#include <string>
#include "antlr4-runtime.h"
#include "ANTLRv4Lexer.h"
#include "ANTLRv4Parser.h"
#include "Rules/Rule.h"
#include "Pass/ParseRule.h"

using namespace antlr4;

int main(int argc, char *argv[]) {
    
    std::string filename(argv[1]);
    ANTLRFileStream stream(filename);
    ANTLRv4Lexer lexer(&stream);
    CommonTokenStream tokens(&lexer);
    ANTLRv4Parser parser(&tokens);

    tree::ParseTree *tree = parser.grammarSpec();
    std::cout << tree->toStringTree() << std::endl;

    return 0;
}