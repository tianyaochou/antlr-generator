#include "Rule.h"

struct Generator;

struct ParserRule : public OrRule {
  virtual std::any accept(Generator *visitor) = 0;
  virtual void enterRule(Generator *listener) = 0;
  virtual void exitRule(Generator *listener) = 0;
};

struct LexerRule : public OrRule {
  virtual std::any accept(Generator *visitor) = 0;
  virtual void enterRule(Generator *listener) = 0;
  virtual void exitRule(Generator *listener) = 0;
};

struct Generator : {
  visitParserRule(ParserRule *rule) { return }
};