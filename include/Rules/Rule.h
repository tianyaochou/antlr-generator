#ifndef RULE_H
#define RULE_H
#include "Utils/Inf.h"
#include <any>
#include <boost/algorithm/string/replace.hpp>
#include <set>
#include <string>
#include <vector>

struct Rule;
struct SeqRule;
struct OrRule;
struct EbnfSuffixRule;
struct RuleRefRule;
struct NotSetRule;
struct DotRule;
struct TokenRefRule;
struct StringLiteralRule;
struct CharSetRule;

struct RuleVisitor {
  virtual std::any visitSeqRule(SeqRule *rule) = 0;
  virtual std::any visitOrRule(OrRule *rule) = 0;
  virtual std::any visitEbnfSuffixRule(EbnfSuffixRule *rule) = 0;
  virtual std::any visitRuleRefRule(RuleRefRule *rule) = 0;
  virtual std::any visitNotSetRule(NotSetRule *rule) = 0;
  virtual std::any visitDotRule(DotRule *rule) = 0;
  virtual std::any visitTokenRefRule(TokenRefRule *rule) = 0;
  virtual std::any visitStringLiteralRule(StringLiteralRule *rule) = 0;
  virtual std::any visitCharSetRule(CharSetRule *rule) = 0;
  virtual void enterSeqRule(SeqRule *rule) {}
  virtual void enterOrRule(OrRule *rule) {}
  virtual void enterEbnfSuffixRule(EbnfSuffixRule *rule) {}
  virtual void enterRuleRefRule(RuleRefRule *rule) {}
  virtual void enterNotSetRule(NotSetRule *rule) {}
  virtual void enterDotRule(DotRule *rule) {}
  virtual void enterTokenRefRule(TokenRefRule *rule) {}
  virtual void enterStringLiteralRule(StringLiteralRule *rule) {}
  virtual void enterCharSetRule(CharSetRule *rule) {}
  virtual void exitSeqRule(SeqRule *rule) {}
  virtual void exitOrRule(OrRule *rule) {}
  virtual void exitEbnfSuffixRule(EbnfSuffixRule *rule) {}
  virtual void exitRuleRefRule(RuleRefRule *rule) {}
  virtual void exitNotSetRule(NotSetRule *rule) {}
  virtual void exitDotRule(DotRule *rule) {}
  virtual void exitTokenRefRule(TokenRefRule *rule) {}
  virtual void exitStringLiteralRule(StringLiteralRule *rule) {}
  virtual void exitCharSetRule(CharSetRule *rule) {}
};

// Rules

struct Rule {
  std::string name = "";
  bool isParseRule = false;
  std::shared_ptr<Rule> parent = nullptr;
  WithInf<size_t> minDepth = {true, 0};
  virtual ~Rule(){};
  virtual std::any accept(RuleVisitor *visitor) = 0;
  virtual void enterRule(RuleVisitor *listener) = 0;
  virtual void exitRule(RuleVisitor *listener) = 0;
};

struct ElementRule : public Rule {};

struct SeqRule : public ElementRule {
  std::vector<std::shared_ptr<Rule>> sequence;
  SeqRule(std::vector<std::shared_ptr<Rule>> seq) : sequence(std::move(seq)) {}
  virtual std::any accept(RuleVisitor *visitor) override {
    return visitor->visitSeqRule(this);
  }
  virtual void enterRule(RuleVisitor *listener) override {
    listener->enterSeqRule(this);
  }
  virtual void exitRule(RuleVisitor *listener) override {
    listener->exitSeqRule(this);
  }
};

struct OrRule : public ElementRule {
  std::vector<std::shared_ptr<Rule>> alternatives;
  OrRule(std::vector<std::shared_ptr<Rule>> alts)
      : alternatives(std::move(alts)) {}
  virtual std::any accept(RuleVisitor *visitor) override {
    return visitor->visitOrRule(this);
  }
  virtual void enterRule(RuleVisitor *listener) override {
    listener->enterOrRule(this);
  }
  virtual void exitRule(RuleVisitor *listener) override {
    listener->exitOrRule(this);
  }
};

struct EbnfSuffixRule : public ElementRule {
  enum { Plus = 0, Star, Question };
  size_t symbol;
  std::shared_ptr<Rule> child;
  virtual std::any accept(RuleVisitor *visitor) override {
    return visitor->visitEbnfSuffixRule(this);
  }
  virtual void enterRule(RuleVisitor *listener) override {
    listener->enterEbnfSuffixRule(this);
  }
  virtual void exitRule(RuleVisitor *listener) override {
    listener->exitEbnfSuffixRule(this);
  }
};

struct AtomRule : public ElementRule {};

struct RuleRefRule : public AtomRule {
  std::string refName;
  std::shared_ptr<Rule> ref;
  RuleRefRule(std::string name) : refName(std::move(name)) {}
  virtual std::any accept(RuleVisitor *visitor) override {
    return visitor->visitRuleRefRule(this);
  }
  virtual void enterRule(RuleVisitor *listener) override {
    listener->enterRuleRefRule(this);
  }
  virtual void exitRule(RuleVisitor *listener) override {
    listener->exitRuleRefRule(this);
  }
};

struct TerminalRule : public AtomRule {};

struct NotSetRule : public AtomRule {
  std::vector<std::shared_ptr<TerminalRule>> setElements;
  virtual std::any accept(RuleVisitor *visitor) override {
    return visitor->visitNotSetRule(this);
  }
  virtual void enterRule(RuleVisitor *listener) override {
    listener->enterNotSetRule(this);
  }
  virtual void exitRule(RuleVisitor *listener) override {
    listener->exitNotSetRule(this);
  }
};

struct DotRule : public AtomRule {
  virtual std::any accept(RuleVisitor *visitor) override {
    return visitor->visitDotRule(this);
  }
  virtual void enterRule(RuleVisitor *listener) override {
    listener->enterDotRule(this);
  }
  virtual void exitRule(RuleVisitor *listener) override {
    listener->exitDotRule(this);
  }
};

struct TokenRefRule : public TerminalRule {
  std::string refName;
  std::shared_ptr<Rule> ref;
  TokenRefRule(std::string name) : refName(std::move(name)) {}
  virtual std::any accept(RuleVisitor *visitor) override {
    return visitor->visitTokenRefRule(this);
  }
  virtual void enterRule(RuleVisitor *listener) override {
    listener->enterTokenRefRule(this);
  }
  virtual void exitRule(RuleVisitor *listener) override {
    listener->exitTokenRefRule(this);
  }
};

struct StringLiteralRule : public TerminalRule {
  std::string literal;
  StringLiteralRule(std::string &literal) : literal(std::move(literal)) {}
  virtual std::any accept(RuleVisitor *visitor) override {
    return visitor->visitStringLiteralRule(this);
  }
  virtual void enterRule(RuleVisitor *listener) override {
    listener->enterStringLiteralRule(this);
  }
  virtual void exitRule(RuleVisitor *listener) override {
    listener->exitStringLiteralRule(this);
  }
};

struct CharSetRule : public TerminalRule {
  std::vector<wchar_t> chars;
  CharSetRule(std::vector<wchar_t> chars) : chars(std::move(chars)) {}
  virtual std::any accept(RuleVisitor *visitor) override {
    return visitor->visitCharSetRule(this);
  }
  virtual void enterRule(RuleVisitor *listener) override {
    listener->enterCharSetRule(this);
  }
  virtual void exitRule(RuleVisitor *listener) override {
    listener->exitCharSetRule(this);
  }

  static std::shared_ptr<CharSetRule> getCharSetByLexerCharSet(std::string s) {
    // TODO: Unicode
    boost::replace_all(s, "\\\\", "\\");
    boost::replace_all(s, "\\t", "\t");
    boost::replace_all(s, "\\r", "\r");
    boost::replace_all(s, "\\n", "\n");
    boost::replace_all(s, "\\f", "\f");
    boost::replace_all(s, "\\'", "'");
    s = s.substr(1, s.length() - 2);
    std::vector<wchar_t> chars;
    for (auto i = s.begin(); i != s.end(); i++) {
      if (*i == '-') {
        wchar_t start = chars.back();
        chars.pop_back();
        wchar_t end = *(i + 1);
        i++;
        for (wchar_t c = start; c <= end; c++) {
          chars.push_back(c);
        }
      } else {
        chars.push_back(*i);
      }
    }
    return std::make_shared<CharSetRule>(chars);
  }
};

using CharRangeRule = CharSetRule;

#endif