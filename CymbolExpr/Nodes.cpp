#include "Nodes.h"
#include "Generator.h"

std::any FileRule::accept(CymbolExprGenerator *visitor) {
    return visitor->transform<FileGenerator>().visitFileRule(this);
}
std::any VarDeclRule::accept(CymbolExprGenerator *visitor) {
    return visitor->visitVarDeclRule(this);
}
std::any TypeRule::accept(CymbolExprGenerator *visitor) {
    return visitor->visitTypeRule(this);
}
std::any StatRule::accept(CymbolExprGenerator *visitor) {
    return visitor->visitStatRule(this);
}
std::any ExprRule::accept(CymbolExprGenerator *visitor) {
    return visitor->visitExprRule(this);
}
std::any IDRule::accept(CymbolExprGenerator *visitor) {
    return visitor->visitIDRule(this);
}
std::any INTRule::accept(CymbolExprGenerator *visitor) {
    return visitor->visitINTRule(this);
}
void FileRule::enterRule(CymbolExprGenerator *listener) {
    listener->enterFileRule(this);
}
void FileRule::exitRule(CymbolExprGenerator *listener) {
    listener->exitFileRule(this);
}
void VarDeclRule::enterRule(CymbolExprGenerator *listener) {
    listener->enterVarDeclRule(this);
}
void VarDeclRule::exitRule(CymbolExprGenerator *listener) {
    listener->exitVarDeclRule(this);
}
void TypeRule::enterRule(CymbolExprGenerator *listener) {
    listener->enterTypeRule(this);
}
void TypeRule::exitRule(CymbolExprGenerator *listener) {
    listener->exitTypeRule(this);
}
void StatRule::enterRule(CymbolExprGenerator *listener) {
    listener->enterStatRule(this);
}
void StatRule::exitRule(CymbolExprGenerator *listener) {
    listener->exitStatRule(this);
}
void ExprRule::enterRule(CymbolExprGenerator *listener) {
    listener->enterExprRule(this);
}
void ExprRule::exitRule(CymbolExprGenerator *listener) {
    listener->exitExprRule(this);
}
void IDRule::enterRule(CymbolExprGenerator *listener) {
    listener->enterIDRule(this);
}
void IDRule::exitRule(CymbolExprGenerator *listener) {
    listener->exitIDRule(this);
}
void INTRule::enterRule(CymbolExprGenerator *listener) {
    listener->enterINTRule(this);
}
void INTRule::exitRule(CymbolExprGenerator *listener) {
    listener->exitINTRule(this);
}