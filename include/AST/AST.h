#include <any>
#include <string>
#include <vector>

struct ASTVisitor;

struct Node {
  std::string name;
  std::vector<Node *> children;
  virtual ~Node() {}
  virtual std::any accept(ASTVisitor *visitor) = 0;
};

struct ParserRuleNode : public Node {
  ParserRuleNode(std::vector<Node *> nodes) { children = std::move(nodes); }
  virtual std::any accept(ASTVisitor *visitor) override {
    return visitor->visitParserRuleNode(this);
  }
};

struct TerminalNode : public Node {
  std::string content;
  TerminalNode(std::string text) : content(std::move(text)) {}
  TerminalNode(std::string name, std::string text) {
      this->name = name;
      this->content = text;
  }
  virtual std::any accept(ASTVisitor *visitor) override {
    return visitor->visitTerminalNode(this);
  }
};

struct ASTVisitor {
  virtual std::any visitParserRuleNode(ParserRuleNode *node) = 0;
  virtual std::any visitTerminalNode(TerminalNode *node) = 0;
};

struct SerializeNoSpace : public ASTVisitor {
  std::vector<std::string> texts;

  virtual std::any visitParserRuleNode(ParserRuleNode *node) override {
    for (auto &child : node->children) {
      child->accept(this);
    }
  }

  virtual std::any visitTerminalNode(TerminalNode *node) override {
    texts.push_back(node->content);
  }

  std::string getResult() {
    std::string result("");
    for (auto &str : texts) {
      result.append(std::move(str));
    }
    return result;
  }
};