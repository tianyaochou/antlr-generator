
// Generated from ANTLRv4Parser.g4 by ANTLR 4.9.1


#include "ANTLRv4ParserListener.h"
#include "ANTLRv4ParserVisitor.h"

#include "ANTLRv4Parser.h"


using namespace antlrcpp;
using namespace antlr4;

ANTLRv4Parser::ANTLRv4Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ANTLRv4Parser::~ANTLRv4Parser() {
  delete _interpreter;
}

std::string ANTLRv4Parser::getGrammarFileName() const {
  return "ANTLRv4Parser.g4";
}

const std::vector<std::string>& ANTLRv4Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ANTLRv4Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- GrammarSpecContext ------------------------------------------------------------------

ANTLRv4Parser::GrammarSpecContext::GrammarSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::GrammarDeclContext* ANTLRv4Parser::GrammarSpecContext::grammarDecl() {
  return getRuleContext<ANTLRv4Parser::GrammarDeclContext>(0);
}

ANTLRv4Parser::RulesContext* ANTLRv4Parser::GrammarSpecContext::rules() {
  return getRuleContext<ANTLRv4Parser::RulesContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::GrammarSpecContext::EOF() {
  return getToken(ANTLRv4Parser::EOF, 0);
}

std::vector<ANTLRv4Parser::PrequelConstructContext *> ANTLRv4Parser::GrammarSpecContext::prequelConstruct() {
  return getRuleContexts<ANTLRv4Parser::PrequelConstructContext>();
}

ANTLRv4Parser::PrequelConstructContext* ANTLRv4Parser::GrammarSpecContext::prequelConstruct(size_t i) {
  return getRuleContext<ANTLRv4Parser::PrequelConstructContext>(i);
}

std::vector<ANTLRv4Parser::ModeSpecContext *> ANTLRv4Parser::GrammarSpecContext::modeSpec() {
  return getRuleContexts<ANTLRv4Parser::ModeSpecContext>();
}

ANTLRv4Parser::ModeSpecContext* ANTLRv4Parser::GrammarSpecContext::modeSpec(size_t i) {
  return getRuleContext<ANTLRv4Parser::ModeSpecContext>(i);
}


size_t ANTLRv4Parser::GrammarSpecContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleGrammarSpec;
}

void ANTLRv4Parser::GrammarSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGrammarSpec(this);
}

void ANTLRv4Parser::GrammarSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGrammarSpec(this);
}


antlrcpp::Any ANTLRv4Parser::GrammarSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitGrammarSpec(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::GrammarSpecContext* ANTLRv4Parser::grammarSpec() {
  GrammarSpecContext *_localctx = _tracker.createInstance<GrammarSpecContext>(_ctx, getState());
  enterRule(_localctx, 0, ANTLRv4Parser::RuleGrammarSpec);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    grammarDecl();
    setState(132);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ANTLRv4Parser::OPTIONS)
      | (1ULL << ANTLRv4Parser::TOKENS)
      | (1ULL << ANTLRv4Parser::CHANNELS)
      | (1ULL << ANTLRv4Parser::IMPORT)
      | (1ULL << ANTLRv4Parser::AT))) != 0)) {
      setState(129);
      prequelConstruct();
      setState(134);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(135);
    rules();
    setState(139);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::MODE) {
      setState(136);
      modeSpec();
      setState(141);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(142);
    match(ANTLRv4Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GrammarDeclContext ------------------------------------------------------------------

ANTLRv4Parser::GrammarDeclContext::GrammarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::GrammarTypeContext* ANTLRv4Parser::GrammarDeclContext::grammarType() {
  return getRuleContext<ANTLRv4Parser::GrammarTypeContext>(0);
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::GrammarDeclContext::identifier() {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::GrammarDeclContext::SEMI() {
  return getToken(ANTLRv4Parser::SEMI, 0);
}


size_t ANTLRv4Parser::GrammarDeclContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleGrammarDecl;
}

void ANTLRv4Parser::GrammarDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGrammarDecl(this);
}

void ANTLRv4Parser::GrammarDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGrammarDecl(this);
}


antlrcpp::Any ANTLRv4Parser::GrammarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitGrammarDecl(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::GrammarDeclContext* ANTLRv4Parser::grammarDecl() {
  GrammarDeclContext *_localctx = _tracker.createInstance<GrammarDeclContext>(_ctx, getState());
  enterRule(_localctx, 2, ANTLRv4Parser::RuleGrammarDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    grammarType();
    setState(145);
    identifier();
    setState(146);
    match(ANTLRv4Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GrammarTypeContext ------------------------------------------------------------------

ANTLRv4Parser::GrammarTypeContext::GrammarTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::GrammarTypeContext::LEXER() {
  return getToken(ANTLRv4Parser::LEXER, 0);
}

tree::TerminalNode* ANTLRv4Parser::GrammarTypeContext::GRAMMAR() {
  return getToken(ANTLRv4Parser::GRAMMAR, 0);
}

tree::TerminalNode* ANTLRv4Parser::GrammarTypeContext::PARSER() {
  return getToken(ANTLRv4Parser::PARSER, 0);
}


size_t ANTLRv4Parser::GrammarTypeContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleGrammarType;
}

void ANTLRv4Parser::GrammarTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGrammarType(this);
}

void ANTLRv4Parser::GrammarTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGrammarType(this);
}


antlrcpp::Any ANTLRv4Parser::GrammarTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitGrammarType(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::GrammarTypeContext* ANTLRv4Parser::grammarType() {
  GrammarTypeContext *_localctx = _tracker.createInstance<GrammarTypeContext>(_ctx, getState());
  enterRule(_localctx, 4, ANTLRv4Parser::RuleGrammarType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::LEXER: {
        setState(148);
        match(ANTLRv4Parser::LEXER);
        setState(149);
        match(ANTLRv4Parser::GRAMMAR);
        break;
      }

      case ANTLRv4Parser::PARSER: {
        setState(150);
        match(ANTLRv4Parser::PARSER);
        setState(151);
        match(ANTLRv4Parser::GRAMMAR);
        break;
      }

      case ANTLRv4Parser::GRAMMAR: {
        setState(152);
        match(ANTLRv4Parser::GRAMMAR);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrequelConstructContext ------------------------------------------------------------------

ANTLRv4Parser::PrequelConstructContext::PrequelConstructContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::OptionsSpecContext* ANTLRv4Parser::PrequelConstructContext::optionsSpec() {
  return getRuleContext<ANTLRv4Parser::OptionsSpecContext>(0);
}

ANTLRv4Parser::DelegateGrammarsContext* ANTLRv4Parser::PrequelConstructContext::delegateGrammars() {
  return getRuleContext<ANTLRv4Parser::DelegateGrammarsContext>(0);
}

ANTLRv4Parser::TokensSpecContext* ANTLRv4Parser::PrequelConstructContext::tokensSpec() {
  return getRuleContext<ANTLRv4Parser::TokensSpecContext>(0);
}

ANTLRv4Parser::ChannelsSpecContext* ANTLRv4Parser::PrequelConstructContext::channelsSpec() {
  return getRuleContext<ANTLRv4Parser::ChannelsSpecContext>(0);
}

ANTLRv4Parser::Action_Context* ANTLRv4Parser::PrequelConstructContext::action_() {
  return getRuleContext<ANTLRv4Parser::Action_Context>(0);
}


size_t ANTLRv4Parser::PrequelConstructContext::getRuleIndex() const {
  return ANTLRv4Parser::RulePrequelConstruct;
}

void ANTLRv4Parser::PrequelConstructContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrequelConstruct(this);
}

void ANTLRv4Parser::PrequelConstructContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrequelConstruct(this);
}


antlrcpp::Any ANTLRv4Parser::PrequelConstructContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitPrequelConstruct(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::PrequelConstructContext* ANTLRv4Parser::prequelConstruct() {
  PrequelConstructContext *_localctx = _tracker.createInstance<PrequelConstructContext>(_ctx, getState());
  enterRule(_localctx, 6, ANTLRv4Parser::RulePrequelConstruct);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(160);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::OPTIONS: {
        enterOuterAlt(_localctx, 1);
        setState(155);
        optionsSpec();
        break;
      }

      case ANTLRv4Parser::IMPORT: {
        enterOuterAlt(_localctx, 2);
        setState(156);
        delegateGrammars();
        break;
      }

      case ANTLRv4Parser::TOKENS: {
        enterOuterAlt(_localctx, 3);
        setState(157);
        tokensSpec();
        break;
      }

      case ANTLRv4Parser::CHANNELS: {
        enterOuterAlt(_localctx, 4);
        setState(158);
        channelsSpec();
        break;
      }

      case ANTLRv4Parser::AT: {
        enterOuterAlt(_localctx, 5);
        setState(159);
        action_();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionsSpecContext ------------------------------------------------------------------

ANTLRv4Parser::OptionsSpecContext::OptionsSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::OptionsSpecContext::OPTIONS() {
  return getToken(ANTLRv4Parser::OPTIONS, 0);
}

tree::TerminalNode* ANTLRv4Parser::OptionsSpecContext::LBRACE() {
  return getToken(ANTLRv4Parser::LBRACE, 0);
}

tree::TerminalNode* ANTLRv4Parser::OptionsSpecContext::RBRACE() {
  return getToken(ANTLRv4Parser::RBRACE, 0);
}

std::vector<ANTLRv4Parser::OptionContext *> ANTLRv4Parser::OptionsSpecContext::option() {
  return getRuleContexts<ANTLRv4Parser::OptionContext>();
}

ANTLRv4Parser::OptionContext* ANTLRv4Parser::OptionsSpecContext::option(size_t i) {
  return getRuleContext<ANTLRv4Parser::OptionContext>(i);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::OptionsSpecContext::SEMI() {
  return getTokens(ANTLRv4Parser::SEMI);
}

tree::TerminalNode* ANTLRv4Parser::OptionsSpecContext::SEMI(size_t i) {
  return getToken(ANTLRv4Parser::SEMI, i);
}


size_t ANTLRv4Parser::OptionsSpecContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleOptionsSpec;
}

void ANTLRv4Parser::OptionsSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptionsSpec(this);
}

void ANTLRv4Parser::OptionsSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptionsSpec(this);
}


antlrcpp::Any ANTLRv4Parser::OptionsSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitOptionsSpec(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::OptionsSpecContext* ANTLRv4Parser::optionsSpec() {
  OptionsSpecContext *_localctx = _tracker.createInstance<OptionsSpecContext>(_ctx, getState());
  enterRule(_localctx, 8, ANTLRv4Parser::RuleOptionsSpec);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    match(ANTLRv4Parser::OPTIONS);
    setState(163);
    match(ANTLRv4Parser::LBRACE);
    setState(169);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::TOKEN_REF

    || _la == ANTLRv4Parser::RULE_REF) {
      setState(164);
      option();
      setState(165);
      match(ANTLRv4Parser::SEMI);
      setState(171);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(172);
    match(ANTLRv4Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionContext ------------------------------------------------------------------

ANTLRv4Parser::OptionContext::OptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::OptionContext::identifier() {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::OptionContext::ASSIGN() {
  return getToken(ANTLRv4Parser::ASSIGN, 0);
}

ANTLRv4Parser::OptionValueContext* ANTLRv4Parser::OptionContext::optionValue() {
  return getRuleContext<ANTLRv4Parser::OptionValueContext>(0);
}


size_t ANTLRv4Parser::OptionContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleOption;
}

void ANTLRv4Parser::OptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOption(this);
}

void ANTLRv4Parser::OptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOption(this);
}


antlrcpp::Any ANTLRv4Parser::OptionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitOption(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::OptionContext* ANTLRv4Parser::option() {
  OptionContext *_localctx = _tracker.createInstance<OptionContext>(_ctx, getState());
  enterRule(_localctx, 10, ANTLRv4Parser::RuleOption);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
    identifier();
    setState(175);
    match(ANTLRv4Parser::ASSIGN);
    setState(176);
    optionValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionValueContext ------------------------------------------------------------------

ANTLRv4Parser::OptionValueContext::OptionValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ANTLRv4Parser::IdentifierContext *> ANTLRv4Parser::OptionValueContext::identifier() {
  return getRuleContexts<ANTLRv4Parser::IdentifierContext>();
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::OptionValueContext::identifier(size_t i) {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::OptionValueContext::DOT() {
  return getTokens(ANTLRv4Parser::DOT);
}

tree::TerminalNode* ANTLRv4Parser::OptionValueContext::DOT(size_t i) {
  return getToken(ANTLRv4Parser::DOT, i);
}

tree::TerminalNode* ANTLRv4Parser::OptionValueContext::STRING_LITERAL() {
  return getToken(ANTLRv4Parser::STRING_LITERAL, 0);
}

ANTLRv4Parser::ActionBlockContext* ANTLRv4Parser::OptionValueContext::actionBlock() {
  return getRuleContext<ANTLRv4Parser::ActionBlockContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::OptionValueContext::INT() {
  return getToken(ANTLRv4Parser::INT, 0);
}


size_t ANTLRv4Parser::OptionValueContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleOptionValue;
}

void ANTLRv4Parser::OptionValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptionValue(this);
}

void ANTLRv4Parser::OptionValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptionValue(this);
}


antlrcpp::Any ANTLRv4Parser::OptionValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitOptionValue(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::OptionValueContext* ANTLRv4Parser::optionValue() {
  OptionValueContext *_localctx = _tracker.createInstance<OptionValueContext>(_ctx, getState());
  enterRule(_localctx, 12, ANTLRv4Parser::RuleOptionValue);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(189);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::TOKEN_REF:
      case ANTLRv4Parser::RULE_REF: {
        enterOuterAlt(_localctx, 1);
        setState(178);
        identifier();
        setState(183);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ANTLRv4Parser::DOT) {
          setState(179);
          match(ANTLRv4Parser::DOT);
          setState(180);
          identifier();
          setState(185);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case ANTLRv4Parser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(186);
        match(ANTLRv4Parser::STRING_LITERAL);
        break;
      }

      case ANTLRv4Parser::BEGIN_ACTION: {
        enterOuterAlt(_localctx, 3);
        setState(187);
        actionBlock();
        break;
      }

      case ANTLRv4Parser::INT: {
        enterOuterAlt(_localctx, 4);
        setState(188);
        match(ANTLRv4Parser::INT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DelegateGrammarsContext ------------------------------------------------------------------

ANTLRv4Parser::DelegateGrammarsContext::DelegateGrammarsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::DelegateGrammarsContext::IMPORT() {
  return getToken(ANTLRv4Parser::IMPORT, 0);
}

std::vector<ANTLRv4Parser::DelegateGrammarContext *> ANTLRv4Parser::DelegateGrammarsContext::delegateGrammar() {
  return getRuleContexts<ANTLRv4Parser::DelegateGrammarContext>();
}

ANTLRv4Parser::DelegateGrammarContext* ANTLRv4Parser::DelegateGrammarsContext::delegateGrammar(size_t i) {
  return getRuleContext<ANTLRv4Parser::DelegateGrammarContext>(i);
}

tree::TerminalNode* ANTLRv4Parser::DelegateGrammarsContext::SEMI() {
  return getToken(ANTLRv4Parser::SEMI, 0);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::DelegateGrammarsContext::COMMA() {
  return getTokens(ANTLRv4Parser::COMMA);
}

tree::TerminalNode* ANTLRv4Parser::DelegateGrammarsContext::COMMA(size_t i) {
  return getToken(ANTLRv4Parser::COMMA, i);
}


size_t ANTLRv4Parser::DelegateGrammarsContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleDelegateGrammars;
}

void ANTLRv4Parser::DelegateGrammarsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDelegateGrammars(this);
}

void ANTLRv4Parser::DelegateGrammarsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDelegateGrammars(this);
}


antlrcpp::Any ANTLRv4Parser::DelegateGrammarsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitDelegateGrammars(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::DelegateGrammarsContext* ANTLRv4Parser::delegateGrammars() {
  DelegateGrammarsContext *_localctx = _tracker.createInstance<DelegateGrammarsContext>(_ctx, getState());
  enterRule(_localctx, 14, ANTLRv4Parser::RuleDelegateGrammars);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(191);
    match(ANTLRv4Parser::IMPORT);
    setState(192);
    delegateGrammar();
    setState(197);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::COMMA) {
      setState(193);
      match(ANTLRv4Parser::COMMA);
      setState(194);
      delegateGrammar();
      setState(199);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(200);
    match(ANTLRv4Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DelegateGrammarContext ------------------------------------------------------------------

ANTLRv4Parser::DelegateGrammarContext::DelegateGrammarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ANTLRv4Parser::IdentifierContext *> ANTLRv4Parser::DelegateGrammarContext::identifier() {
  return getRuleContexts<ANTLRv4Parser::IdentifierContext>();
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::DelegateGrammarContext::identifier(size_t i) {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(i);
}

tree::TerminalNode* ANTLRv4Parser::DelegateGrammarContext::ASSIGN() {
  return getToken(ANTLRv4Parser::ASSIGN, 0);
}


size_t ANTLRv4Parser::DelegateGrammarContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleDelegateGrammar;
}

void ANTLRv4Parser::DelegateGrammarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDelegateGrammar(this);
}

void ANTLRv4Parser::DelegateGrammarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDelegateGrammar(this);
}


antlrcpp::Any ANTLRv4Parser::DelegateGrammarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitDelegateGrammar(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::DelegateGrammarContext* ANTLRv4Parser::delegateGrammar() {
  DelegateGrammarContext *_localctx = _tracker.createInstance<DelegateGrammarContext>(_ctx, getState());
  enterRule(_localctx, 16, ANTLRv4Parser::RuleDelegateGrammar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(207);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(202);
      identifier();
      setState(203);
      match(ANTLRv4Parser::ASSIGN);
      setState(204);
      identifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(206);
      identifier();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TokensSpecContext ------------------------------------------------------------------

ANTLRv4Parser::TokensSpecContext::TokensSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::TokensSpecContext::TOKENS() {
  return getToken(ANTLRv4Parser::TOKENS, 0);
}

tree::TerminalNode* ANTLRv4Parser::TokensSpecContext::LBRACE() {
  return getToken(ANTLRv4Parser::LBRACE, 0);
}

tree::TerminalNode* ANTLRv4Parser::TokensSpecContext::RBRACE() {
  return getToken(ANTLRv4Parser::RBRACE, 0);
}

ANTLRv4Parser::IdListContext* ANTLRv4Parser::TokensSpecContext::idList() {
  return getRuleContext<ANTLRv4Parser::IdListContext>(0);
}


size_t ANTLRv4Parser::TokensSpecContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleTokensSpec;
}

void ANTLRv4Parser::TokensSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTokensSpec(this);
}

void ANTLRv4Parser::TokensSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTokensSpec(this);
}


antlrcpp::Any ANTLRv4Parser::TokensSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitTokensSpec(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::TokensSpecContext* ANTLRv4Parser::tokensSpec() {
  TokensSpecContext *_localctx = _tracker.createInstance<TokensSpecContext>(_ctx, getState());
  enterRule(_localctx, 18, ANTLRv4Parser::RuleTokensSpec);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(209);
    match(ANTLRv4Parser::TOKENS);
    setState(210);
    match(ANTLRv4Parser::LBRACE);
    setState(212);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::TOKEN_REF

    || _la == ANTLRv4Parser::RULE_REF) {
      setState(211);
      idList();
    }
    setState(214);
    match(ANTLRv4Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ChannelsSpecContext ------------------------------------------------------------------

ANTLRv4Parser::ChannelsSpecContext::ChannelsSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::ChannelsSpecContext::CHANNELS() {
  return getToken(ANTLRv4Parser::CHANNELS, 0);
}

tree::TerminalNode* ANTLRv4Parser::ChannelsSpecContext::LBRACE() {
  return getToken(ANTLRv4Parser::LBRACE, 0);
}

tree::TerminalNode* ANTLRv4Parser::ChannelsSpecContext::RBRACE() {
  return getToken(ANTLRv4Parser::RBRACE, 0);
}

ANTLRv4Parser::IdListContext* ANTLRv4Parser::ChannelsSpecContext::idList() {
  return getRuleContext<ANTLRv4Parser::IdListContext>(0);
}


size_t ANTLRv4Parser::ChannelsSpecContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleChannelsSpec;
}

void ANTLRv4Parser::ChannelsSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChannelsSpec(this);
}

void ANTLRv4Parser::ChannelsSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChannelsSpec(this);
}


antlrcpp::Any ANTLRv4Parser::ChannelsSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitChannelsSpec(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ChannelsSpecContext* ANTLRv4Parser::channelsSpec() {
  ChannelsSpecContext *_localctx = _tracker.createInstance<ChannelsSpecContext>(_ctx, getState());
  enterRule(_localctx, 20, ANTLRv4Parser::RuleChannelsSpec);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    match(ANTLRv4Parser::CHANNELS);
    setState(217);
    match(ANTLRv4Parser::LBRACE);
    setState(219);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::TOKEN_REF

    || _la == ANTLRv4Parser::RULE_REF) {
      setState(218);
      idList();
    }
    setState(221);
    match(ANTLRv4Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdListContext ------------------------------------------------------------------

ANTLRv4Parser::IdListContext::IdListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ANTLRv4Parser::IdentifierContext *> ANTLRv4Parser::IdListContext::identifier() {
  return getRuleContexts<ANTLRv4Parser::IdentifierContext>();
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::IdListContext::identifier(size_t i) {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::IdListContext::COMMA() {
  return getTokens(ANTLRv4Parser::COMMA);
}

tree::TerminalNode* ANTLRv4Parser::IdListContext::COMMA(size_t i) {
  return getToken(ANTLRv4Parser::COMMA, i);
}


size_t ANTLRv4Parser::IdListContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleIdList;
}

void ANTLRv4Parser::IdListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdList(this);
}

void ANTLRv4Parser::IdListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdList(this);
}


antlrcpp::Any ANTLRv4Parser::IdListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitIdList(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::IdListContext* ANTLRv4Parser::idList() {
  IdListContext *_localctx = _tracker.createInstance<IdListContext>(_ctx, getState());
  enterRule(_localctx, 22, ANTLRv4Parser::RuleIdList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(223);
    identifier();
    setState(228);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(224);
        match(ANTLRv4Parser::COMMA);
        setState(225);
        identifier(); 
      }
      setState(230);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
    setState(232);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::COMMA) {
      setState(231);
      match(ANTLRv4Parser::COMMA);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Action_Context ------------------------------------------------------------------

ANTLRv4Parser::Action_Context::Action_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::Action_Context::AT() {
  return getToken(ANTLRv4Parser::AT, 0);
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::Action_Context::identifier() {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(0);
}

ANTLRv4Parser::ActionBlockContext* ANTLRv4Parser::Action_Context::actionBlock() {
  return getRuleContext<ANTLRv4Parser::ActionBlockContext>(0);
}

ANTLRv4Parser::ActionScopeNameContext* ANTLRv4Parser::Action_Context::actionScopeName() {
  return getRuleContext<ANTLRv4Parser::ActionScopeNameContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::Action_Context::COLONCOLON() {
  return getToken(ANTLRv4Parser::COLONCOLON, 0);
}


size_t ANTLRv4Parser::Action_Context::getRuleIndex() const {
  return ANTLRv4Parser::RuleAction_;
}

void ANTLRv4Parser::Action_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAction_(this);
}

void ANTLRv4Parser::Action_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAction_(this);
}


antlrcpp::Any ANTLRv4Parser::Action_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitAction_(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::Action_Context* ANTLRv4Parser::action_() {
  Action_Context *_localctx = _tracker.createInstance<Action_Context>(_ctx, getState());
  enterRule(_localctx, 24, ANTLRv4Parser::RuleAction_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(234);
    match(ANTLRv4Parser::AT);
    setState(238);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(235);
      actionScopeName();
      setState(236);
      match(ANTLRv4Parser::COLONCOLON);
      break;
    }

    default:
      break;
    }
    setState(240);
    identifier();
    setState(241);
    actionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActionScopeNameContext ------------------------------------------------------------------

ANTLRv4Parser::ActionScopeNameContext::ActionScopeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::ActionScopeNameContext::identifier() {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::ActionScopeNameContext::LEXER() {
  return getToken(ANTLRv4Parser::LEXER, 0);
}

tree::TerminalNode* ANTLRv4Parser::ActionScopeNameContext::PARSER() {
  return getToken(ANTLRv4Parser::PARSER, 0);
}


size_t ANTLRv4Parser::ActionScopeNameContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleActionScopeName;
}

void ANTLRv4Parser::ActionScopeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterActionScopeName(this);
}

void ANTLRv4Parser::ActionScopeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitActionScopeName(this);
}


antlrcpp::Any ANTLRv4Parser::ActionScopeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitActionScopeName(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ActionScopeNameContext* ANTLRv4Parser::actionScopeName() {
  ActionScopeNameContext *_localctx = _tracker.createInstance<ActionScopeNameContext>(_ctx, getState());
  enterRule(_localctx, 26, ANTLRv4Parser::RuleActionScopeName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(246);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::TOKEN_REF:
      case ANTLRv4Parser::RULE_REF: {
        enterOuterAlt(_localctx, 1);
        setState(243);
        identifier();
        break;
      }

      case ANTLRv4Parser::LEXER: {
        enterOuterAlt(_localctx, 2);
        setState(244);
        match(ANTLRv4Parser::LEXER);
        break;
      }

      case ANTLRv4Parser::PARSER: {
        enterOuterAlt(_localctx, 3);
        setState(245);
        match(ANTLRv4Parser::PARSER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActionBlockContext ------------------------------------------------------------------

ANTLRv4Parser::ActionBlockContext::ActionBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::ActionBlockContext::BEGIN_ACTION() {
  return getToken(ANTLRv4Parser::BEGIN_ACTION, 0);
}

tree::TerminalNode* ANTLRv4Parser::ActionBlockContext::END_ACTION() {
  return getToken(ANTLRv4Parser::END_ACTION, 0);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::ActionBlockContext::ACTION_CONTENT() {
  return getTokens(ANTLRv4Parser::ACTION_CONTENT);
}

tree::TerminalNode* ANTLRv4Parser::ActionBlockContext::ACTION_CONTENT(size_t i) {
  return getToken(ANTLRv4Parser::ACTION_CONTENT, i);
}


size_t ANTLRv4Parser::ActionBlockContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleActionBlock;
}

void ANTLRv4Parser::ActionBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterActionBlock(this);
}

void ANTLRv4Parser::ActionBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitActionBlock(this);
}


antlrcpp::Any ANTLRv4Parser::ActionBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitActionBlock(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ActionBlockContext* ANTLRv4Parser::actionBlock() {
  ActionBlockContext *_localctx = _tracker.createInstance<ActionBlockContext>(_ctx, getState());
  enterRule(_localctx, 28, ANTLRv4Parser::RuleActionBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(248);
    match(ANTLRv4Parser::BEGIN_ACTION);
    setState(252);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::ACTION_CONTENT) {
      setState(249);
      match(ANTLRv4Parser::ACTION_CONTENT);
      setState(254);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(255);
    match(ANTLRv4Parser::END_ACTION);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgActionBlockContext ------------------------------------------------------------------

ANTLRv4Parser::ArgActionBlockContext::ArgActionBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::ArgActionBlockContext::BEGIN_ARGUMENT() {
  return getToken(ANTLRv4Parser::BEGIN_ARGUMENT, 0);
}

tree::TerminalNode* ANTLRv4Parser::ArgActionBlockContext::END_ARGUMENT() {
  return getToken(ANTLRv4Parser::END_ARGUMENT, 0);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::ArgActionBlockContext::ARGUMENT_CONTENT() {
  return getTokens(ANTLRv4Parser::ARGUMENT_CONTENT);
}

tree::TerminalNode* ANTLRv4Parser::ArgActionBlockContext::ARGUMENT_CONTENT(size_t i) {
  return getToken(ANTLRv4Parser::ARGUMENT_CONTENT, i);
}


size_t ANTLRv4Parser::ArgActionBlockContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleArgActionBlock;
}

void ANTLRv4Parser::ArgActionBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgActionBlock(this);
}

void ANTLRv4Parser::ArgActionBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgActionBlock(this);
}


antlrcpp::Any ANTLRv4Parser::ArgActionBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitArgActionBlock(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ArgActionBlockContext* ANTLRv4Parser::argActionBlock() {
  ArgActionBlockContext *_localctx = _tracker.createInstance<ArgActionBlockContext>(_ctx, getState());
  enterRule(_localctx, 30, ANTLRv4Parser::RuleArgActionBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    match(ANTLRv4Parser::BEGIN_ARGUMENT);
    setState(261);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::ARGUMENT_CONTENT) {
      setState(258);
      match(ANTLRv4Parser::ARGUMENT_CONTENT);
      setState(263);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(264);
    match(ANTLRv4Parser::END_ARGUMENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModeSpecContext ------------------------------------------------------------------

ANTLRv4Parser::ModeSpecContext::ModeSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::ModeSpecContext::MODE() {
  return getToken(ANTLRv4Parser::MODE, 0);
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::ModeSpecContext::identifier() {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::ModeSpecContext::SEMI() {
  return getToken(ANTLRv4Parser::SEMI, 0);
}

std::vector<ANTLRv4Parser::LexerRuleSpecContext *> ANTLRv4Parser::ModeSpecContext::lexerRuleSpec() {
  return getRuleContexts<ANTLRv4Parser::LexerRuleSpecContext>();
}

ANTLRv4Parser::LexerRuleSpecContext* ANTLRv4Parser::ModeSpecContext::lexerRuleSpec(size_t i) {
  return getRuleContext<ANTLRv4Parser::LexerRuleSpecContext>(i);
}


size_t ANTLRv4Parser::ModeSpecContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleModeSpec;
}

void ANTLRv4Parser::ModeSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModeSpec(this);
}

void ANTLRv4Parser::ModeSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModeSpec(this);
}


antlrcpp::Any ANTLRv4Parser::ModeSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitModeSpec(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ModeSpecContext* ANTLRv4Parser::modeSpec() {
  ModeSpecContext *_localctx = _tracker.createInstance<ModeSpecContext>(_ctx, getState());
  enterRule(_localctx, 32, ANTLRv4Parser::RuleModeSpec);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(266);
    match(ANTLRv4Parser::MODE);
    setState(267);
    identifier();
    setState(268);
    match(ANTLRv4Parser::SEMI);
    setState(272);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::TOKEN_REF

    || _la == ANTLRv4Parser::FRAGMENT) {
      setState(269);
      lexerRuleSpec();
      setState(274);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RulesContext ------------------------------------------------------------------

ANTLRv4Parser::RulesContext::RulesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ANTLRv4Parser::RuleSpecContext *> ANTLRv4Parser::RulesContext::ruleSpec() {
  return getRuleContexts<ANTLRv4Parser::RuleSpecContext>();
}

ANTLRv4Parser::RuleSpecContext* ANTLRv4Parser::RulesContext::ruleSpec(size_t i) {
  return getRuleContext<ANTLRv4Parser::RuleSpecContext>(i);
}


size_t ANTLRv4Parser::RulesContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleRules;
}

void ANTLRv4Parser::RulesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRules(this);
}

void ANTLRv4Parser::RulesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRules(this);
}


antlrcpp::Any ANTLRv4Parser::RulesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitRules(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::RulesContext* ANTLRv4Parser::rules() {
  RulesContext *_localctx = _tracker.createInstance<RulesContext>(_ctx, getState());
  enterRule(_localctx, 34, ANTLRv4Parser::RuleRules);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(278);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ANTLRv4Parser::TOKEN_REF)
      | (1ULL << ANTLRv4Parser::RULE_REF)
      | (1ULL << ANTLRv4Parser::FRAGMENT)
      | (1ULL << ANTLRv4Parser::PROTECTED)
      | (1ULL << ANTLRv4Parser::PUBLIC)
      | (1ULL << ANTLRv4Parser::PRIVATE))) != 0)) {
      setState(275);
      ruleSpec();
      setState(280);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RuleSpecContext ------------------------------------------------------------------

ANTLRv4Parser::RuleSpecContext::RuleSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::ParserRuleSpecContext* ANTLRv4Parser::RuleSpecContext::parserRuleSpec() {
  return getRuleContext<ANTLRv4Parser::ParserRuleSpecContext>(0);
}

ANTLRv4Parser::LexerRuleSpecContext* ANTLRv4Parser::RuleSpecContext::lexerRuleSpec() {
  return getRuleContext<ANTLRv4Parser::LexerRuleSpecContext>(0);
}


size_t ANTLRv4Parser::RuleSpecContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleRuleSpec;
}

void ANTLRv4Parser::RuleSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRuleSpec(this);
}

void ANTLRv4Parser::RuleSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRuleSpec(this);
}


antlrcpp::Any ANTLRv4Parser::RuleSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitRuleSpec(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::RuleSpecContext* ANTLRv4Parser::ruleSpec() {
  RuleSpecContext *_localctx = _tracker.createInstance<RuleSpecContext>(_ctx, getState());
  enterRule(_localctx, 36, ANTLRv4Parser::RuleRuleSpec);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(283);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(281);
      parserRuleSpec();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(282);
      lexerRuleSpec();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParserRuleSpecContext ------------------------------------------------------------------

ANTLRv4Parser::ParserRuleSpecContext::ParserRuleSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::ParserRuleSpecContext::RULE_REF() {
  return getToken(ANTLRv4Parser::RULE_REF, 0);
}

tree::TerminalNode* ANTLRv4Parser::ParserRuleSpecContext::COLON() {
  return getToken(ANTLRv4Parser::COLON, 0);
}

ANTLRv4Parser::RuleBlockContext* ANTLRv4Parser::ParserRuleSpecContext::ruleBlock() {
  return getRuleContext<ANTLRv4Parser::RuleBlockContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::ParserRuleSpecContext::SEMI() {
  return getToken(ANTLRv4Parser::SEMI, 0);
}

ANTLRv4Parser::ExceptionGroupContext* ANTLRv4Parser::ParserRuleSpecContext::exceptionGroup() {
  return getRuleContext<ANTLRv4Parser::ExceptionGroupContext>(0);
}

ANTLRv4Parser::RuleModifiersContext* ANTLRv4Parser::ParserRuleSpecContext::ruleModifiers() {
  return getRuleContext<ANTLRv4Parser::RuleModifiersContext>(0);
}

ANTLRv4Parser::ArgActionBlockContext* ANTLRv4Parser::ParserRuleSpecContext::argActionBlock() {
  return getRuleContext<ANTLRv4Parser::ArgActionBlockContext>(0);
}

ANTLRv4Parser::RuleReturnsContext* ANTLRv4Parser::ParserRuleSpecContext::ruleReturns() {
  return getRuleContext<ANTLRv4Parser::RuleReturnsContext>(0);
}

ANTLRv4Parser::ThrowsSpecContext* ANTLRv4Parser::ParserRuleSpecContext::throwsSpec() {
  return getRuleContext<ANTLRv4Parser::ThrowsSpecContext>(0);
}

ANTLRv4Parser::LocalsSpecContext* ANTLRv4Parser::ParserRuleSpecContext::localsSpec() {
  return getRuleContext<ANTLRv4Parser::LocalsSpecContext>(0);
}

std::vector<ANTLRv4Parser::RulePrequelContext *> ANTLRv4Parser::ParserRuleSpecContext::rulePrequel() {
  return getRuleContexts<ANTLRv4Parser::RulePrequelContext>();
}

ANTLRv4Parser::RulePrequelContext* ANTLRv4Parser::ParserRuleSpecContext::rulePrequel(size_t i) {
  return getRuleContext<ANTLRv4Parser::RulePrequelContext>(i);
}


size_t ANTLRv4Parser::ParserRuleSpecContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleParserRuleSpec;
}

void ANTLRv4Parser::ParserRuleSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParserRuleSpec(this);
}

void ANTLRv4Parser::ParserRuleSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParserRuleSpec(this);
}


antlrcpp::Any ANTLRv4Parser::ParserRuleSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitParserRuleSpec(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ParserRuleSpecContext* ANTLRv4Parser::parserRuleSpec() {
  ParserRuleSpecContext *_localctx = _tracker.createInstance<ParserRuleSpecContext>(_ctx, getState());
  enterRule(_localctx, 38, ANTLRv4Parser::RuleParserRuleSpec);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(286);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ANTLRv4Parser::FRAGMENT)
      | (1ULL << ANTLRv4Parser::PROTECTED)
      | (1ULL << ANTLRv4Parser::PUBLIC)
      | (1ULL << ANTLRv4Parser::PRIVATE))) != 0)) {
      setState(285);
      ruleModifiers();
    }
    setState(288);
    match(ANTLRv4Parser::RULE_REF);
    setState(290);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::BEGIN_ARGUMENT) {
      setState(289);
      argActionBlock();
    }
    setState(293);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::RETURNS) {
      setState(292);
      ruleReturns();
    }
    setState(296);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::THROWS) {
      setState(295);
      throwsSpec();
    }
    setState(299);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::LOCALS) {
      setState(298);
      localsSpec();
    }
    setState(304);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::OPTIONS

    || _la == ANTLRv4Parser::AT) {
      setState(301);
      rulePrequel();
      setState(306);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(307);
    match(ANTLRv4Parser::COLON);
    setState(308);
    ruleBlock();
    setState(309);
    match(ANTLRv4Parser::SEMI);
    setState(310);
    exceptionGroup();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptionGroupContext ------------------------------------------------------------------

ANTLRv4Parser::ExceptionGroupContext::ExceptionGroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ANTLRv4Parser::ExceptionHandlerContext *> ANTLRv4Parser::ExceptionGroupContext::exceptionHandler() {
  return getRuleContexts<ANTLRv4Parser::ExceptionHandlerContext>();
}

ANTLRv4Parser::ExceptionHandlerContext* ANTLRv4Parser::ExceptionGroupContext::exceptionHandler(size_t i) {
  return getRuleContext<ANTLRv4Parser::ExceptionHandlerContext>(i);
}

ANTLRv4Parser::FinallyClauseContext* ANTLRv4Parser::ExceptionGroupContext::finallyClause() {
  return getRuleContext<ANTLRv4Parser::FinallyClauseContext>(0);
}


size_t ANTLRv4Parser::ExceptionGroupContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleExceptionGroup;
}

void ANTLRv4Parser::ExceptionGroupContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExceptionGroup(this);
}

void ANTLRv4Parser::ExceptionGroupContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExceptionGroup(this);
}


antlrcpp::Any ANTLRv4Parser::ExceptionGroupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitExceptionGroup(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ExceptionGroupContext* ANTLRv4Parser::exceptionGroup() {
  ExceptionGroupContext *_localctx = _tracker.createInstance<ExceptionGroupContext>(_ctx, getState());
  enterRule(_localctx, 40, ANTLRv4Parser::RuleExceptionGroup);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(315);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::CATCH) {
      setState(312);
      exceptionHandler();
      setState(317);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(319);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::FINALLY) {
      setState(318);
      finallyClause();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptionHandlerContext ------------------------------------------------------------------

ANTLRv4Parser::ExceptionHandlerContext::ExceptionHandlerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::ExceptionHandlerContext::CATCH() {
  return getToken(ANTLRv4Parser::CATCH, 0);
}

ANTLRv4Parser::ArgActionBlockContext* ANTLRv4Parser::ExceptionHandlerContext::argActionBlock() {
  return getRuleContext<ANTLRv4Parser::ArgActionBlockContext>(0);
}

ANTLRv4Parser::ActionBlockContext* ANTLRv4Parser::ExceptionHandlerContext::actionBlock() {
  return getRuleContext<ANTLRv4Parser::ActionBlockContext>(0);
}


size_t ANTLRv4Parser::ExceptionHandlerContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleExceptionHandler;
}

void ANTLRv4Parser::ExceptionHandlerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExceptionHandler(this);
}

void ANTLRv4Parser::ExceptionHandlerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExceptionHandler(this);
}


antlrcpp::Any ANTLRv4Parser::ExceptionHandlerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitExceptionHandler(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ExceptionHandlerContext* ANTLRv4Parser::exceptionHandler() {
  ExceptionHandlerContext *_localctx = _tracker.createInstance<ExceptionHandlerContext>(_ctx, getState());
  enterRule(_localctx, 42, ANTLRv4Parser::RuleExceptionHandler);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(321);
    match(ANTLRv4Parser::CATCH);
    setState(322);
    argActionBlock();
    setState(323);
    actionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FinallyClauseContext ------------------------------------------------------------------

ANTLRv4Parser::FinallyClauseContext::FinallyClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::FinallyClauseContext::FINALLY() {
  return getToken(ANTLRv4Parser::FINALLY, 0);
}

ANTLRv4Parser::ActionBlockContext* ANTLRv4Parser::FinallyClauseContext::actionBlock() {
  return getRuleContext<ANTLRv4Parser::ActionBlockContext>(0);
}


size_t ANTLRv4Parser::FinallyClauseContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleFinallyClause;
}

void ANTLRv4Parser::FinallyClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFinallyClause(this);
}

void ANTLRv4Parser::FinallyClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFinallyClause(this);
}


antlrcpp::Any ANTLRv4Parser::FinallyClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitFinallyClause(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::FinallyClauseContext* ANTLRv4Parser::finallyClause() {
  FinallyClauseContext *_localctx = _tracker.createInstance<FinallyClauseContext>(_ctx, getState());
  enterRule(_localctx, 44, ANTLRv4Parser::RuleFinallyClause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(325);
    match(ANTLRv4Parser::FINALLY);
    setState(326);
    actionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RulePrequelContext ------------------------------------------------------------------

ANTLRv4Parser::RulePrequelContext::RulePrequelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::OptionsSpecContext* ANTLRv4Parser::RulePrequelContext::optionsSpec() {
  return getRuleContext<ANTLRv4Parser::OptionsSpecContext>(0);
}

ANTLRv4Parser::RuleActionContext* ANTLRv4Parser::RulePrequelContext::ruleAction() {
  return getRuleContext<ANTLRv4Parser::RuleActionContext>(0);
}


size_t ANTLRv4Parser::RulePrequelContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleRulePrequel;
}

void ANTLRv4Parser::RulePrequelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRulePrequel(this);
}

void ANTLRv4Parser::RulePrequelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRulePrequel(this);
}


antlrcpp::Any ANTLRv4Parser::RulePrequelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitRulePrequel(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::RulePrequelContext* ANTLRv4Parser::rulePrequel() {
  RulePrequelContext *_localctx = _tracker.createInstance<RulePrequelContext>(_ctx, getState());
  enterRule(_localctx, 46, ANTLRv4Parser::RuleRulePrequel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(330);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::OPTIONS: {
        enterOuterAlt(_localctx, 1);
        setState(328);
        optionsSpec();
        break;
      }

      case ANTLRv4Parser::AT: {
        enterOuterAlt(_localctx, 2);
        setState(329);
        ruleAction();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RuleReturnsContext ------------------------------------------------------------------

ANTLRv4Parser::RuleReturnsContext::RuleReturnsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::RuleReturnsContext::RETURNS() {
  return getToken(ANTLRv4Parser::RETURNS, 0);
}

ANTLRv4Parser::ArgActionBlockContext* ANTLRv4Parser::RuleReturnsContext::argActionBlock() {
  return getRuleContext<ANTLRv4Parser::ArgActionBlockContext>(0);
}


size_t ANTLRv4Parser::RuleReturnsContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleRuleReturns;
}

void ANTLRv4Parser::RuleReturnsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRuleReturns(this);
}

void ANTLRv4Parser::RuleReturnsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRuleReturns(this);
}


antlrcpp::Any ANTLRv4Parser::RuleReturnsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitRuleReturns(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::RuleReturnsContext* ANTLRv4Parser::ruleReturns() {
  RuleReturnsContext *_localctx = _tracker.createInstance<RuleReturnsContext>(_ctx, getState());
  enterRule(_localctx, 48, ANTLRv4Parser::RuleRuleReturns);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(332);
    match(ANTLRv4Parser::RETURNS);
    setState(333);
    argActionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThrowsSpecContext ------------------------------------------------------------------

ANTLRv4Parser::ThrowsSpecContext::ThrowsSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::ThrowsSpecContext::THROWS() {
  return getToken(ANTLRv4Parser::THROWS, 0);
}

std::vector<ANTLRv4Parser::IdentifierContext *> ANTLRv4Parser::ThrowsSpecContext::identifier() {
  return getRuleContexts<ANTLRv4Parser::IdentifierContext>();
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::ThrowsSpecContext::identifier(size_t i) {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::ThrowsSpecContext::COMMA() {
  return getTokens(ANTLRv4Parser::COMMA);
}

tree::TerminalNode* ANTLRv4Parser::ThrowsSpecContext::COMMA(size_t i) {
  return getToken(ANTLRv4Parser::COMMA, i);
}


size_t ANTLRv4Parser::ThrowsSpecContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleThrowsSpec;
}

void ANTLRv4Parser::ThrowsSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrowsSpec(this);
}

void ANTLRv4Parser::ThrowsSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrowsSpec(this);
}


antlrcpp::Any ANTLRv4Parser::ThrowsSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitThrowsSpec(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ThrowsSpecContext* ANTLRv4Parser::throwsSpec() {
  ThrowsSpecContext *_localctx = _tracker.createInstance<ThrowsSpecContext>(_ctx, getState());
  enterRule(_localctx, 50, ANTLRv4Parser::RuleThrowsSpec);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(335);
    match(ANTLRv4Parser::THROWS);
    setState(336);
    identifier();
    setState(341);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::COMMA) {
      setState(337);
      match(ANTLRv4Parser::COMMA);
      setState(338);
      identifier();
      setState(343);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalsSpecContext ------------------------------------------------------------------

ANTLRv4Parser::LocalsSpecContext::LocalsSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::LocalsSpecContext::LOCALS() {
  return getToken(ANTLRv4Parser::LOCALS, 0);
}

ANTLRv4Parser::ArgActionBlockContext* ANTLRv4Parser::LocalsSpecContext::argActionBlock() {
  return getRuleContext<ANTLRv4Parser::ArgActionBlockContext>(0);
}


size_t ANTLRv4Parser::LocalsSpecContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLocalsSpec;
}

void ANTLRv4Parser::LocalsSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalsSpec(this);
}

void ANTLRv4Parser::LocalsSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalsSpec(this);
}


antlrcpp::Any ANTLRv4Parser::LocalsSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLocalsSpec(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LocalsSpecContext* ANTLRv4Parser::localsSpec() {
  LocalsSpecContext *_localctx = _tracker.createInstance<LocalsSpecContext>(_ctx, getState());
  enterRule(_localctx, 52, ANTLRv4Parser::RuleLocalsSpec);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(344);
    match(ANTLRv4Parser::LOCALS);
    setState(345);
    argActionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RuleActionContext ------------------------------------------------------------------

ANTLRv4Parser::RuleActionContext::RuleActionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::RuleActionContext::AT() {
  return getToken(ANTLRv4Parser::AT, 0);
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::RuleActionContext::identifier() {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(0);
}

ANTLRv4Parser::ActionBlockContext* ANTLRv4Parser::RuleActionContext::actionBlock() {
  return getRuleContext<ANTLRv4Parser::ActionBlockContext>(0);
}


size_t ANTLRv4Parser::RuleActionContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleRuleAction;
}

void ANTLRv4Parser::RuleActionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRuleAction(this);
}

void ANTLRv4Parser::RuleActionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRuleAction(this);
}


antlrcpp::Any ANTLRv4Parser::RuleActionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitRuleAction(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::RuleActionContext* ANTLRv4Parser::ruleAction() {
  RuleActionContext *_localctx = _tracker.createInstance<RuleActionContext>(_ctx, getState());
  enterRule(_localctx, 54, ANTLRv4Parser::RuleRuleAction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(347);
    match(ANTLRv4Parser::AT);
    setState(348);
    identifier();
    setState(349);
    actionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RuleModifiersContext ------------------------------------------------------------------

ANTLRv4Parser::RuleModifiersContext::RuleModifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ANTLRv4Parser::RuleModifierContext *> ANTLRv4Parser::RuleModifiersContext::ruleModifier() {
  return getRuleContexts<ANTLRv4Parser::RuleModifierContext>();
}

ANTLRv4Parser::RuleModifierContext* ANTLRv4Parser::RuleModifiersContext::ruleModifier(size_t i) {
  return getRuleContext<ANTLRv4Parser::RuleModifierContext>(i);
}


size_t ANTLRv4Parser::RuleModifiersContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleRuleModifiers;
}

void ANTLRv4Parser::RuleModifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRuleModifiers(this);
}

void ANTLRv4Parser::RuleModifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRuleModifiers(this);
}


antlrcpp::Any ANTLRv4Parser::RuleModifiersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitRuleModifiers(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::RuleModifiersContext* ANTLRv4Parser::ruleModifiers() {
  RuleModifiersContext *_localctx = _tracker.createInstance<RuleModifiersContext>(_ctx, getState());
  enterRule(_localctx, 56, ANTLRv4Parser::RuleRuleModifiers);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(352); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(351);
      ruleModifier();
      setState(354); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ANTLRv4Parser::FRAGMENT)
      | (1ULL << ANTLRv4Parser::PROTECTED)
      | (1ULL << ANTLRv4Parser::PUBLIC)
      | (1ULL << ANTLRv4Parser::PRIVATE))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RuleModifierContext ------------------------------------------------------------------

ANTLRv4Parser::RuleModifierContext::RuleModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::RuleModifierContext::PUBLIC() {
  return getToken(ANTLRv4Parser::PUBLIC, 0);
}

tree::TerminalNode* ANTLRv4Parser::RuleModifierContext::PRIVATE() {
  return getToken(ANTLRv4Parser::PRIVATE, 0);
}

tree::TerminalNode* ANTLRv4Parser::RuleModifierContext::PROTECTED() {
  return getToken(ANTLRv4Parser::PROTECTED, 0);
}

tree::TerminalNode* ANTLRv4Parser::RuleModifierContext::FRAGMENT() {
  return getToken(ANTLRv4Parser::FRAGMENT, 0);
}


size_t ANTLRv4Parser::RuleModifierContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleRuleModifier;
}

void ANTLRv4Parser::RuleModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRuleModifier(this);
}

void ANTLRv4Parser::RuleModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRuleModifier(this);
}


antlrcpp::Any ANTLRv4Parser::RuleModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitRuleModifier(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::RuleModifierContext* ANTLRv4Parser::ruleModifier() {
  RuleModifierContext *_localctx = _tracker.createInstance<RuleModifierContext>(_ctx, getState());
  enterRule(_localctx, 58, ANTLRv4Parser::RuleRuleModifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(356);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ANTLRv4Parser::FRAGMENT)
      | (1ULL << ANTLRv4Parser::PROTECTED)
      | (1ULL << ANTLRv4Parser::PUBLIC)
      | (1ULL << ANTLRv4Parser::PRIVATE))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RuleBlockContext ------------------------------------------------------------------

ANTLRv4Parser::RuleBlockContext::RuleBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::RuleAltListContext* ANTLRv4Parser::RuleBlockContext::ruleAltList() {
  return getRuleContext<ANTLRv4Parser::RuleAltListContext>(0);
}


size_t ANTLRv4Parser::RuleBlockContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleRuleBlock;
}

void ANTLRv4Parser::RuleBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRuleBlock(this);
}

void ANTLRv4Parser::RuleBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRuleBlock(this);
}


antlrcpp::Any ANTLRv4Parser::RuleBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitRuleBlock(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::RuleBlockContext* ANTLRv4Parser::ruleBlock() {
  RuleBlockContext *_localctx = _tracker.createInstance<RuleBlockContext>(_ctx, getState());
  enterRule(_localctx, 60, ANTLRv4Parser::RuleRuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(358);
    ruleAltList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RuleAltListContext ------------------------------------------------------------------

ANTLRv4Parser::RuleAltListContext::RuleAltListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ANTLRv4Parser::LabeledAltContext *> ANTLRv4Parser::RuleAltListContext::labeledAlt() {
  return getRuleContexts<ANTLRv4Parser::LabeledAltContext>();
}

ANTLRv4Parser::LabeledAltContext* ANTLRv4Parser::RuleAltListContext::labeledAlt(size_t i) {
  return getRuleContext<ANTLRv4Parser::LabeledAltContext>(i);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::RuleAltListContext::OR() {
  return getTokens(ANTLRv4Parser::OR);
}

tree::TerminalNode* ANTLRv4Parser::RuleAltListContext::OR(size_t i) {
  return getToken(ANTLRv4Parser::OR, i);
}


size_t ANTLRv4Parser::RuleAltListContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleRuleAltList;
}

void ANTLRv4Parser::RuleAltListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRuleAltList(this);
}

void ANTLRv4Parser::RuleAltListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRuleAltList(this);
}


antlrcpp::Any ANTLRv4Parser::RuleAltListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitRuleAltList(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::RuleAltListContext* ANTLRv4Parser::ruleAltList() {
  RuleAltListContext *_localctx = _tracker.createInstance<RuleAltListContext>(_ctx, getState());
  enterRule(_localctx, 62, ANTLRv4Parser::RuleRuleAltList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(360);
    labeledAlt();
    setState(365);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::OR) {
      setState(361);
      match(ANTLRv4Parser::OR);
      setState(362);
      labeledAlt();
      setState(367);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabeledAltContext ------------------------------------------------------------------

ANTLRv4Parser::LabeledAltContext::LabeledAltContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::AlternativeContext* ANTLRv4Parser::LabeledAltContext::alternative() {
  return getRuleContext<ANTLRv4Parser::AlternativeContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::LabeledAltContext::POUND() {
  return getToken(ANTLRv4Parser::POUND, 0);
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::LabeledAltContext::identifier() {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(0);
}


size_t ANTLRv4Parser::LabeledAltContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLabeledAlt;
}

void ANTLRv4Parser::LabeledAltContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabeledAlt(this);
}

void ANTLRv4Parser::LabeledAltContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabeledAlt(this);
}


antlrcpp::Any ANTLRv4Parser::LabeledAltContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLabeledAlt(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LabeledAltContext* ANTLRv4Parser::labeledAlt() {
  LabeledAltContext *_localctx = _tracker.createInstance<LabeledAltContext>(_ctx, getState());
  enterRule(_localctx, 64, ANTLRv4Parser::RuleLabeledAlt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(368);
    alternative();
    setState(371);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::POUND) {
      setState(369);
      match(ANTLRv4Parser::POUND);
      setState(370);
      identifier();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerRuleSpecContext ------------------------------------------------------------------

ANTLRv4Parser::LexerRuleSpecContext::LexerRuleSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::LexerRuleSpecContext::TOKEN_REF() {
  return getToken(ANTLRv4Parser::TOKEN_REF, 0);
}

tree::TerminalNode* ANTLRv4Parser::LexerRuleSpecContext::COLON() {
  return getToken(ANTLRv4Parser::COLON, 0);
}

ANTLRv4Parser::LexerRuleBlockContext* ANTLRv4Parser::LexerRuleSpecContext::lexerRuleBlock() {
  return getRuleContext<ANTLRv4Parser::LexerRuleBlockContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::LexerRuleSpecContext::SEMI() {
  return getToken(ANTLRv4Parser::SEMI, 0);
}

tree::TerminalNode* ANTLRv4Parser::LexerRuleSpecContext::FRAGMENT() {
  return getToken(ANTLRv4Parser::FRAGMENT, 0);
}


size_t ANTLRv4Parser::LexerRuleSpecContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerRuleSpec;
}

void ANTLRv4Parser::LexerRuleSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerRuleSpec(this);
}

void ANTLRv4Parser::LexerRuleSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerRuleSpec(this);
}


antlrcpp::Any ANTLRv4Parser::LexerRuleSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerRuleSpec(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerRuleSpecContext* ANTLRv4Parser::lexerRuleSpec() {
  LexerRuleSpecContext *_localctx = _tracker.createInstance<LexerRuleSpecContext>(_ctx, getState());
  enterRule(_localctx, 66, ANTLRv4Parser::RuleLexerRuleSpec);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(374);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::FRAGMENT) {
      setState(373);
      match(ANTLRv4Parser::FRAGMENT);
    }
    setState(376);
    match(ANTLRv4Parser::TOKEN_REF);
    setState(377);
    match(ANTLRv4Parser::COLON);
    setState(378);
    lexerRuleBlock();
    setState(379);
    match(ANTLRv4Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerRuleBlockContext ------------------------------------------------------------------

ANTLRv4Parser::LexerRuleBlockContext::LexerRuleBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::LexerAltListContext* ANTLRv4Parser::LexerRuleBlockContext::lexerAltList() {
  return getRuleContext<ANTLRv4Parser::LexerAltListContext>(0);
}


size_t ANTLRv4Parser::LexerRuleBlockContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerRuleBlock;
}

void ANTLRv4Parser::LexerRuleBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerRuleBlock(this);
}

void ANTLRv4Parser::LexerRuleBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerRuleBlock(this);
}


antlrcpp::Any ANTLRv4Parser::LexerRuleBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerRuleBlock(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerRuleBlockContext* ANTLRv4Parser::lexerRuleBlock() {
  LexerRuleBlockContext *_localctx = _tracker.createInstance<LexerRuleBlockContext>(_ctx, getState());
  enterRule(_localctx, 68, ANTLRv4Parser::RuleLexerRuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(381);
    lexerAltList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerAltListContext ------------------------------------------------------------------

ANTLRv4Parser::LexerAltListContext::LexerAltListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ANTLRv4Parser::LexerAltContext *> ANTLRv4Parser::LexerAltListContext::lexerAlt() {
  return getRuleContexts<ANTLRv4Parser::LexerAltContext>();
}

ANTLRv4Parser::LexerAltContext* ANTLRv4Parser::LexerAltListContext::lexerAlt(size_t i) {
  return getRuleContext<ANTLRv4Parser::LexerAltContext>(i);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::LexerAltListContext::OR() {
  return getTokens(ANTLRv4Parser::OR);
}

tree::TerminalNode* ANTLRv4Parser::LexerAltListContext::OR(size_t i) {
  return getToken(ANTLRv4Parser::OR, i);
}


size_t ANTLRv4Parser::LexerAltListContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerAltList;
}

void ANTLRv4Parser::LexerAltListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerAltList(this);
}

void ANTLRv4Parser::LexerAltListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerAltList(this);
}


antlrcpp::Any ANTLRv4Parser::LexerAltListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerAltList(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerAltListContext* ANTLRv4Parser::lexerAltList() {
  LexerAltListContext *_localctx = _tracker.createInstance<LexerAltListContext>(_ctx, getState());
  enterRule(_localctx, 70, ANTLRv4Parser::RuleLexerAltList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(383);
    lexerAlt();
    setState(388);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::OR) {
      setState(384);
      match(ANTLRv4Parser::OR);
      setState(385);
      lexerAlt();
      setState(390);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerAltContext ------------------------------------------------------------------

ANTLRv4Parser::LexerAltContext::LexerAltContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::LexerElementsContext* ANTLRv4Parser::LexerAltContext::lexerElements() {
  return getRuleContext<ANTLRv4Parser::LexerElementsContext>(0);
}

ANTLRv4Parser::LexerCommandsContext* ANTLRv4Parser::LexerAltContext::lexerCommands() {
  return getRuleContext<ANTLRv4Parser::LexerCommandsContext>(0);
}


size_t ANTLRv4Parser::LexerAltContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerAlt;
}

void ANTLRv4Parser::LexerAltContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerAlt(this);
}

void ANTLRv4Parser::LexerAltContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerAlt(this);
}


antlrcpp::Any ANTLRv4Parser::LexerAltContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerAlt(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerAltContext* ANTLRv4Parser::lexerAlt() {
  LexerAltContext *_localctx = _tracker.createInstance<LexerAltContext>(_ctx, getState());
  enterRule(_localctx, 72, ANTLRv4Parser::RuleLexerAlt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(396);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(391);
      lexerElements();
      setState(393);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ANTLRv4Parser::RARROW) {
        setState(392);
        lexerCommands();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);

      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerElementsContext ------------------------------------------------------------------

ANTLRv4Parser::LexerElementsContext::LexerElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ANTLRv4Parser::LexerElementContext *> ANTLRv4Parser::LexerElementsContext::lexerElement() {
  return getRuleContexts<ANTLRv4Parser::LexerElementContext>();
}

ANTLRv4Parser::LexerElementContext* ANTLRv4Parser::LexerElementsContext::lexerElement(size_t i) {
  return getRuleContext<ANTLRv4Parser::LexerElementContext>(i);
}


size_t ANTLRv4Parser::LexerElementsContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerElements;
}

void ANTLRv4Parser::LexerElementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerElements(this);
}

void ANTLRv4Parser::LexerElementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerElements(this);
}


antlrcpp::Any ANTLRv4Parser::LexerElementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerElements(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerElementsContext* ANTLRv4Parser::lexerElements() {
  LexerElementsContext *_localctx = _tracker.createInstance<LexerElementsContext>(_ctx, getState());
  enterRule(_localctx, 74, ANTLRv4Parser::RuleLexerElements);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(404);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::TOKEN_REF:
      case ANTLRv4Parser::RULE_REF:
      case ANTLRv4Parser::LEXER_CHAR_SET:
      case ANTLRv4Parser::STRING_LITERAL:
      case ANTLRv4Parser::BEGIN_ACTION:
      case ANTLRv4Parser::LPAREN:
      case ANTLRv4Parser::DOT:
      case ANTLRv4Parser::NOT: {
        enterOuterAlt(_localctx, 1);
        setState(399); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(398);
          lexerElement();
          setState(401); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << ANTLRv4Parser::TOKEN_REF)
          | (1ULL << ANTLRv4Parser::RULE_REF)
          | (1ULL << ANTLRv4Parser::LEXER_CHAR_SET)
          | (1ULL << ANTLRv4Parser::STRING_LITERAL)
          | (1ULL << ANTLRv4Parser::BEGIN_ACTION)
          | (1ULL << ANTLRv4Parser::LPAREN)
          | (1ULL << ANTLRv4Parser::DOT)
          | (1ULL << ANTLRv4Parser::NOT))) != 0));
        break;
      }

      case ANTLRv4Parser::SEMI:
      case ANTLRv4Parser::RPAREN:
      case ANTLRv4Parser::RARROW:
      case ANTLRv4Parser::OR: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerElementContext ------------------------------------------------------------------

ANTLRv4Parser::LexerElementContext::LexerElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::LabeledLexerElementContext* ANTLRv4Parser::LexerElementContext::labeledLexerElement() {
  return getRuleContext<ANTLRv4Parser::LabeledLexerElementContext>(0);
}

ANTLRv4Parser::EbnfSuffixContext* ANTLRv4Parser::LexerElementContext::ebnfSuffix() {
  return getRuleContext<ANTLRv4Parser::EbnfSuffixContext>(0);
}

ANTLRv4Parser::LexerAtomContext* ANTLRv4Parser::LexerElementContext::lexerAtom() {
  return getRuleContext<ANTLRv4Parser::LexerAtomContext>(0);
}

ANTLRv4Parser::LexerBlockContext* ANTLRv4Parser::LexerElementContext::lexerBlock() {
  return getRuleContext<ANTLRv4Parser::LexerBlockContext>(0);
}

ANTLRv4Parser::ActionBlockContext* ANTLRv4Parser::LexerElementContext::actionBlock() {
  return getRuleContext<ANTLRv4Parser::ActionBlockContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::LexerElementContext::QUESTION() {
  return getToken(ANTLRv4Parser::QUESTION, 0);
}


size_t ANTLRv4Parser::LexerElementContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerElement;
}

void ANTLRv4Parser::LexerElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerElement(this);
}

void ANTLRv4Parser::LexerElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerElement(this);
}


antlrcpp::Any ANTLRv4Parser::LexerElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerElement(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerElementContext* ANTLRv4Parser::lexerElement() {
  LexerElementContext *_localctx = _tracker.createInstance<LexerElementContext>(_ctx, getState());
  enterRule(_localctx, 76, ANTLRv4Parser::RuleLexerElement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(422);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(406);
      labeledLexerElement();
      setState(408);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ANTLRv4Parser::QUESTION)
        | (1ULL << ANTLRv4Parser::STAR)
        | (1ULL << ANTLRv4Parser::PLUS))) != 0)) {
        setState(407);
        ebnfSuffix();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(410);
      lexerAtom();
      setState(412);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ANTLRv4Parser::QUESTION)
        | (1ULL << ANTLRv4Parser::STAR)
        | (1ULL << ANTLRv4Parser::PLUS))) != 0)) {
        setState(411);
        ebnfSuffix();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(414);
      lexerBlock();
      setState(416);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ANTLRv4Parser::QUESTION)
        | (1ULL << ANTLRv4Parser::STAR)
        | (1ULL << ANTLRv4Parser::PLUS))) != 0)) {
        setState(415);
        ebnfSuffix();
      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(418);
      actionBlock();
      setState(420);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ANTLRv4Parser::QUESTION) {
        setState(419);
        match(ANTLRv4Parser::QUESTION);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabeledLexerElementContext ------------------------------------------------------------------

ANTLRv4Parser::LabeledLexerElementContext::LabeledLexerElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::LabeledLexerElementContext::identifier() {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::LabeledLexerElementContext::ASSIGN() {
  return getToken(ANTLRv4Parser::ASSIGN, 0);
}

tree::TerminalNode* ANTLRv4Parser::LabeledLexerElementContext::PLUS_ASSIGN() {
  return getToken(ANTLRv4Parser::PLUS_ASSIGN, 0);
}

ANTLRv4Parser::LexerAtomContext* ANTLRv4Parser::LabeledLexerElementContext::lexerAtom() {
  return getRuleContext<ANTLRv4Parser::LexerAtomContext>(0);
}

ANTLRv4Parser::LexerBlockContext* ANTLRv4Parser::LabeledLexerElementContext::lexerBlock() {
  return getRuleContext<ANTLRv4Parser::LexerBlockContext>(0);
}


size_t ANTLRv4Parser::LabeledLexerElementContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLabeledLexerElement;
}

void ANTLRv4Parser::LabeledLexerElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabeledLexerElement(this);
}

void ANTLRv4Parser::LabeledLexerElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabeledLexerElement(this);
}


antlrcpp::Any ANTLRv4Parser::LabeledLexerElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLabeledLexerElement(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LabeledLexerElementContext* ANTLRv4Parser::labeledLexerElement() {
  LabeledLexerElementContext *_localctx = _tracker.createInstance<LabeledLexerElementContext>(_ctx, getState());
  enterRule(_localctx, 78, ANTLRv4Parser::RuleLabeledLexerElement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(424);
    identifier();
    setState(425);
    _la = _input->LA(1);
    if (!(_la == ANTLRv4Parser::ASSIGN

    || _la == ANTLRv4Parser::PLUS_ASSIGN)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(428);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::TOKEN_REF:
      case ANTLRv4Parser::LEXER_CHAR_SET:
      case ANTLRv4Parser::STRING_LITERAL:
      case ANTLRv4Parser::DOT:
      case ANTLRv4Parser::NOT: {
        setState(426);
        lexerAtom();
        break;
      }

      case ANTLRv4Parser::LPAREN: {
        setState(427);
        lexerBlock();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerBlockContext ------------------------------------------------------------------

ANTLRv4Parser::LexerBlockContext::LexerBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::LexerBlockContext::LPAREN() {
  return getToken(ANTLRv4Parser::LPAREN, 0);
}

ANTLRv4Parser::LexerAltListContext* ANTLRv4Parser::LexerBlockContext::lexerAltList() {
  return getRuleContext<ANTLRv4Parser::LexerAltListContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::LexerBlockContext::RPAREN() {
  return getToken(ANTLRv4Parser::RPAREN, 0);
}


size_t ANTLRv4Parser::LexerBlockContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerBlock;
}

void ANTLRv4Parser::LexerBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerBlock(this);
}

void ANTLRv4Parser::LexerBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerBlock(this);
}


antlrcpp::Any ANTLRv4Parser::LexerBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerBlock(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerBlockContext* ANTLRv4Parser::lexerBlock() {
  LexerBlockContext *_localctx = _tracker.createInstance<LexerBlockContext>(_ctx, getState());
  enterRule(_localctx, 80, ANTLRv4Parser::RuleLexerBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(430);
    match(ANTLRv4Parser::LPAREN);
    setState(431);
    lexerAltList();
    setState(432);
    match(ANTLRv4Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerCommandsContext ------------------------------------------------------------------

ANTLRv4Parser::LexerCommandsContext::LexerCommandsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::LexerCommandsContext::RARROW() {
  return getToken(ANTLRv4Parser::RARROW, 0);
}

std::vector<ANTLRv4Parser::LexerCommandContext *> ANTLRv4Parser::LexerCommandsContext::lexerCommand() {
  return getRuleContexts<ANTLRv4Parser::LexerCommandContext>();
}

ANTLRv4Parser::LexerCommandContext* ANTLRv4Parser::LexerCommandsContext::lexerCommand(size_t i) {
  return getRuleContext<ANTLRv4Parser::LexerCommandContext>(i);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::LexerCommandsContext::COMMA() {
  return getTokens(ANTLRv4Parser::COMMA);
}

tree::TerminalNode* ANTLRv4Parser::LexerCommandsContext::COMMA(size_t i) {
  return getToken(ANTLRv4Parser::COMMA, i);
}


size_t ANTLRv4Parser::LexerCommandsContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerCommands;
}

void ANTLRv4Parser::LexerCommandsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerCommands(this);
}

void ANTLRv4Parser::LexerCommandsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerCommands(this);
}


antlrcpp::Any ANTLRv4Parser::LexerCommandsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerCommands(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerCommandsContext* ANTLRv4Parser::lexerCommands() {
  LexerCommandsContext *_localctx = _tracker.createInstance<LexerCommandsContext>(_ctx, getState());
  enterRule(_localctx, 82, ANTLRv4Parser::RuleLexerCommands);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    match(ANTLRv4Parser::RARROW);
    setState(435);
    lexerCommand();
    setState(440);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::COMMA) {
      setState(436);
      match(ANTLRv4Parser::COMMA);
      setState(437);
      lexerCommand();
      setState(442);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerCommandContext ------------------------------------------------------------------

ANTLRv4Parser::LexerCommandContext::LexerCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::LexerCommandNameContext* ANTLRv4Parser::LexerCommandContext::lexerCommandName() {
  return getRuleContext<ANTLRv4Parser::LexerCommandNameContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::LexerCommandContext::LPAREN() {
  return getToken(ANTLRv4Parser::LPAREN, 0);
}

ANTLRv4Parser::LexerCommandExprContext* ANTLRv4Parser::LexerCommandContext::lexerCommandExpr() {
  return getRuleContext<ANTLRv4Parser::LexerCommandExprContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::LexerCommandContext::RPAREN() {
  return getToken(ANTLRv4Parser::RPAREN, 0);
}


size_t ANTLRv4Parser::LexerCommandContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerCommand;
}

void ANTLRv4Parser::LexerCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerCommand(this);
}

void ANTLRv4Parser::LexerCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerCommand(this);
}


antlrcpp::Any ANTLRv4Parser::LexerCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerCommand(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerCommandContext* ANTLRv4Parser::lexerCommand() {
  LexerCommandContext *_localctx = _tracker.createInstance<LexerCommandContext>(_ctx, getState());
  enterRule(_localctx, 84, ANTLRv4Parser::RuleLexerCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(449);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(443);
      lexerCommandName();
      setState(444);
      match(ANTLRv4Parser::LPAREN);
      setState(445);
      lexerCommandExpr();
      setState(446);
      match(ANTLRv4Parser::RPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(448);
      lexerCommandName();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerCommandNameContext ------------------------------------------------------------------

ANTLRv4Parser::LexerCommandNameContext::LexerCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::LexerCommandNameContext::identifier() {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::LexerCommandNameContext::MODE() {
  return getToken(ANTLRv4Parser::MODE, 0);
}


size_t ANTLRv4Parser::LexerCommandNameContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerCommandName;
}

void ANTLRv4Parser::LexerCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerCommandName(this);
}

void ANTLRv4Parser::LexerCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerCommandName(this);
}


antlrcpp::Any ANTLRv4Parser::LexerCommandNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerCommandName(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerCommandNameContext* ANTLRv4Parser::lexerCommandName() {
  LexerCommandNameContext *_localctx = _tracker.createInstance<LexerCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 86, ANTLRv4Parser::RuleLexerCommandName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(453);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::TOKEN_REF:
      case ANTLRv4Parser::RULE_REF: {
        enterOuterAlt(_localctx, 1);
        setState(451);
        identifier();
        break;
      }

      case ANTLRv4Parser::MODE: {
        enterOuterAlt(_localctx, 2);
        setState(452);
        match(ANTLRv4Parser::MODE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerCommandExprContext ------------------------------------------------------------------

ANTLRv4Parser::LexerCommandExprContext::LexerCommandExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::LexerCommandExprContext::identifier() {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::LexerCommandExprContext::INT() {
  return getToken(ANTLRv4Parser::INT, 0);
}


size_t ANTLRv4Parser::LexerCommandExprContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerCommandExpr;
}

void ANTLRv4Parser::LexerCommandExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerCommandExpr(this);
}

void ANTLRv4Parser::LexerCommandExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerCommandExpr(this);
}


antlrcpp::Any ANTLRv4Parser::LexerCommandExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerCommandExpr(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerCommandExprContext* ANTLRv4Parser::lexerCommandExpr() {
  LexerCommandExprContext *_localctx = _tracker.createInstance<LexerCommandExprContext>(_ctx, getState());
  enterRule(_localctx, 88, ANTLRv4Parser::RuleLexerCommandExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(457);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::TOKEN_REF:
      case ANTLRv4Parser::RULE_REF: {
        enterOuterAlt(_localctx, 1);
        setState(455);
        identifier();
        break;
      }

      case ANTLRv4Parser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(456);
        match(ANTLRv4Parser::INT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AltListContext ------------------------------------------------------------------

ANTLRv4Parser::AltListContext::AltListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ANTLRv4Parser::AlternativeContext *> ANTLRv4Parser::AltListContext::alternative() {
  return getRuleContexts<ANTLRv4Parser::AlternativeContext>();
}

ANTLRv4Parser::AlternativeContext* ANTLRv4Parser::AltListContext::alternative(size_t i) {
  return getRuleContext<ANTLRv4Parser::AlternativeContext>(i);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::AltListContext::OR() {
  return getTokens(ANTLRv4Parser::OR);
}

tree::TerminalNode* ANTLRv4Parser::AltListContext::OR(size_t i) {
  return getToken(ANTLRv4Parser::OR, i);
}


size_t ANTLRv4Parser::AltListContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleAltList;
}

void ANTLRv4Parser::AltListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAltList(this);
}

void ANTLRv4Parser::AltListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAltList(this);
}


antlrcpp::Any ANTLRv4Parser::AltListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitAltList(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::AltListContext* ANTLRv4Parser::altList() {
  AltListContext *_localctx = _tracker.createInstance<AltListContext>(_ctx, getState());
  enterRule(_localctx, 90, ANTLRv4Parser::RuleAltList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(459);
    alternative();
    setState(464);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::OR) {
      setState(460);
      match(ANTLRv4Parser::OR);
      setState(461);
      alternative();
      setState(466);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AlternativeContext ------------------------------------------------------------------

ANTLRv4Parser::AlternativeContext::AlternativeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::ElementOptionsContext* ANTLRv4Parser::AlternativeContext::elementOptions() {
  return getRuleContext<ANTLRv4Parser::ElementOptionsContext>(0);
}

std::vector<ANTLRv4Parser::ElementContext *> ANTLRv4Parser::AlternativeContext::element() {
  return getRuleContexts<ANTLRv4Parser::ElementContext>();
}

ANTLRv4Parser::ElementContext* ANTLRv4Parser::AlternativeContext::element(size_t i) {
  return getRuleContext<ANTLRv4Parser::ElementContext>(i);
}


size_t ANTLRv4Parser::AlternativeContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleAlternative;
}

void ANTLRv4Parser::AlternativeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlternative(this);
}

void ANTLRv4Parser::AlternativeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlternative(this);
}


antlrcpp::Any ANTLRv4Parser::AlternativeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitAlternative(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::AlternativeContext* ANTLRv4Parser::alternative() {
  AlternativeContext *_localctx = _tracker.createInstance<AlternativeContext>(_ctx, getState());
  enterRule(_localctx, 92, ANTLRv4Parser::RuleAlternative);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(476);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::TOKEN_REF:
      case ANTLRv4Parser::RULE_REF:
      case ANTLRv4Parser::STRING_LITERAL:
      case ANTLRv4Parser::BEGIN_ACTION:
      case ANTLRv4Parser::LPAREN:
      case ANTLRv4Parser::LT:
      case ANTLRv4Parser::DOT:
      case ANTLRv4Parser::NOT: {
        enterOuterAlt(_localctx, 1);
        setState(468);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ANTLRv4Parser::LT) {
          setState(467);
          elementOptions();
        }
        setState(471); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(470);
          element();
          setState(473); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << ANTLRv4Parser::TOKEN_REF)
          | (1ULL << ANTLRv4Parser::RULE_REF)
          | (1ULL << ANTLRv4Parser::STRING_LITERAL)
          | (1ULL << ANTLRv4Parser::BEGIN_ACTION)
          | (1ULL << ANTLRv4Parser::LPAREN)
          | (1ULL << ANTLRv4Parser::DOT)
          | (1ULL << ANTLRv4Parser::NOT))) != 0));
        break;
      }

      case ANTLRv4Parser::SEMI:
      case ANTLRv4Parser::RPAREN:
      case ANTLRv4Parser::OR:
      case ANTLRv4Parser::POUND: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementContext ------------------------------------------------------------------

ANTLRv4Parser::ElementContext::ElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::LabeledElementContext* ANTLRv4Parser::ElementContext::labeledElement() {
  return getRuleContext<ANTLRv4Parser::LabeledElementContext>(0);
}

ANTLRv4Parser::EbnfSuffixContext* ANTLRv4Parser::ElementContext::ebnfSuffix() {
  return getRuleContext<ANTLRv4Parser::EbnfSuffixContext>(0);
}

ANTLRv4Parser::AtomContext* ANTLRv4Parser::ElementContext::atom() {
  return getRuleContext<ANTLRv4Parser::AtomContext>(0);
}

ANTLRv4Parser::EbnfContext* ANTLRv4Parser::ElementContext::ebnf() {
  return getRuleContext<ANTLRv4Parser::EbnfContext>(0);
}

ANTLRv4Parser::ActionBlockContext* ANTLRv4Parser::ElementContext::actionBlock() {
  return getRuleContext<ANTLRv4Parser::ActionBlockContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::ElementContext::QUESTION() {
  return getToken(ANTLRv4Parser::QUESTION, 0);
}


size_t ANTLRv4Parser::ElementContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleElement;
}

void ANTLRv4Parser::ElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElement(this);
}

void ANTLRv4Parser::ElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElement(this);
}


antlrcpp::Any ANTLRv4Parser::ElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitElement(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ElementContext* ANTLRv4Parser::element() {
  ElementContext *_localctx = _tracker.createInstance<ElementContext>(_ctx, getState());
  enterRule(_localctx, 94, ANTLRv4Parser::RuleElement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(493);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(478);
      labeledElement();
      setState(481);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ANTLRv4Parser::QUESTION:
        case ANTLRv4Parser::STAR:
        case ANTLRv4Parser::PLUS: {
          setState(479);
          ebnfSuffix();
          break;
        }

        case ANTLRv4Parser::TOKEN_REF:
        case ANTLRv4Parser::RULE_REF:
        case ANTLRv4Parser::STRING_LITERAL:
        case ANTLRv4Parser::BEGIN_ACTION:
        case ANTLRv4Parser::SEMI:
        case ANTLRv4Parser::LPAREN:
        case ANTLRv4Parser::RPAREN:
        case ANTLRv4Parser::OR:
        case ANTLRv4Parser::DOT:
        case ANTLRv4Parser::POUND:
        case ANTLRv4Parser::NOT: {
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(483);
      atom();
      setState(486);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ANTLRv4Parser::QUESTION:
        case ANTLRv4Parser::STAR:
        case ANTLRv4Parser::PLUS: {
          setState(484);
          ebnfSuffix();
          break;
        }

        case ANTLRv4Parser::TOKEN_REF:
        case ANTLRv4Parser::RULE_REF:
        case ANTLRv4Parser::STRING_LITERAL:
        case ANTLRv4Parser::BEGIN_ACTION:
        case ANTLRv4Parser::SEMI:
        case ANTLRv4Parser::LPAREN:
        case ANTLRv4Parser::RPAREN:
        case ANTLRv4Parser::OR:
        case ANTLRv4Parser::DOT:
        case ANTLRv4Parser::POUND:
        case ANTLRv4Parser::NOT: {
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(488);
      ebnf();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(489);
      actionBlock();
      setState(491);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ANTLRv4Parser::QUESTION) {
        setState(490);
        match(ANTLRv4Parser::QUESTION);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabeledElementContext ------------------------------------------------------------------

ANTLRv4Parser::LabeledElementContext::LabeledElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::LabeledElementContext::identifier() {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::LabeledElementContext::ASSIGN() {
  return getToken(ANTLRv4Parser::ASSIGN, 0);
}

tree::TerminalNode* ANTLRv4Parser::LabeledElementContext::PLUS_ASSIGN() {
  return getToken(ANTLRv4Parser::PLUS_ASSIGN, 0);
}

ANTLRv4Parser::AtomContext* ANTLRv4Parser::LabeledElementContext::atom() {
  return getRuleContext<ANTLRv4Parser::AtomContext>(0);
}

ANTLRv4Parser::BlockContext* ANTLRv4Parser::LabeledElementContext::block() {
  return getRuleContext<ANTLRv4Parser::BlockContext>(0);
}


size_t ANTLRv4Parser::LabeledElementContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLabeledElement;
}

void ANTLRv4Parser::LabeledElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabeledElement(this);
}

void ANTLRv4Parser::LabeledElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabeledElement(this);
}


antlrcpp::Any ANTLRv4Parser::LabeledElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLabeledElement(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LabeledElementContext* ANTLRv4Parser::labeledElement() {
  LabeledElementContext *_localctx = _tracker.createInstance<LabeledElementContext>(_ctx, getState());
  enterRule(_localctx, 96, ANTLRv4Parser::RuleLabeledElement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(495);
    identifier();
    setState(496);
    _la = _input->LA(1);
    if (!(_la == ANTLRv4Parser::ASSIGN

    || _la == ANTLRv4Parser::PLUS_ASSIGN)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(499);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::TOKEN_REF:
      case ANTLRv4Parser::RULE_REF:
      case ANTLRv4Parser::STRING_LITERAL:
      case ANTLRv4Parser::DOT:
      case ANTLRv4Parser::NOT: {
        setState(497);
        atom();
        break;
      }

      case ANTLRv4Parser::LPAREN: {
        setState(498);
        block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EbnfContext ------------------------------------------------------------------

ANTLRv4Parser::EbnfContext::EbnfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::BlockContext* ANTLRv4Parser::EbnfContext::block() {
  return getRuleContext<ANTLRv4Parser::BlockContext>(0);
}

ANTLRv4Parser::BlockSuffixContext* ANTLRv4Parser::EbnfContext::blockSuffix() {
  return getRuleContext<ANTLRv4Parser::BlockSuffixContext>(0);
}


size_t ANTLRv4Parser::EbnfContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleEbnf;
}

void ANTLRv4Parser::EbnfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEbnf(this);
}

void ANTLRv4Parser::EbnfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEbnf(this);
}


antlrcpp::Any ANTLRv4Parser::EbnfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitEbnf(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::EbnfContext* ANTLRv4Parser::ebnf() {
  EbnfContext *_localctx = _tracker.createInstance<EbnfContext>(_ctx, getState());
  enterRule(_localctx, 98, ANTLRv4Parser::RuleEbnf);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(501);
    block();
    setState(503);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ANTLRv4Parser::QUESTION)
      | (1ULL << ANTLRv4Parser::STAR)
      | (1ULL << ANTLRv4Parser::PLUS))) != 0)) {
      setState(502);
      blockSuffix();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockSuffixContext ------------------------------------------------------------------

ANTLRv4Parser::BlockSuffixContext::BlockSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::EbnfSuffixContext* ANTLRv4Parser::BlockSuffixContext::ebnfSuffix() {
  return getRuleContext<ANTLRv4Parser::EbnfSuffixContext>(0);
}


size_t ANTLRv4Parser::BlockSuffixContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleBlockSuffix;
}

void ANTLRv4Parser::BlockSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockSuffix(this);
}

void ANTLRv4Parser::BlockSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockSuffix(this);
}


antlrcpp::Any ANTLRv4Parser::BlockSuffixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitBlockSuffix(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::BlockSuffixContext* ANTLRv4Parser::blockSuffix() {
  BlockSuffixContext *_localctx = _tracker.createInstance<BlockSuffixContext>(_ctx, getState());
  enterRule(_localctx, 100, ANTLRv4Parser::RuleBlockSuffix);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(505);
    ebnfSuffix();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EbnfSuffixContext ------------------------------------------------------------------

ANTLRv4Parser::EbnfSuffixContext::EbnfSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::EbnfSuffixContext::QUESTION() {
  return getTokens(ANTLRv4Parser::QUESTION);
}

tree::TerminalNode* ANTLRv4Parser::EbnfSuffixContext::QUESTION(size_t i) {
  return getToken(ANTLRv4Parser::QUESTION, i);
}

tree::TerminalNode* ANTLRv4Parser::EbnfSuffixContext::STAR() {
  return getToken(ANTLRv4Parser::STAR, 0);
}

tree::TerminalNode* ANTLRv4Parser::EbnfSuffixContext::PLUS() {
  return getToken(ANTLRv4Parser::PLUS, 0);
}


size_t ANTLRv4Parser::EbnfSuffixContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleEbnfSuffix;
}

void ANTLRv4Parser::EbnfSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEbnfSuffix(this);
}

void ANTLRv4Parser::EbnfSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEbnfSuffix(this);
}


antlrcpp::Any ANTLRv4Parser::EbnfSuffixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitEbnfSuffix(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::EbnfSuffixContext* ANTLRv4Parser::ebnfSuffix() {
  EbnfSuffixContext *_localctx = _tracker.createInstance<EbnfSuffixContext>(_ctx, getState());
  enterRule(_localctx, 102, ANTLRv4Parser::RuleEbnfSuffix);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(519);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::QUESTION: {
        enterOuterAlt(_localctx, 1);
        setState(507);
        match(ANTLRv4Parser::QUESTION);
        setState(509);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ANTLRv4Parser::QUESTION) {
          setState(508);
          match(ANTLRv4Parser::QUESTION);
        }
        break;
      }

      case ANTLRv4Parser::STAR: {
        enterOuterAlt(_localctx, 2);
        setState(511);
        match(ANTLRv4Parser::STAR);
        setState(513);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ANTLRv4Parser::QUESTION) {
          setState(512);
          match(ANTLRv4Parser::QUESTION);
        }
        break;
      }

      case ANTLRv4Parser::PLUS: {
        enterOuterAlt(_localctx, 3);
        setState(515);
        match(ANTLRv4Parser::PLUS);
        setState(517);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ANTLRv4Parser::QUESTION) {
          setState(516);
          match(ANTLRv4Parser::QUESTION);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerAtomContext ------------------------------------------------------------------

ANTLRv4Parser::LexerAtomContext::LexerAtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::CharacterRangeContext* ANTLRv4Parser::LexerAtomContext::characterRange() {
  return getRuleContext<ANTLRv4Parser::CharacterRangeContext>(0);
}

ANTLRv4Parser::TerminalContext* ANTLRv4Parser::LexerAtomContext::terminal() {
  return getRuleContext<ANTLRv4Parser::TerminalContext>(0);
}

ANTLRv4Parser::NotSetContext* ANTLRv4Parser::LexerAtomContext::notSet() {
  return getRuleContext<ANTLRv4Parser::NotSetContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::LexerAtomContext::LEXER_CHAR_SET() {
  return getToken(ANTLRv4Parser::LEXER_CHAR_SET, 0);
}

tree::TerminalNode* ANTLRv4Parser::LexerAtomContext::DOT() {
  return getToken(ANTLRv4Parser::DOT, 0);
}

ANTLRv4Parser::ElementOptionsContext* ANTLRv4Parser::LexerAtomContext::elementOptions() {
  return getRuleContext<ANTLRv4Parser::ElementOptionsContext>(0);
}


size_t ANTLRv4Parser::LexerAtomContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerAtom;
}

void ANTLRv4Parser::LexerAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerAtom(this);
}

void ANTLRv4Parser::LexerAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerAtom(this);
}


antlrcpp::Any ANTLRv4Parser::LexerAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerAtom(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerAtomContext* ANTLRv4Parser::lexerAtom() {
  LexerAtomContext *_localctx = _tracker.createInstance<LexerAtomContext>(_ctx, getState());
  enterRule(_localctx, 104, ANTLRv4Parser::RuleLexerAtom);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(529);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(521);
      characterRange();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(522);
      terminal();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(523);
      notSet();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(524);
      match(ANTLRv4Parser::LEXER_CHAR_SET);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(525);
      match(ANTLRv4Parser::DOT);
      setState(527);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ANTLRv4Parser::LT) {
        setState(526);
        elementOptions();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

ANTLRv4Parser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::TerminalContext* ANTLRv4Parser::AtomContext::terminal() {
  return getRuleContext<ANTLRv4Parser::TerminalContext>(0);
}

ANTLRv4Parser::RulerefContext* ANTLRv4Parser::AtomContext::ruleref() {
  return getRuleContext<ANTLRv4Parser::RulerefContext>(0);
}

ANTLRv4Parser::NotSetContext* ANTLRv4Parser::AtomContext::notSet() {
  return getRuleContext<ANTLRv4Parser::NotSetContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::AtomContext::DOT() {
  return getToken(ANTLRv4Parser::DOT, 0);
}

ANTLRv4Parser::ElementOptionsContext* ANTLRv4Parser::AtomContext::elementOptions() {
  return getRuleContext<ANTLRv4Parser::ElementOptionsContext>(0);
}


size_t ANTLRv4Parser::AtomContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleAtom;
}

void ANTLRv4Parser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void ANTLRv4Parser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}


antlrcpp::Any ANTLRv4Parser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::AtomContext* ANTLRv4Parser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 106, ANTLRv4Parser::RuleAtom);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(538);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::TOKEN_REF:
      case ANTLRv4Parser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(531);
        terminal();
        break;
      }

      case ANTLRv4Parser::RULE_REF: {
        enterOuterAlt(_localctx, 2);
        setState(532);
        ruleref();
        break;
      }

      case ANTLRv4Parser::NOT: {
        enterOuterAlt(_localctx, 3);
        setState(533);
        notSet();
        break;
      }

      case ANTLRv4Parser::DOT: {
        enterOuterAlt(_localctx, 4);
        setState(534);
        match(ANTLRv4Parser::DOT);
        setState(536);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ANTLRv4Parser::LT) {
          setState(535);
          elementOptions();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NotSetContext ------------------------------------------------------------------

ANTLRv4Parser::NotSetContext::NotSetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::NotSetContext::NOT() {
  return getToken(ANTLRv4Parser::NOT, 0);
}

ANTLRv4Parser::SetElementContext* ANTLRv4Parser::NotSetContext::setElement() {
  return getRuleContext<ANTLRv4Parser::SetElementContext>(0);
}

ANTLRv4Parser::BlockSetContext* ANTLRv4Parser::NotSetContext::blockSet() {
  return getRuleContext<ANTLRv4Parser::BlockSetContext>(0);
}


size_t ANTLRv4Parser::NotSetContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleNotSet;
}

void ANTLRv4Parser::NotSetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNotSet(this);
}

void ANTLRv4Parser::NotSetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNotSet(this);
}


antlrcpp::Any ANTLRv4Parser::NotSetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitNotSet(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::NotSetContext* ANTLRv4Parser::notSet() {
  NotSetContext *_localctx = _tracker.createInstance<NotSetContext>(_ctx, getState());
  enterRule(_localctx, 108, ANTLRv4Parser::RuleNotSet);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(544);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(540);
      match(ANTLRv4Parser::NOT);
      setState(541);
      setElement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(542);
      match(ANTLRv4Parser::NOT);
      setState(543);
      blockSet();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockSetContext ------------------------------------------------------------------

ANTLRv4Parser::BlockSetContext::BlockSetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::BlockSetContext::LPAREN() {
  return getToken(ANTLRv4Parser::LPAREN, 0);
}

std::vector<ANTLRv4Parser::SetElementContext *> ANTLRv4Parser::BlockSetContext::setElement() {
  return getRuleContexts<ANTLRv4Parser::SetElementContext>();
}

ANTLRv4Parser::SetElementContext* ANTLRv4Parser::BlockSetContext::setElement(size_t i) {
  return getRuleContext<ANTLRv4Parser::SetElementContext>(i);
}

tree::TerminalNode* ANTLRv4Parser::BlockSetContext::RPAREN() {
  return getToken(ANTLRv4Parser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::BlockSetContext::OR() {
  return getTokens(ANTLRv4Parser::OR);
}

tree::TerminalNode* ANTLRv4Parser::BlockSetContext::OR(size_t i) {
  return getToken(ANTLRv4Parser::OR, i);
}


size_t ANTLRv4Parser::BlockSetContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleBlockSet;
}

void ANTLRv4Parser::BlockSetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockSet(this);
}

void ANTLRv4Parser::BlockSetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockSet(this);
}


antlrcpp::Any ANTLRv4Parser::BlockSetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitBlockSet(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::BlockSetContext* ANTLRv4Parser::blockSet() {
  BlockSetContext *_localctx = _tracker.createInstance<BlockSetContext>(_ctx, getState());
  enterRule(_localctx, 110, ANTLRv4Parser::RuleBlockSet);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(546);
    match(ANTLRv4Parser::LPAREN);
    setState(547);
    setElement();
    setState(552);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::OR) {
      setState(548);
      match(ANTLRv4Parser::OR);
      setState(549);
      setElement();
      setState(554);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(555);
    match(ANTLRv4Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SetElementContext ------------------------------------------------------------------

ANTLRv4Parser::SetElementContext::SetElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::SetElementContext::TOKEN_REF() {
  return getToken(ANTLRv4Parser::TOKEN_REF, 0);
}

ANTLRv4Parser::ElementOptionsContext* ANTLRv4Parser::SetElementContext::elementOptions() {
  return getRuleContext<ANTLRv4Parser::ElementOptionsContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::SetElementContext::STRING_LITERAL() {
  return getToken(ANTLRv4Parser::STRING_LITERAL, 0);
}

ANTLRv4Parser::CharacterRangeContext* ANTLRv4Parser::SetElementContext::characterRange() {
  return getRuleContext<ANTLRv4Parser::CharacterRangeContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::SetElementContext::LEXER_CHAR_SET() {
  return getToken(ANTLRv4Parser::LEXER_CHAR_SET, 0);
}


size_t ANTLRv4Parser::SetElementContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleSetElement;
}

void ANTLRv4Parser::SetElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetElement(this);
}

void ANTLRv4Parser::SetElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetElement(this);
}


antlrcpp::Any ANTLRv4Parser::SetElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitSetElement(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::SetElementContext* ANTLRv4Parser::setElement() {
  SetElementContext *_localctx = _tracker.createInstance<SetElementContext>(_ctx, getState());
  enterRule(_localctx, 112, ANTLRv4Parser::RuleSetElement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(567);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(557);
      match(ANTLRv4Parser::TOKEN_REF);
      setState(559);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ANTLRv4Parser::LT) {
        setState(558);
        elementOptions();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(561);
      match(ANTLRv4Parser::STRING_LITERAL);
      setState(563);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ANTLRv4Parser::LT) {
        setState(562);
        elementOptions();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(565);
      characterRange();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(566);
      match(ANTLRv4Parser::LEXER_CHAR_SET);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

ANTLRv4Parser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::BlockContext::LPAREN() {
  return getToken(ANTLRv4Parser::LPAREN, 0);
}

ANTLRv4Parser::AltListContext* ANTLRv4Parser::BlockContext::altList() {
  return getRuleContext<ANTLRv4Parser::AltListContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::BlockContext::RPAREN() {
  return getToken(ANTLRv4Parser::RPAREN, 0);
}

tree::TerminalNode* ANTLRv4Parser::BlockContext::COLON() {
  return getToken(ANTLRv4Parser::COLON, 0);
}

ANTLRv4Parser::OptionsSpecContext* ANTLRv4Parser::BlockContext::optionsSpec() {
  return getRuleContext<ANTLRv4Parser::OptionsSpecContext>(0);
}

std::vector<ANTLRv4Parser::RuleActionContext *> ANTLRv4Parser::BlockContext::ruleAction() {
  return getRuleContexts<ANTLRv4Parser::RuleActionContext>();
}

ANTLRv4Parser::RuleActionContext* ANTLRv4Parser::BlockContext::ruleAction(size_t i) {
  return getRuleContext<ANTLRv4Parser::RuleActionContext>(i);
}


size_t ANTLRv4Parser::BlockContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleBlock;
}

void ANTLRv4Parser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void ANTLRv4Parser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any ANTLRv4Parser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::BlockContext* ANTLRv4Parser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 114, ANTLRv4Parser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(569);
    match(ANTLRv4Parser::LPAREN);
    setState(580);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ANTLRv4Parser::OPTIONS)
      | (1ULL << ANTLRv4Parser::COLON)
      | (1ULL << ANTLRv4Parser::AT))) != 0)) {
      setState(571);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ANTLRv4Parser::OPTIONS) {
        setState(570);
        optionsSpec();
      }
      setState(576);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ANTLRv4Parser::AT) {
        setState(573);
        ruleAction();
        setState(578);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(579);
      match(ANTLRv4Parser::COLON);
    }
    setState(582);
    altList();
    setState(583);
    match(ANTLRv4Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RulerefContext ------------------------------------------------------------------

ANTLRv4Parser::RulerefContext::RulerefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::RulerefContext::RULE_REF() {
  return getToken(ANTLRv4Parser::RULE_REF, 0);
}

ANTLRv4Parser::ArgActionBlockContext* ANTLRv4Parser::RulerefContext::argActionBlock() {
  return getRuleContext<ANTLRv4Parser::ArgActionBlockContext>(0);
}

ANTLRv4Parser::ElementOptionsContext* ANTLRv4Parser::RulerefContext::elementOptions() {
  return getRuleContext<ANTLRv4Parser::ElementOptionsContext>(0);
}


size_t ANTLRv4Parser::RulerefContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleRuleref;
}

void ANTLRv4Parser::RulerefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRuleref(this);
}

void ANTLRv4Parser::RulerefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRuleref(this);
}


antlrcpp::Any ANTLRv4Parser::RulerefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitRuleref(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::RulerefContext* ANTLRv4Parser::ruleref() {
  RulerefContext *_localctx = _tracker.createInstance<RulerefContext>(_ctx, getState());
  enterRule(_localctx, 116, ANTLRv4Parser::RuleRuleref);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(585);
    match(ANTLRv4Parser::RULE_REF);
    setState(587);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::BEGIN_ARGUMENT) {
      setState(586);
      argActionBlock();
    }
    setState(590);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::LT) {
      setState(589);
      elementOptions();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharacterRangeContext ------------------------------------------------------------------

ANTLRv4Parser::CharacterRangeContext::CharacterRangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::CharacterRangeContext::STRING_LITERAL() {
  return getTokens(ANTLRv4Parser::STRING_LITERAL);
}

tree::TerminalNode* ANTLRv4Parser::CharacterRangeContext::STRING_LITERAL(size_t i) {
  return getToken(ANTLRv4Parser::STRING_LITERAL, i);
}

tree::TerminalNode* ANTLRv4Parser::CharacterRangeContext::RANGE() {
  return getToken(ANTLRv4Parser::RANGE, 0);
}


size_t ANTLRv4Parser::CharacterRangeContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleCharacterRange;
}

void ANTLRv4Parser::CharacterRangeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharacterRange(this);
}

void ANTLRv4Parser::CharacterRangeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharacterRange(this);
}


antlrcpp::Any ANTLRv4Parser::CharacterRangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitCharacterRange(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::CharacterRangeContext* ANTLRv4Parser::characterRange() {
  CharacterRangeContext *_localctx = _tracker.createInstance<CharacterRangeContext>(_ctx, getState());
  enterRule(_localctx, 118, ANTLRv4Parser::RuleCharacterRange);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(592);
    match(ANTLRv4Parser::STRING_LITERAL);
    setState(593);
    match(ANTLRv4Parser::RANGE);
    setState(594);
    match(ANTLRv4Parser::STRING_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TerminalContext ------------------------------------------------------------------

ANTLRv4Parser::TerminalContext::TerminalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::TerminalContext::TOKEN_REF() {
  return getToken(ANTLRv4Parser::TOKEN_REF, 0);
}

ANTLRv4Parser::ElementOptionsContext* ANTLRv4Parser::TerminalContext::elementOptions() {
  return getRuleContext<ANTLRv4Parser::ElementOptionsContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::TerminalContext::STRING_LITERAL() {
  return getToken(ANTLRv4Parser::STRING_LITERAL, 0);
}


size_t ANTLRv4Parser::TerminalContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleTerminal;
}

void ANTLRv4Parser::TerminalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerminal(this);
}

void ANTLRv4Parser::TerminalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerminal(this);
}


antlrcpp::Any ANTLRv4Parser::TerminalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitTerminal(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::TerminalContext* ANTLRv4Parser::terminal() {
  TerminalContext *_localctx = _tracker.createInstance<TerminalContext>(_ctx, getState());
  enterRule(_localctx, 120, ANTLRv4Parser::RuleTerminal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(604);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::TOKEN_REF: {
        enterOuterAlt(_localctx, 1);
        setState(596);
        match(ANTLRv4Parser::TOKEN_REF);
        setState(598);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ANTLRv4Parser::LT) {
          setState(597);
          elementOptions();
        }
        break;
      }

      case ANTLRv4Parser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(600);
        match(ANTLRv4Parser::STRING_LITERAL);
        setState(602);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ANTLRv4Parser::LT) {
          setState(601);
          elementOptions();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementOptionsContext ------------------------------------------------------------------

ANTLRv4Parser::ElementOptionsContext::ElementOptionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::ElementOptionsContext::LT() {
  return getToken(ANTLRv4Parser::LT, 0);
}

std::vector<ANTLRv4Parser::ElementOptionContext *> ANTLRv4Parser::ElementOptionsContext::elementOption() {
  return getRuleContexts<ANTLRv4Parser::ElementOptionContext>();
}

ANTLRv4Parser::ElementOptionContext* ANTLRv4Parser::ElementOptionsContext::elementOption(size_t i) {
  return getRuleContext<ANTLRv4Parser::ElementOptionContext>(i);
}

tree::TerminalNode* ANTLRv4Parser::ElementOptionsContext::GT() {
  return getToken(ANTLRv4Parser::GT, 0);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::ElementOptionsContext::COMMA() {
  return getTokens(ANTLRv4Parser::COMMA);
}

tree::TerminalNode* ANTLRv4Parser::ElementOptionsContext::COMMA(size_t i) {
  return getToken(ANTLRv4Parser::COMMA, i);
}


size_t ANTLRv4Parser::ElementOptionsContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleElementOptions;
}

void ANTLRv4Parser::ElementOptionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElementOptions(this);
}

void ANTLRv4Parser::ElementOptionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElementOptions(this);
}


antlrcpp::Any ANTLRv4Parser::ElementOptionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitElementOptions(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ElementOptionsContext* ANTLRv4Parser::elementOptions() {
  ElementOptionsContext *_localctx = _tracker.createInstance<ElementOptionsContext>(_ctx, getState());
  enterRule(_localctx, 122, ANTLRv4Parser::RuleElementOptions);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(606);
    match(ANTLRv4Parser::LT);
    setState(607);
    elementOption();
    setState(612);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::COMMA) {
      setState(608);
      match(ANTLRv4Parser::COMMA);
      setState(609);
      elementOption();
      setState(614);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(615);
    match(ANTLRv4Parser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementOptionContext ------------------------------------------------------------------

ANTLRv4Parser::ElementOptionContext::ElementOptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ANTLRv4Parser::IdentifierContext *> ANTLRv4Parser::ElementOptionContext::identifier() {
  return getRuleContexts<ANTLRv4Parser::IdentifierContext>();
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::ElementOptionContext::identifier(size_t i) {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(i);
}

tree::TerminalNode* ANTLRv4Parser::ElementOptionContext::ASSIGN() {
  return getToken(ANTLRv4Parser::ASSIGN, 0);
}

tree::TerminalNode* ANTLRv4Parser::ElementOptionContext::STRING_LITERAL() {
  return getToken(ANTLRv4Parser::STRING_LITERAL, 0);
}


size_t ANTLRv4Parser::ElementOptionContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleElementOption;
}

void ANTLRv4Parser::ElementOptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElementOption(this);
}

void ANTLRv4Parser::ElementOptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElementOption(this);
}


antlrcpp::Any ANTLRv4Parser::ElementOptionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitElementOption(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ElementOptionContext* ANTLRv4Parser::elementOption() {
  ElementOptionContext *_localctx = _tracker.createInstance<ElementOptionContext>(_ctx, getState());
  enterRule(_localctx, 124, ANTLRv4Parser::RuleElementOption);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(624);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(617);
      identifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(618);
      identifier();
      setState(619);
      match(ANTLRv4Parser::ASSIGN);
      setState(622);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ANTLRv4Parser::TOKEN_REF:
        case ANTLRv4Parser::RULE_REF: {
          setState(620);
          identifier();
          break;
        }

        case ANTLRv4Parser::STRING_LITERAL: {
          setState(621);
          match(ANTLRv4Parser::STRING_LITERAL);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

ANTLRv4Parser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::IdentifierContext::RULE_REF() {
  return getToken(ANTLRv4Parser::RULE_REF, 0);
}

tree::TerminalNode* ANTLRv4Parser::IdentifierContext::TOKEN_REF() {
  return getToken(ANTLRv4Parser::TOKEN_REF, 0);
}


size_t ANTLRv4Parser::IdentifierContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleIdentifier;
}

void ANTLRv4Parser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void ANTLRv4Parser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}


antlrcpp::Any ANTLRv4Parser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 126, ANTLRv4Parser::RuleIdentifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(626);
    _la = _input->LA(1);
    if (!(_la == ANTLRv4Parser::TOKEN_REF

    || _la == ANTLRv4Parser::RULE_REF)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> ANTLRv4Parser::_decisionToDFA;
atn::PredictionContextCache ANTLRv4Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ANTLRv4Parser::_atn;
std::vector<uint16_t> ANTLRv4Parser::_serializedATN;

std::vector<std::string> ANTLRv4Parser::_ruleNames = {
  "grammarSpec", "grammarDecl", "grammarType", "prequelConstruct", "optionsSpec", 
  "option", "optionValue", "delegateGrammars", "delegateGrammar", "tokensSpec", 
  "channelsSpec", "idList", "action_", "actionScopeName", "actionBlock", 
  "argActionBlock", "modeSpec", "rules", "ruleSpec", "parserRuleSpec", "exceptionGroup", 
  "exceptionHandler", "finallyClause", "rulePrequel", "ruleReturns", "throwsSpec", 
  "localsSpec", "ruleAction", "ruleModifiers", "ruleModifier", "ruleBlock", 
  "ruleAltList", "labeledAlt", "lexerRuleSpec", "lexerRuleBlock", "lexerAltList", 
  "lexerAlt", "lexerElements", "lexerElement", "labeledLexerElement", "lexerBlock", 
  "lexerCommands", "lexerCommand", "lexerCommandName", "lexerCommandExpr", 
  "altList", "alternative", "element", "labeledElement", "ebnf", "blockSuffix", 
  "ebnfSuffix", "lexerAtom", "atom", "notSet", "blockSet", "setElement", 
  "block", "ruleref", "characterRange", "terminal", "elementOptions", "elementOption", 
  "identifier"
};

std::vector<std::string> ANTLRv4Parser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "'options'", "'tokens'", 
  "'channels'", "'import'", "'fragment'", "'lexer'", "'parser'", "'grammar'", 
  "'protected'", "'public'", "'private'", "'returns'", "'locals'", "'throws'", 
  "'catch'", "'finally'", "'mode'"
};

std::vector<std::string> ANTLRv4Parser::_symbolicNames = {
  "", "TOKEN_REF", "RULE_REF", "LEXER_CHAR_SET", "DOC_COMMENT", "BLOCK_COMMENT", 
  "LINE_COMMENT", "INT", "STRING_LITERAL", "UNTERMINATED_STRING_LITERAL", 
  "BEGIN_ARGUMENT", "BEGIN_ACTION", "OPTIONS", "TOKENS", "CHANNELS", "IMPORT", 
  "FRAGMENT", "LEXER", "PARSER", "GRAMMAR", "PROTECTED", "PUBLIC", "PRIVATE", 
  "RETURNS", "LOCALS", "THROWS", "CATCH", "FINALLY", "MODE", "COLON", "COLONCOLON", 
  "COMMA", "SEMI", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "RARROW", "LT", 
  "GT", "ASSIGN", "QUESTION", "STAR", "PLUS_ASSIGN", "PLUS", "OR", "DOLLAR", 
  "RANGE", "DOT", "AT", "POUND", "NOT", "ID", "WS", "ERRCHAR", "END_ARGUMENT", 
  "UNTERMINATED_ARGUMENT", "ARGUMENT_CONTENT", "END_ACTION", "UNTERMINATED_ACTION", 
  "ACTION_CONTENT", "OPT_LBRACE", "UNTERMINATED_CHAR_SET"
};

dfa::Vocabulary ANTLRv4Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ANTLRv4Parser::_tokenNames;

ANTLRv4Parser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x40, 0x277, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x3, 0x2, 0x3, 0x2, 
    0x7, 0x2, 0x85, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x88, 0xb, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x7, 0x2, 0x8c, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x8f, 0xb, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x9c, 0xa, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0xa3, 0xa, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0xaa, 0xa, 
    0x6, 0xc, 0x6, 0xe, 0x6, 0xad, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 
    0xb8, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0xbb, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0xc0, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x7, 0x9, 0xc6, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0xc9, 0xb, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 
    0xa, 0xd2, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xd7, 0xa, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xde, 
    0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 
    0xe5, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0xe8, 0xb, 0xd, 0x3, 0xd, 0x5, 0xd, 
    0xeb, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xf1, 
    0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x5, 0xf, 0xf9, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xfd, 0xa, 
    0x10, 0xc, 0x10, 0xe, 0x10, 0x100, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x106, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 
    0x109, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x7, 0x12, 0x111, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x114, 
    0xb, 0x12, 0x3, 0x13, 0x7, 0x13, 0x117, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 
    0x11a, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x11e, 0xa, 0x14, 
    0x3, 0x15, 0x5, 0x15, 0x121, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 
    0x125, 0xa, 0x15, 0x3, 0x15, 0x5, 0x15, 0x128, 0xa, 0x15, 0x3, 0x15, 
    0x5, 0x15, 0x12b, 0xa, 0x15, 0x3, 0x15, 0x5, 0x15, 0x12e, 0xa, 0x15, 
    0x3, 0x15, 0x7, 0x15, 0x131, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x134, 
    0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x16, 0x7, 0x16, 0x13c, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x13f, 0xb, 
    0x16, 0x3, 0x16, 0x5, 0x16, 0x142, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 
    0x19, 0x5, 0x19, 0x14d, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x156, 0xa, 0x1b, 
    0xc, 0x1b, 0xe, 0x1b, 0x159, 0xb, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x6, 0x1e, 0x163, 
    0xa, 0x1e, 0xd, 0x1e, 0xe, 0x1e, 0x164, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x16e, 0xa, 0x21, 
    0xc, 0x21, 0xe, 0x21, 0x171, 0xb, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x5, 0x22, 0x176, 0xa, 0x22, 0x3, 0x23, 0x5, 0x23, 0x179, 0xa, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 
    0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x7, 0x25, 0x185, 0xa, 0x25, 
    0xc, 0x25, 0xe, 0x25, 0x188, 0xb, 0x25, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 
    0x18c, 0xa, 0x26, 0x3, 0x26, 0x5, 0x26, 0x18f, 0xa, 0x26, 0x3, 0x27, 
    0x6, 0x27, 0x192, 0xa, 0x27, 0xd, 0x27, 0xe, 0x27, 0x193, 0x3, 0x27, 
    0x5, 0x27, 0x197, 0xa, 0x27, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x19b, 
    0xa, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x19f, 0xa, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x5, 0x28, 0x1a3, 0xa, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 
    0x1a7, 0xa, 0x28, 0x5, 0x28, 0x1a9, 0xa, 0x28, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x1af, 0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x7, 
    0x2b, 0x1b9, 0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 0x1bc, 0xb, 0x2b, 0x3, 
    0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 
    0x1c4, 0xa, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x1c8, 0xa, 0x2d, 
    0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x1cc, 0xa, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 
    0x3, 0x2f, 0x7, 0x2f, 0x1d1, 0xa, 0x2f, 0xc, 0x2f, 0xe, 0x2f, 0x1d4, 
    0xb, 0x2f, 0x3, 0x30, 0x5, 0x30, 0x1d7, 0xa, 0x30, 0x3, 0x30, 0x6, 0x30, 
    0x1da, 0xa, 0x30, 0xd, 0x30, 0xe, 0x30, 0x1db, 0x3, 0x30, 0x5, 0x30, 
    0x1df, 0xa, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x1e4, 
    0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x1e9, 0xa, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x1ee, 0xa, 0x31, 0x5, 0x31, 
    0x1f0, 0xa, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 
    0x1f6, 0xa, 0x32, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x1fa, 0xa, 0x33, 
    0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x200, 0xa, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x204, 0xa, 0x35, 0x3, 0x35, 0x3, 0x35, 
    0x5, 0x35, 0x208, 0xa, 0x35, 0x5, 0x35, 0x20a, 0xa, 0x35, 0x3, 0x36, 
    0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x212, 
    0xa, 0x36, 0x5, 0x36, 0x214, 0xa, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
    0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x21b, 0xa, 0x37, 0x5, 0x37, 0x21d, 
    0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x223, 
    0xa, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x7, 0x39, 0x229, 
    0xa, 0x39, 0xc, 0x39, 0xe, 0x39, 0x22c, 0xb, 0x39, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x232, 0xa, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 
    0x5, 0x3a, 0x236, 0xa, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x23a, 
    0xa, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x23e, 0xa, 0x3b, 0x3, 0x3b, 
    0x7, 0x3b, 0x241, 0xa, 0x3b, 0xc, 0x3b, 0xe, 0x3b, 0x244, 0xb, 0x3b, 
    0x3, 0x3b, 0x5, 0x3b, 0x247, 0xa, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
    0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x24e, 0xa, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 
    0x251, 0xa, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 
    0x3, 0x3e, 0x5, 0x3e, 0x259, 0xa, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 
    0x25d, 0xa, 0x3e, 0x5, 0x3e, 0x25f, 0xa, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x3, 0x3f, 0x7, 0x3f, 0x265, 0xa, 0x3f, 0xc, 0x3f, 0xe, 0x3f, 
    0x268, 0xb, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 
    0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x271, 0xa, 0x40, 0x5, 0x40, 0x273, 
    0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x2, 0x2, 0x42, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
    0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 
    0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 
    0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 
    0x80, 0x2, 0x5, 0x4, 0x2, 0x12, 0x12, 0x16, 0x18, 0x4, 0x2, 0x2a, 0x2a, 
    0x2d, 0x2d, 0x3, 0x2, 0x3, 0x4, 0x2, 0x29c, 0x2, 0x82, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x92, 0x3, 0x2, 0x2, 0x2, 0x6, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0xa2, 0x3, 0x2, 0x2, 0x2, 0xa, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xc, 0xb0, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x10, 0xc1, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x14, 0xd3, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0xda, 0x3, 0x2, 0x2, 0x2, 0x18, 0xe1, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0xec, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xf8, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0xfa, 0x3, 0x2, 0x2, 0x2, 0x20, 0x103, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x10c, 0x3, 0x2, 0x2, 0x2, 0x24, 0x118, 0x3, 0x2, 0x2, 0x2, 0x26, 0x11d, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x120, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x13d, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x143, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x147, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x32, 0x14e, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x151, 0x3, 0x2, 0x2, 0x2, 0x36, 0x15a, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x162, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x166, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x168, 0x3, 0x2, 0x2, 0x2, 0x40, 0x16a, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x172, 0x3, 0x2, 0x2, 0x2, 0x44, 0x178, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x48, 0x181, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x196, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x50, 0x1aa, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x54, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x1c3, 0x3, 0x2, 0x2, 0x2, 0x58, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x1cb, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x1de, 0x3, 
    0x2, 0x2, 0x2, 0x60, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x62, 0x1f1, 0x3, 0x2, 
    0x2, 0x2, 0x64, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x66, 0x1fb, 0x3, 0x2, 0x2, 
    0x2, 0x68, 0x209, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x213, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x222, 0x3, 0x2, 0x2, 0x2, 0x70, 
    0x224, 0x3, 0x2, 0x2, 0x2, 0x72, 0x239, 0x3, 0x2, 0x2, 0x2, 0x74, 0x23b, 
    0x3, 0x2, 0x2, 0x2, 0x76, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x78, 0x252, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x260, 0x3, 0x2, 
    0x2, 0x2, 0x7e, 0x272, 0x3, 0x2, 0x2, 0x2, 0x80, 0x274, 0x3, 0x2, 0x2, 
    0x2, 0x82, 0x86, 0x5, 0x4, 0x3, 0x2, 0x83, 0x85, 0x5, 0x8, 0x5, 0x2, 
    0x84, 0x83, 0x3, 0x2, 0x2, 0x2, 0x85, 0x88, 0x3, 0x2, 0x2, 0x2, 0x86, 
    0x84, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x89, 
    0x3, 0x2, 0x2, 0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8d, 0x5, 
    0x24, 0x13, 0x2, 0x8a, 0x8c, 0x5, 0x22, 0x12, 0x2, 0x8b, 0x8a, 0x3, 
    0x2, 0x2, 0x2, 0x8c, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8b, 0x3, 0x2, 
    0x2, 0x2, 0x8d, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x90, 0x3, 0x2, 0x2, 
    0x2, 0x8f, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x7, 0x2, 0x2, 0x3, 
    0x91, 0x3, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x5, 0x6, 0x4, 0x2, 0x93, 
    0x94, 0x5, 0x80, 0x41, 0x2, 0x94, 0x95, 0x7, 0x22, 0x2, 0x2, 0x95, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x7, 0x13, 0x2, 0x2, 0x97, 0x9c, 0x7, 
    0x15, 0x2, 0x2, 0x98, 0x99, 0x7, 0x14, 0x2, 0x2, 0x99, 0x9c, 0x7, 0x15, 
    0x2, 0x2, 0x9a, 0x9c, 0x7, 0x15, 0x2, 0x2, 0x9b, 0x96, 0x3, 0x2, 0x2, 
    0x2, 0x9b, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9a, 0x3, 0x2, 0x2, 0x2, 
    0x9c, 0x7, 0x3, 0x2, 0x2, 0x2, 0x9d, 0xa3, 0x5, 0xa, 0x6, 0x2, 0x9e, 
    0xa3, 0x5, 0x10, 0x9, 0x2, 0x9f, 0xa3, 0x5, 0x14, 0xb, 0x2, 0xa0, 0xa3, 
    0x5, 0x16, 0xc, 0x2, 0xa1, 0xa3, 0x5, 0x1a, 0xe, 0x2, 0xa2, 0x9d, 0x3, 
    0x2, 0x2, 0x2, 0xa2, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x9f, 0x3, 0x2, 
    0x2, 0x2, 0xa2, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa1, 0x3, 0x2, 0x2, 
    0x2, 0xa3, 0x9, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0xe, 0x2, 0x2, 
    0xa5, 0xab, 0x7, 0x25, 0x2, 0x2, 0xa6, 0xa7, 0x5, 0xc, 0x7, 0x2, 0xa7, 
    0xa8, 0x7, 0x22, 0x2, 0x2, 0xa8, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa6, 
    0x3, 0x2, 0x2, 0x2, 0xaa, 0xad, 0x3, 0x2, 0x2, 0x2, 0xab, 0xa9, 0x3, 
    0x2, 0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 0xae, 0x3, 0x2, 
    0x2, 0x2, 0xad, 0xab, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x7, 0x26, 0x2, 
    0x2, 0xaf, 0xb, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x5, 0x80, 0x41, 0x2, 
    0xb1, 0xb2, 0x7, 0x2a, 0x2, 0x2, 0xb2, 0xb3, 0x5, 0xe, 0x8, 0x2, 0xb3, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb9, 0x5, 0x80, 0x41, 0x2, 0xb5, 0xb6, 
    0x7, 0x32, 0x2, 0x2, 0xb6, 0xb8, 0x5, 0x80, 0x41, 0x2, 0xb7, 0xb5, 0x3, 
    0x2, 0x2, 0x2, 0xb8, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 0x3, 0x2, 
    0x2, 0x2, 0xb9, 0xba, 0x3, 0x2, 0x2, 0x2, 0xba, 0xc0, 0x3, 0x2, 0x2, 
    0x2, 0xbb, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xc0, 0x7, 0xa, 0x2, 0x2, 
    0xbd, 0xc0, 0x5, 0x1e, 0x10, 0x2, 0xbe, 0xc0, 0x7, 0x9, 0x2, 0x2, 0xbf, 
    0xb4, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xbd, 
    0x3, 0x2, 0x2, 0x2, 0xbf, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0xc1, 0xc2, 0x7, 0x11, 0x2, 0x2, 0xc2, 0xc7, 0x5, 0x12, 
    0xa, 0x2, 0xc3, 0xc4, 0x7, 0x21, 0x2, 0x2, 0xc4, 0xc6, 0x5, 0x12, 0xa, 
    0x2, 0xc5, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc9, 0x3, 0x2, 0x2, 0x2, 
    0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc8, 
    0xca, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 
    0x7, 0x22, 0x2, 0x2, 0xcb, 0x11, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x5, 
    0x80, 0x41, 0x2, 0xcd, 0xce, 0x7, 0x2a, 0x2, 0x2, 0xce, 0xcf, 0x5, 0x80, 
    0x41, 0x2, 0xcf, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd2, 0x5, 0x80, 0x41, 
    0x2, 0xd1, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd0, 0x3, 0x2, 0x2, 0x2, 
    0xd2, 0x13, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x7, 0xf, 0x2, 0x2, 0xd4, 
    0xd6, 0x7, 0x25, 0x2, 0x2, 0xd5, 0xd7, 0x5, 0x18, 0xd, 0x2, 0xd6, 0xd5, 
    0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x3, 
    0x2, 0x2, 0x2, 0xd8, 0xd9, 0x7, 0x26, 0x2, 0x2, 0xd9, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0xda, 0xdb, 0x7, 0x10, 0x2, 0x2, 0xdb, 0xdd, 0x7, 0x25, 0x2, 
    0x2, 0xdc, 0xde, 0x5, 0x18, 0xd, 0x2, 0xdd, 0xdc, 0x3, 0x2, 0x2, 0x2, 
    0xdd, 0xde, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xdf, 
    0xe0, 0x7, 0x26, 0x2, 0x2, 0xe0, 0x17, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe6, 
    0x5, 0x80, 0x41, 0x2, 0xe2, 0xe3, 0x7, 0x21, 0x2, 0x2, 0xe3, 0xe5, 0x5, 
    0x80, 0x41, 0x2, 0xe4, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe8, 0x3, 0x2, 
    0x2, 0x2, 0xe6, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x3, 0x2, 0x2, 
    0x2, 0xe7, 0xea, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 
    0xe9, 0xeb, 0x7, 0x21, 0x2, 0x2, 0xea, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xea, 
    0xeb, 0x3, 0x2, 0x2, 0x2, 0xeb, 0x19, 0x3, 0x2, 0x2, 0x2, 0xec, 0xf0, 
    0x7, 0x33, 0x2, 0x2, 0xed, 0xee, 0x5, 0x1c, 0xf, 0x2, 0xee, 0xef, 0x7, 
    0x20, 0x2, 0x2, 0xef, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xed, 0x3, 0x2, 
    0x2, 0x2, 0xf0, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x3, 0x2, 0x2, 
    0x2, 0xf2, 0xf3, 0x5, 0x80, 0x41, 0x2, 0xf3, 0xf4, 0x5, 0x1e, 0x10, 
    0x2, 0xf4, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf9, 0x5, 0x80, 0x41, 0x2, 
    0xf6, 0xf9, 0x7, 0x13, 0x2, 0x2, 0xf7, 0xf9, 0x7, 0x14, 0x2, 0x2, 0xf8, 
    0xf5, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf7, 
    0x3, 0x2, 0x2, 0x2, 0xf9, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfe, 0x7, 
    0xd, 0x2, 0x2, 0xfb, 0xfd, 0x7, 0x3e, 0x2, 0x2, 0xfc, 0xfb, 0x3, 0x2, 
    0x2, 0x2, 0xfd, 0x100, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfc, 0x3, 0x2, 0x2, 
    0x2, 0xfe, 0xff, 0x3, 0x2, 0x2, 0x2, 0xff, 0x101, 0x3, 0x2, 0x2, 0x2, 
    0x100, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x101, 0x102, 0x7, 0x3c, 0x2, 0x2, 
    0x102, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x103, 0x107, 0x7, 0xc, 0x2, 0x2, 0x104, 
    0x106, 0x7, 0x3b, 0x2, 0x2, 0x105, 0x104, 0x3, 0x2, 0x2, 0x2, 0x106, 
    0x109, 0x3, 0x2, 0x2, 0x2, 0x107, 0x105, 0x3, 0x2, 0x2, 0x2, 0x107, 
    0x108, 0x3, 0x2, 0x2, 0x2, 0x108, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x109, 
    0x107, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x7, 0x39, 0x2, 0x2, 0x10b, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0x7, 0x1e, 0x2, 0x2, 0x10d, 
    0x10e, 0x5, 0x80, 0x41, 0x2, 0x10e, 0x112, 0x7, 0x22, 0x2, 0x2, 0x10f, 
    0x111, 0x5, 0x44, 0x23, 0x2, 0x110, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x111, 
    0x114, 0x3, 0x2, 0x2, 0x2, 0x112, 0x110, 0x3, 0x2, 0x2, 0x2, 0x112, 
    0x113, 0x3, 0x2, 0x2, 0x2, 0x113, 0x23, 0x3, 0x2, 0x2, 0x2, 0x114, 0x112, 
    0x3, 0x2, 0x2, 0x2, 0x115, 0x117, 0x5, 0x26, 0x14, 0x2, 0x116, 0x115, 
    0x3, 0x2, 0x2, 0x2, 0x117, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x118, 0x116, 
    0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x3, 0x2, 0x2, 0x2, 0x119, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0x11a, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11e, 0x5, 
    0x28, 0x15, 0x2, 0x11c, 0x11e, 0x5, 0x44, 0x23, 0x2, 0x11d, 0x11b, 0x3, 
    0x2, 0x2, 0x2, 0x11d, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x11f, 0x121, 0x5, 0x3a, 0x1e, 0x2, 0x120, 0x11f, 0x3, 0x2, 
    0x2, 0x2, 0x120, 0x121, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x3, 0x2, 
    0x2, 0x2, 0x122, 0x124, 0x7, 0x4, 0x2, 0x2, 0x123, 0x125, 0x5, 0x20, 
    0x11, 0x2, 0x124, 0x123, 0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x3, 0x2, 
    0x2, 0x2, 0x125, 0x127, 0x3, 0x2, 0x2, 0x2, 0x126, 0x128, 0x5, 0x32, 
    0x1a, 0x2, 0x127, 0x126, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x3, 0x2, 
    0x2, 0x2, 0x128, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12b, 0x5, 0x34, 
    0x1b, 0x2, 0x12a, 0x129, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x3, 0x2, 
    0x2, 0x2, 0x12b, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12e, 0x5, 0x36, 
    0x1c, 0x2, 0x12d, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 0x3, 0x2, 
    0x2, 0x2, 0x12e, 0x132, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x131, 0x5, 0x30, 
    0x19, 0x2, 0x130, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x131, 0x134, 0x3, 0x2, 
    0x2, 0x2, 0x132, 0x130, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 0x3, 0x2, 
    0x2, 0x2, 0x133, 0x135, 0x3, 0x2, 0x2, 0x2, 0x134, 0x132, 0x3, 0x2, 
    0x2, 0x2, 0x135, 0x136, 0x7, 0x1f, 0x2, 0x2, 0x136, 0x137, 0x5, 0x3e, 
    0x20, 0x2, 0x137, 0x138, 0x7, 0x22, 0x2, 0x2, 0x138, 0x139, 0x5, 0x2a, 
    0x16, 0x2, 0x139, 0x29, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13c, 0x5, 0x2c, 
    0x17, 0x2, 0x13b, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13f, 0x3, 0x2, 
    0x2, 0x2, 0x13d, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 0x3, 0x2, 
    0x2, 0x2, 0x13e, 0x141, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x13d, 0x3, 0x2, 
    0x2, 0x2, 0x140, 0x142, 0x5, 0x2e, 0x18, 0x2, 0x141, 0x140, 0x3, 0x2, 
    0x2, 0x2, 0x141, 0x142, 0x3, 0x2, 0x2, 0x2, 0x142, 0x2b, 0x3, 0x2, 0x2, 
    0x2, 0x143, 0x144, 0x7, 0x1c, 0x2, 0x2, 0x144, 0x145, 0x5, 0x20, 0x11, 
    0x2, 0x145, 0x146, 0x5, 0x1e, 0x10, 0x2, 0x146, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x147, 0x148, 0x7, 0x1d, 0x2, 0x2, 0x148, 0x149, 0x5, 0x1e, 0x10, 
    0x2, 0x149, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14d, 0x5, 0xa, 0x6, 0x2, 
    0x14b, 0x14d, 0x5, 0x38, 0x1d, 0x2, 0x14c, 0x14a, 0x3, 0x2, 0x2, 0x2, 
    0x14c, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x31, 0x3, 0x2, 0x2, 0x2, 0x14e, 
    0x14f, 0x7, 0x19, 0x2, 0x2, 0x14f, 0x150, 0x5, 0x20, 0x11, 0x2, 0x150, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x7, 0x1b, 0x2, 0x2, 0x152, 
    0x157, 0x5, 0x80, 0x41, 0x2, 0x153, 0x154, 0x7, 0x21, 0x2, 0x2, 0x154, 
    0x156, 0x5, 0x80, 0x41, 0x2, 0x155, 0x153, 0x3, 0x2, 0x2, 0x2, 0x156, 
    0x159, 0x3, 0x2, 0x2, 0x2, 0x157, 0x155, 0x3, 0x2, 0x2, 0x2, 0x157, 
    0x158, 0x3, 0x2, 0x2, 0x2, 0x158, 0x35, 0x3, 0x2, 0x2, 0x2, 0x159, 0x157, 
    0x3, 0x2, 0x2, 0x2, 0x15a, 0x15b, 0x7, 0x1a, 0x2, 0x2, 0x15b, 0x15c, 
    0x5, 0x20, 0x11, 0x2, 0x15c, 0x37, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 
    0x7, 0x33, 0x2, 0x2, 0x15e, 0x15f, 0x5, 0x80, 0x41, 0x2, 0x15f, 0x160, 
    0x5, 0x1e, 0x10, 0x2, 0x160, 0x39, 0x3, 0x2, 0x2, 0x2, 0x161, 0x163, 
    0x5, 0x3c, 0x1f, 0x2, 0x162, 0x161, 0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 
    0x3, 0x2, 0x2, 0x2, 0x164, 0x162, 0x3, 0x2, 0x2, 0x2, 0x164, 0x165, 
    0x3, 0x2, 0x2, 0x2, 0x165, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x9, 
    0x2, 0x2, 0x2, 0x167, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x168, 0x169, 0x5, 0x40, 
    0x21, 0x2, 0x169, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16f, 0x5, 0x42, 
    0x22, 0x2, 0x16b, 0x16c, 0x7, 0x2f, 0x2, 0x2, 0x16c, 0x16e, 0x5, 0x42, 
    0x22, 0x2, 0x16d, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x171, 0x3, 0x2, 
    0x2, 0x2, 0x16f, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x170, 0x3, 0x2, 
    0x2, 0x2, 0x170, 0x41, 0x3, 0x2, 0x2, 0x2, 0x171, 0x16f, 0x3, 0x2, 0x2, 
    0x2, 0x172, 0x175, 0x5, 0x5e, 0x30, 0x2, 0x173, 0x174, 0x7, 0x34, 0x2, 
    0x2, 0x174, 0x176, 0x5, 0x80, 0x41, 0x2, 0x175, 0x173, 0x3, 0x2, 0x2, 
    0x2, 0x175, 0x176, 0x3, 0x2, 0x2, 0x2, 0x176, 0x43, 0x3, 0x2, 0x2, 0x2, 
    0x177, 0x179, 0x7, 0x12, 0x2, 0x2, 0x178, 0x177, 0x3, 0x2, 0x2, 0x2, 
    0x178, 0x179, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 0x3, 0x2, 0x2, 0x2, 
    0x17a, 0x17b, 0x7, 0x3, 0x2, 0x2, 0x17b, 0x17c, 0x7, 0x1f, 0x2, 0x2, 
    0x17c, 0x17d, 0x5, 0x46, 0x24, 0x2, 0x17d, 0x17e, 0x7, 0x22, 0x2, 0x2, 
    0x17e, 0x45, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x180, 0x5, 0x48, 0x25, 0x2, 
    0x180, 0x47, 0x3, 0x2, 0x2, 0x2, 0x181, 0x186, 0x5, 0x4a, 0x26, 0x2, 
    0x182, 0x183, 0x7, 0x2f, 0x2, 0x2, 0x183, 0x185, 0x5, 0x4a, 0x26, 0x2, 
    0x184, 0x182, 0x3, 0x2, 0x2, 0x2, 0x185, 0x188, 0x3, 0x2, 0x2, 0x2, 
    0x186, 0x184, 0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 0x3, 0x2, 0x2, 0x2, 
    0x187, 0x49, 0x3, 0x2, 0x2, 0x2, 0x188, 0x186, 0x3, 0x2, 0x2, 0x2, 0x189, 
    0x18b, 0x5, 0x4c, 0x27, 0x2, 0x18a, 0x18c, 0x5, 0x54, 0x2b, 0x2, 0x18b, 
    0x18a, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18c, 
    0x18f, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x18e, 
    0x189, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18f, 
    0x4b, 0x3, 0x2, 0x2, 0x2, 0x190, 0x192, 0x5, 0x4e, 0x28, 0x2, 0x191, 
    0x190, 0x3, 0x2, 0x2, 0x2, 0x192, 0x193, 0x3, 0x2, 0x2, 0x2, 0x193, 
    0x191, 0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 0x3, 0x2, 0x2, 0x2, 0x194, 
    0x197, 0x3, 0x2, 0x2, 0x2, 0x195, 0x197, 0x3, 0x2, 0x2, 0x2, 0x196, 
    0x191, 0x3, 0x2, 0x2, 0x2, 0x196, 0x195, 0x3, 0x2, 0x2, 0x2, 0x197, 
    0x4d, 0x3, 0x2, 0x2, 0x2, 0x198, 0x19a, 0x5, 0x50, 0x29, 0x2, 0x199, 
    0x19b, 0x5, 0x68, 0x35, 0x2, 0x19a, 0x199, 0x3, 0x2, 0x2, 0x2, 0x19a, 
    0x19b, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x19c, 
    0x19e, 0x5, 0x6a, 0x36, 0x2, 0x19d, 0x19f, 0x5, 0x68, 0x35, 0x2, 0x19e, 
    0x19d, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x19f, 
    0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a2, 0x5, 0x52, 0x2a, 0x2, 0x1a1, 
    0x1a3, 0x5, 0x68, 0x35, 0x2, 0x1a2, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a2, 
    0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a4, 
    0x1a6, 0x5, 0x1e, 0x10, 0x2, 0x1a5, 0x1a7, 0x7, 0x2b, 0x2, 0x2, 0x1a6, 
    0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1a7, 
    0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x198, 0x3, 0x2, 0x2, 0x2, 0x1a8, 
    0x19c, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a8, 
    0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ab, 
    0x5, 0x80, 0x41, 0x2, 0x1ab, 0x1ae, 0x9, 0x3, 0x2, 0x2, 0x1ac, 0x1af, 
    0x5, 0x6a, 0x36, 0x2, 0x1ad, 0x1af, 0x5, 0x52, 0x2a, 0x2, 0x1ae, 0x1ac, 
    0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x51, 0x3, 
    0x2, 0x2, 0x2, 0x1b0, 0x1b1, 0x7, 0x23, 0x2, 0x2, 0x1b1, 0x1b2, 0x5, 
    0x48, 0x25, 0x2, 0x1b2, 0x1b3, 0x7, 0x24, 0x2, 0x2, 0x1b3, 0x53, 0x3, 
    0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x7, 0x27, 0x2, 0x2, 0x1b5, 0x1ba, 0x5, 
    0x56, 0x2c, 0x2, 0x1b6, 0x1b7, 0x7, 0x21, 0x2, 0x2, 0x1b7, 0x1b9, 0x5, 
    0x56, 0x2c, 0x2, 0x1b8, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1bc, 0x3, 
    0x2, 0x2, 0x2, 0x1ba, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 0x3, 
    0x2, 0x2, 0x2, 0x1bb, 0x55, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1ba, 0x3, 0x2, 
    0x2, 0x2, 0x1bd, 0x1be, 0x5, 0x58, 0x2d, 0x2, 0x1be, 0x1bf, 0x7, 0x23, 
    0x2, 0x2, 0x1bf, 0x1c0, 0x5, 0x5a, 0x2e, 0x2, 0x1c0, 0x1c1, 0x7, 0x24, 
    0x2, 0x2, 0x1c1, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c4, 0x5, 0x58, 
    0x2d, 0x2, 0x1c3, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c2, 0x3, 0x2, 
    0x2, 0x2, 0x1c4, 0x57, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c8, 0x5, 0x80, 
    0x41, 0x2, 0x1c6, 0x1c8, 0x7, 0x1e, 0x2, 0x2, 0x1c7, 0x1c5, 0x3, 0x2, 
    0x2, 0x2, 0x1c7, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x59, 0x3, 0x2, 0x2, 
    0x2, 0x1c9, 0x1cc, 0x5, 0x80, 0x41, 0x2, 0x1ca, 0x1cc, 0x7, 0x9, 0x2, 
    0x2, 0x1cb, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1ca, 0x3, 0x2, 0x2, 
    0x2, 0x1cc, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1d2, 0x5, 0x5e, 0x30, 
    0x2, 0x1ce, 0x1cf, 0x7, 0x2f, 0x2, 0x2, 0x1cf, 0x1d1, 0x5, 0x5e, 0x30, 
    0x2, 0x1d0, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1d4, 0x3, 0x2, 0x2, 
    0x2, 0x1d2, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d3, 0x3, 0x2, 0x2, 
    0x2, 0x1d3, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d2, 0x3, 0x2, 0x2, 0x2, 
    0x1d5, 0x1d7, 0x5, 0x7c, 0x3f, 0x2, 0x1d6, 0x1d5, 0x3, 0x2, 0x2, 0x2, 
    0x1d6, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d9, 0x3, 0x2, 0x2, 0x2, 
    0x1d8, 0x1da, 0x5, 0x60, 0x31, 0x2, 0x1d9, 0x1d8, 0x3, 0x2, 0x2, 0x2, 
    0x1da, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1d9, 0x3, 0x2, 0x2, 0x2, 
    0x1db, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1df, 0x3, 0x2, 0x2, 0x2, 
    0x1dd, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1d6, 0x3, 0x2, 0x2, 0x2, 
    0x1de, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x1e0, 
    0x1e3, 0x5, 0x62, 0x32, 0x2, 0x1e1, 0x1e4, 0x5, 0x68, 0x35, 0x2, 0x1e2, 
    0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e3, 
    0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1e5, 
    0x1e8, 0x5, 0x6c, 0x37, 0x2, 0x1e6, 0x1e9, 0x5, 0x68, 0x35, 0x2, 0x1e7, 
    0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e8, 
    0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1ea, 
    0x1f0, 0x5, 0x64, 0x33, 0x2, 0x1eb, 0x1ed, 0x5, 0x1e, 0x10, 0x2, 0x1ec, 
    0x1ee, 0x7, 0x2b, 0x2, 0x2, 0x1ed, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ed, 
    0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1ef, 
    0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1ef, 
    0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1f0, 
    0x61, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 0x5, 0x80, 0x41, 0x2, 0x1f2, 
    0x1f5, 0x9, 0x3, 0x2, 0x2, 0x1f3, 0x1f6, 0x5, 0x6c, 0x37, 0x2, 0x1f4, 
    0x1f6, 0x5, 0x74, 0x3b, 0x2, 0x1f5, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f5, 
    0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x63, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f9, 
    0x5, 0x74, 0x3b, 0x2, 0x1f8, 0x1fa, 0x5, 0x66, 0x34, 0x2, 0x1f9, 0x1f8, 
    0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x65, 0x3, 
    0x2, 0x2, 0x2, 0x1fb, 0x1fc, 0x5, 0x68, 0x35, 0x2, 0x1fc, 0x67, 0x3, 
    0x2, 0x2, 0x2, 0x1fd, 0x1ff, 0x7, 0x2b, 0x2, 0x2, 0x1fe, 0x200, 0x7, 
    0x2b, 0x2, 0x2, 0x1ff, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x200, 0x3, 
    0x2, 0x2, 0x2, 0x200, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x201, 0x203, 0x7, 
    0x2c, 0x2, 0x2, 0x202, 0x204, 0x7, 0x2b, 0x2, 0x2, 0x203, 0x202, 0x3, 
    0x2, 0x2, 0x2, 0x203, 0x204, 0x3, 0x2, 0x2, 0x2, 0x204, 0x20a, 0x3, 
    0x2, 0x2, 0x2, 0x205, 0x207, 0x7, 0x2e, 0x2, 0x2, 0x206, 0x208, 0x7, 
    0x2b, 0x2, 0x2, 0x207, 0x206, 0x3, 0x2, 0x2, 0x2, 0x207, 0x208, 0x3, 
    0x2, 0x2, 0x2, 0x208, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x209, 0x1fd, 0x3, 
    0x2, 0x2, 0x2, 0x209, 0x201, 0x3, 0x2, 0x2, 0x2, 0x209, 0x205, 0x3, 
    0x2, 0x2, 0x2, 0x20a, 0x69, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x214, 0x5, 0x78, 
    0x3d, 0x2, 0x20c, 0x214, 0x5, 0x7a, 0x3e, 0x2, 0x20d, 0x214, 0x5, 0x6e, 
    0x38, 0x2, 0x20e, 0x214, 0x7, 0x5, 0x2, 0x2, 0x20f, 0x211, 0x7, 0x32, 
    0x2, 0x2, 0x210, 0x212, 0x5, 0x7c, 0x3f, 0x2, 0x211, 0x210, 0x3, 0x2, 
    0x2, 0x2, 0x211, 0x212, 0x3, 0x2, 0x2, 0x2, 0x212, 0x214, 0x3, 0x2, 
    0x2, 0x2, 0x213, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x213, 0x20c, 0x3, 0x2, 
    0x2, 0x2, 0x213, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x213, 0x20e, 0x3, 0x2, 
    0x2, 0x2, 0x213, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x214, 0x6b, 0x3, 0x2, 0x2, 
    0x2, 0x215, 0x21d, 0x5, 0x7a, 0x3e, 0x2, 0x216, 0x21d, 0x5, 0x76, 0x3c, 
    0x2, 0x217, 0x21d, 0x5, 0x6e, 0x38, 0x2, 0x218, 0x21a, 0x7, 0x32, 0x2, 
    0x2, 0x219, 0x21b, 0x5, 0x7c, 0x3f, 0x2, 0x21a, 0x219, 0x3, 0x2, 0x2, 
    0x2, 0x21a, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21d, 0x3, 0x2, 0x2, 
    0x2, 0x21c, 0x215, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x216, 0x3, 0x2, 0x2, 
    0x2, 0x21c, 0x217, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x218, 0x3, 0x2, 0x2, 
    0x2, 0x21d, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x21f, 0x7, 0x35, 0x2, 
    0x2, 0x21f, 0x223, 0x5, 0x72, 0x3a, 0x2, 0x220, 0x221, 0x7, 0x35, 0x2, 
    0x2, 0x221, 0x223, 0x5, 0x70, 0x39, 0x2, 0x222, 0x21e, 0x3, 0x2, 0x2, 
    0x2, 0x222, 0x220, 0x3, 0x2, 0x2, 0x2, 0x223, 0x6f, 0x3, 0x2, 0x2, 0x2, 
    0x224, 0x225, 0x7, 0x23, 0x2, 0x2, 0x225, 0x22a, 0x5, 0x72, 0x3a, 0x2, 
    0x226, 0x227, 0x7, 0x2f, 0x2, 0x2, 0x227, 0x229, 0x5, 0x72, 0x3a, 0x2, 
    0x228, 0x226, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22c, 0x3, 0x2, 0x2, 0x2, 
    0x22a, 0x228, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x22b, 0x3, 0x2, 0x2, 0x2, 
    0x22b, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22a, 0x3, 0x2, 0x2, 0x2, 
    0x22d, 0x22e, 0x7, 0x24, 0x2, 0x2, 0x22e, 0x71, 0x3, 0x2, 0x2, 0x2, 
    0x22f, 0x231, 0x7, 0x3, 0x2, 0x2, 0x230, 0x232, 0x5, 0x7c, 0x3f, 0x2, 
    0x231, 0x230, 0x3, 0x2, 0x2, 0x2, 0x231, 0x232, 0x3, 0x2, 0x2, 0x2, 
    0x232, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x233, 0x235, 0x7, 0xa, 0x2, 0x2, 
    0x234, 0x236, 0x5, 0x7c, 0x3f, 0x2, 0x235, 0x234, 0x3, 0x2, 0x2, 0x2, 
    0x235, 0x236, 0x3, 0x2, 0x2, 0x2, 0x236, 0x23a, 0x3, 0x2, 0x2, 0x2, 
    0x237, 0x23a, 0x5, 0x78, 0x3d, 0x2, 0x238, 0x23a, 0x7, 0x5, 0x2, 0x2, 
    0x239, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x239, 0x233, 0x3, 0x2, 0x2, 0x2, 
    0x239, 0x237, 0x3, 0x2, 0x2, 0x2, 0x239, 0x238, 0x3, 0x2, 0x2, 0x2, 
    0x23a, 0x73, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x246, 0x7, 0x23, 0x2, 0x2, 
    0x23c, 0x23e, 0x5, 0xa, 0x6, 0x2, 0x23d, 0x23c, 0x3, 0x2, 0x2, 0x2, 
    0x23d, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x242, 0x3, 0x2, 0x2, 0x2, 
    0x23f, 0x241, 0x5, 0x38, 0x1d, 0x2, 0x240, 0x23f, 0x3, 0x2, 0x2, 0x2, 
    0x241, 0x244, 0x3, 0x2, 0x2, 0x2, 0x242, 0x240, 0x3, 0x2, 0x2, 0x2, 
    0x242, 0x243, 0x3, 0x2, 0x2, 0x2, 0x243, 0x245, 0x3, 0x2, 0x2, 0x2, 
    0x244, 0x242, 0x3, 0x2, 0x2, 0x2, 0x245, 0x247, 0x7, 0x1f, 0x2, 0x2, 
    0x246, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x246, 0x247, 0x3, 0x2, 0x2, 0x2, 
    0x247, 0x248, 0x3, 0x2, 0x2, 0x2, 0x248, 0x249, 0x5, 0x5c, 0x2f, 0x2, 
    0x249, 0x24a, 0x7, 0x24, 0x2, 0x2, 0x24a, 0x75, 0x3, 0x2, 0x2, 0x2, 
    0x24b, 0x24d, 0x7, 0x4, 0x2, 0x2, 0x24c, 0x24e, 0x5, 0x20, 0x11, 0x2, 
    0x24d, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x24e, 0x3, 0x2, 0x2, 0x2, 
    0x24e, 0x250, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x251, 0x5, 0x7c, 0x3f, 0x2, 
    0x250, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x250, 0x251, 0x3, 0x2, 0x2, 0x2, 
    0x251, 0x77, 0x3, 0x2, 0x2, 0x2, 0x252, 0x253, 0x7, 0xa, 0x2, 0x2, 0x253, 
    0x254, 0x7, 0x31, 0x2, 0x2, 0x254, 0x255, 0x7, 0xa, 0x2, 0x2, 0x255, 
    0x79, 0x3, 0x2, 0x2, 0x2, 0x256, 0x258, 0x7, 0x3, 0x2, 0x2, 0x257, 0x259, 
    0x5, 0x7c, 0x3f, 0x2, 0x258, 0x257, 0x3, 0x2, 0x2, 0x2, 0x258, 0x259, 
    0x3, 0x2, 0x2, 0x2, 0x259, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25c, 
    0x7, 0xa, 0x2, 0x2, 0x25b, 0x25d, 0x5, 0x7c, 0x3f, 0x2, 0x25c, 0x25b, 
    0x3, 0x2, 0x2, 0x2, 0x25c, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x25f, 
    0x3, 0x2, 0x2, 0x2, 0x25e, 0x256, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x25a, 
    0x3, 0x2, 0x2, 0x2, 0x25f, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x260, 0x261, 0x7, 
    0x28, 0x2, 0x2, 0x261, 0x266, 0x5, 0x7e, 0x40, 0x2, 0x262, 0x263, 0x7, 
    0x21, 0x2, 0x2, 0x263, 0x265, 0x5, 0x7e, 0x40, 0x2, 0x264, 0x262, 0x3, 
    0x2, 0x2, 0x2, 0x265, 0x268, 0x3, 0x2, 0x2, 0x2, 0x266, 0x264, 0x3, 
    0x2, 0x2, 0x2, 0x266, 0x267, 0x3, 0x2, 0x2, 0x2, 0x267, 0x269, 0x3, 
    0x2, 0x2, 0x2, 0x268, 0x266, 0x3, 0x2, 0x2, 0x2, 0x269, 0x26a, 0x7, 
    0x29, 0x2, 0x2, 0x26a, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x273, 0x5, 
    0x80, 0x41, 0x2, 0x26c, 0x26d, 0x5, 0x80, 0x41, 0x2, 0x26d, 0x270, 0x7, 
    0x2a, 0x2, 0x2, 0x26e, 0x271, 0x5, 0x80, 0x41, 0x2, 0x26f, 0x271, 0x7, 
    0xa, 0x2, 0x2, 0x270, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x270, 0x26f, 0x3, 
    0x2, 0x2, 0x2, 0x271, 0x273, 0x3, 0x2, 0x2, 0x2, 0x272, 0x26b, 0x3, 
    0x2, 0x2, 0x2, 0x272, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x273, 0x7f, 0x3, 0x2, 
    0x2, 0x2, 0x274, 0x275, 0x9, 0x4, 0x2, 0x2, 0x275, 0x81, 0x3, 0x2, 0x2, 
    0x2, 0x55, 0x86, 0x8d, 0x9b, 0xa2, 0xab, 0xb9, 0xbf, 0xc7, 0xd1, 0xd6, 
    0xdd, 0xe6, 0xea, 0xf0, 0xf8, 0xfe, 0x107, 0x112, 0x118, 0x11d, 0x120, 
    0x124, 0x127, 0x12a, 0x12d, 0x132, 0x13d, 0x141, 0x14c, 0x157, 0x164, 
    0x16f, 0x175, 0x178, 0x186, 0x18b, 0x18e, 0x193, 0x196, 0x19a, 0x19e, 
    0x1a2, 0x1a6, 0x1a8, 0x1ae, 0x1ba, 0x1c3, 0x1c7, 0x1cb, 0x1d2, 0x1d6, 
    0x1db, 0x1de, 0x1e3, 0x1e8, 0x1ed, 0x1ef, 0x1f5, 0x1f9, 0x1ff, 0x203, 
    0x207, 0x209, 0x211, 0x213, 0x21a, 0x21c, 0x222, 0x22a, 0x231, 0x235, 
    0x239, 0x23d, 0x242, 0x246, 0x24d, 0x250, 0x258, 0x25c, 0x25e, 0x266, 
    0x270, 0x272, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ANTLRv4Parser::Initializer ANTLRv4Parser::_init;
