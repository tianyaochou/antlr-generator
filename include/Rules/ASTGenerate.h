#include "AST/AST.h"
#include "Rules/Rule.h"
#include <iostream>
#include <random>

#define MAX_REPEAT 6
#define MAX_DEPTH 20

std::random_device rd;
std::mt19937_64 gen(rd());

struct TextGenerator : public RuleVisitor {
  int depth;

  virtual std::any visitSeqRule(SeqRule *rule) override {
    Node *result = new Node();
    for (auto &child : rule->sequence) {
      std::shared_ptr<Node> childResult =
          std::any_cast<Node *>(child->accept(this));
      result->children.push_back(childResult);
    }
    return static_cast<Node *>(result);
  }

  virtual std::any visitOrRule(OrRule *rule) override {
    std::vector<size_t> childMinDepths;
    std::transform(rule->alternatives.begin(), rule->alternatives.end(),
                   std::back_insert_iterator(childMinDepths),
                   [](std::shared_ptr<Rule> ptr) -> size_t {
                     assert(!ptr->minDepth.isInf);
                     return ptr->minDepth.value;
                   });
    std::vector<size_t> expandableIndices;
    for (auto i = childMinDepths.begin(); i != childMinDepths.end(); i++) {
      if (*i <= MAX_DEPTH - depth) {
        expandableIndices.push_back(std::distance(childMinDepths.begin(), i));
      }
    }
    std::uniform_int_distribution<size_t> rand(0, expandableIndices.size() - 1);
    std::any result =
        rule->alternatives.at(expandableIndices.at(rand(gen)))->accept(this);
    return result;
  }

  virtual std::any visitEbnfSuffixRule(EbnfSuffixRule *rule) override {
    Node *result = new Node();
    size_t repeat;
    switch (rule->symbol) {
    case EbnfSuffixRule::Plus: {
      std::uniform_int_distribution<size_t> rand(1, MAX_REPEAT);
      repeat = rand(gen);
    } break;
    case EbnfSuffixRule::Star: {
      std::uniform_int_distribution<size_t> rand(0, MAX_REPEAT);
      repeat = rand(gen);
    } break;
    case EbnfSuffixRule::Question: {
      std::uniform_int_distribution<size_t> rand(0, 1);
      repeat = rand(gen);
    } break;
    default:
      // should never happen
      assert(false);
      repeat = 0;
      break;
    }
    for (size_t i = 0; i < repeat; i++) {
      result->children.push_back(
          std::any_cast<Node *>(rule->child->accept(this)));
    }
    return result;
  }

  virtual std::any visitRuleRefRule(RuleRefRule *rule) override {
    depth += 1;
    Node *result = new ParserRuleNode();
    Node *refResult try {
      refResult = std::any_cast<Node *>(rule->ref->accept(this););
    } catch (const std::bad_cast &e) {
      try {
        result =
            std::static_pointer_cast<Node>(std::make_shared<ParserRuleNode>(
                std::any_cast<std::vector<std::shared_ptr<Node>>>(refResult)));
      } catch (const std::bad_cast &e) {
        std::cerr << e.what() << '\n';
      }
    }
    depth -= 1;
    auto result = new ParserRuleNode();
    result->children.push_back(refResult);
    return std::static_pointer_cast<Node>(result);
  }

  virtual std::any visitNotSetRule(NotSetRule *rule) override {
    // TODO:
    const std::vector<wchar_t> alphabet{'a', 'b', 'c', 'd', 'e', 'f',
                                     'g', 'h', 'i', 'j', 'k'};
    return static_cast<Node *>(new TerminalNode("NOTSETRULE"));
  }

  virtual std::any visitDotRule(DotRule *rule) override {
    // TODO:
    return static_cast<Node *>(new TerminalNode("DOTRULE"));
  }

  virtual std::any visitTokenRefRule(TokenRefRule *rule) override {
    Node *result;
    Node *refResult;
    try {
      refResult = std::any_cast<Node *>(rule->ref->accept(this));
    } catch (const std::bad_cast &e) {
      try {
        result =
            std::static_pointer_cast<Node>(std::make_shared<ParserRuleNode>(
                std::any_cast<std::vector<std::shared_ptr<Node>>>(refResult)));
      } catch (const std::bad_cast &e) {
        std::cerr << e.what() << '\n';
      }
    }
    if (std::dynamic_pointer_cast<ParserRuleNode>(result)) {
      SerializeNoSpace visitor;
      result->accept(&visitor);
      return std::static_pointer_cast<Node>(
          std::make_shared<TerminalNode>(visitor.getResult()));
    } else {
      assert(std::dynamic_pointer_cast<TerminalNode>(refResult));
      return refResult;
    }
  }

  virtual std::any visitStringLiteralRule(StringLiteralRule *rule) override {
    std::string content;
    content = rule->literal;
    auto result = new TerminalNode(content);
    return static_cast<Node *>(result);
  }

  virtual std::any visitCharSetRule(CharSetRule *rule) override {
    std::uniform_int_distribution<size_t> rand(0, rule->chars.size() - 1);
    size_t index = rand(gen);
    std::string content("");
    content.push_back(rule->chars.at(index));
    auto result = std::make_shared<TerminalNode>(content);
    return std::static_pointer_cast<Node>(result);
  }
};