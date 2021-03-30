// Generated from /Users/tianyaochou/Projects/grammar-fuzzing/antlr4-grammar-parser/ANTLRv4Parser/ANTLRv4Parser.g4 by ANTLR 4.8
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class ANTLRv4Parser extends Parser {
	static { RuntimeMetaData.checkVersion("4.8", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		TOKEN_REF=1, RULE_REF=2, LEXER_CHAR_SET=3, DOC_COMMENT=4, BLOCK_COMMENT=5, 
		LINE_COMMENT=6, INT=7, STRING_LITERAL=8, UNTERMINATED_STRING_LITERAL=9, 
		BEGIN_ARGUMENT=10, BEGIN_ACTION=11, OPTIONS=12, TOKENS=13, CHANNELS=14, 
		IMPORT=15, FRAGMENT=16, LEXER=17, PARSER=18, GRAMMAR=19, PROTECTED=20, 
		PUBLIC=21, PRIVATE=22, RETURNS=23, LOCALS=24, THROWS=25, CATCH=26, FINALLY=27, 
		MODE=28, COLON=29, COLONCOLON=30, COMMA=31, SEMI=32, LPAREN=33, RPAREN=34, 
		LBRACE=35, RBRACE=36, RARROW=37, LT=38, GT=39, ASSIGN=40, QUESTION=41, 
		STAR=42, PLUS_ASSIGN=43, PLUS=44, OR=45, DOLLAR=46, RANGE=47, DOT=48, 
		AT=49, POUND=50, NOT=51, ID=52, WS=53, ERRCHAR=54, END_ARGUMENT=55, UNTERMINATED_ARGUMENT=56, 
		ARGUMENT_CONTENT=57, END_ACTION=58, UNTERMINATED_ACTION=59, ACTION_CONTENT=60, 
		OPT_LBRACE=61, UNTERMINATED_CHAR_SET=62;
	public static final int
		RULE_grammarSpec = 0, RULE_grammarDecl = 1, RULE_grammarType = 2, RULE_prequelConstruct = 3, 
		RULE_optionsSpec = 4, RULE_option = 5, RULE_optionValue = 6, RULE_delegateGrammars = 7, 
		RULE_delegateGrammar = 8, RULE_tokensSpec = 9, RULE_channelsSpec = 10, 
		RULE_idList = 11, RULE_action_ = 12, RULE_actionScopeName = 13, RULE_actionBlock = 14, 
		RULE_argActionBlock = 15, RULE_modeSpec = 16, RULE_rules = 17, RULE_ruleSpec = 18, 
		RULE_parserRuleSpec = 19, RULE_exceptionGroup = 20, RULE_exceptionHandler = 21, 
		RULE_finallyClause = 22, RULE_rulePrequel = 23, RULE_ruleReturns = 24, 
		RULE_throwsSpec = 25, RULE_localsSpec = 26, RULE_ruleAction = 27, RULE_ruleModifiers = 28, 
		RULE_ruleModifier = 29, RULE_ruleBlock = 30, RULE_ruleAltList = 31, RULE_labeledAlt = 32, 
		RULE_lexerRuleSpec = 33, RULE_lexerRuleBlock = 34, RULE_lexerAltList = 35, 
		RULE_lexerAlt = 36, RULE_lexerElements = 37, RULE_lexerElement = 38, RULE_labeledLexerElement = 39, 
		RULE_lexerBlock = 40, RULE_lexerCommands = 41, RULE_lexerCommand = 42, 
		RULE_lexerCommandName = 43, RULE_lexerCommandExpr = 44, RULE_altList = 45, 
		RULE_alternative = 46, RULE_element = 47, RULE_labeledElement = 48, RULE_ebnf = 49, 
		RULE_blockSuffix = 50, RULE_ebnfSuffix = 51, RULE_lexerAtom = 52, RULE_atom = 53, 
		RULE_notSet = 54, RULE_blockSet = 55, RULE_setElement = 56, RULE_block = 57, 
		RULE_ruleref = 58, RULE_characterRange = 59, RULE_terminal = 60, RULE_elementOptions = 61, 
		RULE_elementOption = 62, RULE_identifier = 63;
	private static String[] makeRuleNames() {
		return new String[] {
			"grammarSpec", "grammarDecl", "grammarType", "prequelConstruct", "optionsSpec", 
			"option", "optionValue", "delegateGrammars", "delegateGrammar", "tokensSpec", 
			"channelsSpec", "idList", "action_", "actionScopeName", "actionBlock", 
			"argActionBlock", "modeSpec", "rules", "ruleSpec", "parserRuleSpec", 
			"exceptionGroup", "exceptionHandler", "finallyClause", "rulePrequel", 
			"ruleReturns", "throwsSpec", "localsSpec", "ruleAction", "ruleModifiers", 
			"ruleModifier", "ruleBlock", "ruleAltList", "labeledAlt", "lexerRuleSpec", 
			"lexerRuleBlock", "lexerAltList", "lexerAlt", "lexerElements", "lexerElement", 
			"labeledLexerElement", "lexerBlock", "lexerCommands", "lexerCommand", 
			"lexerCommandName", "lexerCommandExpr", "altList", "alternative", "element", 
			"labeledElement", "ebnf", "blockSuffix", "ebnfSuffix", "lexerAtom", "atom", 
			"notSet", "blockSet", "setElement", "block", "ruleref", "characterRange", 
			"terminal", "elementOptions", "elementOption", "identifier"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			"'options'", "'tokens'", "'channels'", "'import'", "'fragment'", "'lexer'", 
			"'parser'", "'grammar'", "'protected'", "'public'", "'private'", "'returns'", 
			"'locals'", "'throws'", "'catch'", "'finally'", "'mode'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "TOKEN_REF", "RULE_REF", "LEXER_CHAR_SET", "DOC_COMMENT", "BLOCK_COMMENT", 
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
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "ANTLRv4Parser.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public ANTLRv4Parser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class GrammarSpecContext extends ParserRuleContext {
		public GrammarDeclContext grammarDecl() {
			return getRuleContext(GrammarDeclContext.class,0);
		}
		public RulesContext rules() {
			return getRuleContext(RulesContext.class,0);
		}
		public TerminalNode EOF() { return getToken(ANTLRv4Parser.EOF, 0); }
		public List<PrequelConstructContext> prequelConstruct() {
			return getRuleContexts(PrequelConstructContext.class);
		}
		public PrequelConstructContext prequelConstruct(int i) {
			return getRuleContext(PrequelConstructContext.class,i);
		}
		public List<ModeSpecContext> modeSpec() {
			return getRuleContexts(ModeSpecContext.class);
		}
		public ModeSpecContext modeSpec(int i) {
			return getRuleContext(ModeSpecContext.class,i);
		}
		public GrammarSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_grammarSpec; }
	}

	public final GrammarSpecContext grammarSpec() throws RecognitionException {
		GrammarSpecContext _localctx = new GrammarSpecContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_grammarSpec);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(128);
			grammarDecl();
			setState(132);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << OPTIONS) | (1L << TOKENS) | (1L << CHANNELS) | (1L << IMPORT) | (1L << AT))) != 0)) {
				{
				{
				setState(129);
				prequelConstruct();
				}
				}
				setState(134);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(135);
			rules();
			setState(139);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==MODE) {
				{
				{
				setState(136);
				modeSpec();
				}
				}
				setState(141);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(142);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class GrammarDeclContext extends ParserRuleContext {
		public GrammarTypeContext grammarType() {
			return getRuleContext(GrammarTypeContext.class,0);
		}
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(ANTLRv4Parser.SEMI, 0); }
		public GrammarDeclContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_grammarDecl; }
	}

	public final GrammarDeclContext grammarDecl() throws RecognitionException {
		GrammarDeclContext _localctx = new GrammarDeclContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_grammarDecl);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(144);
			grammarType();
			setState(145);
			identifier();
			setState(146);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class GrammarTypeContext extends ParserRuleContext {
		public TerminalNode LEXER() { return getToken(ANTLRv4Parser.LEXER, 0); }
		public TerminalNode GRAMMAR() { return getToken(ANTLRv4Parser.GRAMMAR, 0); }
		public TerminalNode PARSER() { return getToken(ANTLRv4Parser.PARSER, 0); }
		public GrammarTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_grammarType; }
	}

	public final GrammarTypeContext grammarType() throws RecognitionException {
		GrammarTypeContext _localctx = new GrammarTypeContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_grammarType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(153);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LEXER:
				{
				setState(148);
				match(LEXER);
				setState(149);
				match(GRAMMAR);
				}
				break;
			case PARSER:
				{
				setState(150);
				match(PARSER);
				setState(151);
				match(GRAMMAR);
				}
				break;
			case GRAMMAR:
				{
				setState(152);
				match(GRAMMAR);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PrequelConstructContext extends ParserRuleContext {
		public OptionsSpecContext optionsSpec() {
			return getRuleContext(OptionsSpecContext.class,0);
		}
		public DelegateGrammarsContext delegateGrammars() {
			return getRuleContext(DelegateGrammarsContext.class,0);
		}
		public TokensSpecContext tokensSpec() {
			return getRuleContext(TokensSpecContext.class,0);
		}
		public ChannelsSpecContext channelsSpec() {
			return getRuleContext(ChannelsSpecContext.class,0);
		}
		public Action_Context action_() {
			return getRuleContext(Action_Context.class,0);
		}
		public PrequelConstructContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prequelConstruct; }
	}

	public final PrequelConstructContext prequelConstruct() throws RecognitionException {
		PrequelConstructContext _localctx = new PrequelConstructContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_prequelConstruct);
		try {
			setState(160);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OPTIONS:
				enterOuterAlt(_localctx, 1);
				{
				setState(155);
				optionsSpec();
				}
				break;
			case IMPORT:
				enterOuterAlt(_localctx, 2);
				{
				setState(156);
				delegateGrammars();
				}
				break;
			case TOKENS:
				enterOuterAlt(_localctx, 3);
				{
				setState(157);
				tokensSpec();
				}
				break;
			case CHANNELS:
				enterOuterAlt(_localctx, 4);
				{
				setState(158);
				channelsSpec();
				}
				break;
			case AT:
				enterOuterAlt(_localctx, 5);
				{
				setState(159);
				action_();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OptionsSpecContext extends ParserRuleContext {
		public TerminalNode OPTIONS() { return getToken(ANTLRv4Parser.OPTIONS, 0); }
		public TerminalNode LBRACE() { return getToken(ANTLRv4Parser.LBRACE, 0); }
		public TerminalNode RBRACE() { return getToken(ANTLRv4Parser.RBRACE, 0); }
		public List<OptionContext> option() {
			return getRuleContexts(OptionContext.class);
		}
		public OptionContext option(int i) {
			return getRuleContext(OptionContext.class,i);
		}
		public List<TerminalNode> SEMI() { return getTokens(ANTLRv4Parser.SEMI); }
		public TerminalNode SEMI(int i) {
			return getToken(ANTLRv4Parser.SEMI, i);
		}
		public OptionsSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_optionsSpec; }
	}

	public final OptionsSpecContext optionsSpec() throws RecognitionException {
		OptionsSpecContext _localctx = new OptionsSpecContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_optionsSpec);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(162);
			match(OPTIONS);
			setState(163);
			match(LBRACE);
			setState(169);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TOKEN_REF || _la==RULE_REF) {
				{
				{
				setState(164);
				option();
				setState(165);
				match(SEMI);
				}
				}
				setState(171);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(172);
			match(RBRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OptionContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(ANTLRv4Parser.ASSIGN, 0); }
		public OptionValueContext optionValue() {
			return getRuleContext(OptionValueContext.class,0);
		}
		public OptionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_option; }
	}

	public final OptionContext option() throws RecognitionException {
		OptionContext _localctx = new OptionContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_option);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(174);
			identifier();
			setState(175);
			match(ASSIGN);
			setState(176);
			optionValue();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OptionValueContext extends ParserRuleContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public List<TerminalNode> DOT() { return getTokens(ANTLRv4Parser.DOT); }
		public TerminalNode DOT(int i) {
			return getToken(ANTLRv4Parser.DOT, i);
		}
		public TerminalNode STRING_LITERAL() { return getToken(ANTLRv4Parser.STRING_LITERAL, 0); }
		public ActionBlockContext actionBlock() {
			return getRuleContext(ActionBlockContext.class,0);
		}
		public TerminalNode INT() { return getToken(ANTLRv4Parser.INT, 0); }
		public OptionValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_optionValue; }
	}

	public final OptionValueContext optionValue() throws RecognitionException {
		OptionValueContext _localctx = new OptionValueContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_optionValue);
		int _la;
		try {
			setState(189);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case TOKEN_REF:
			case RULE_REF:
				enterOuterAlt(_localctx, 1);
				{
				setState(178);
				identifier();
				setState(183);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==DOT) {
					{
					{
					setState(179);
					match(DOT);
					setState(180);
					identifier();
					}
					}
					setState(185);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case STRING_LITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(186);
				match(STRING_LITERAL);
				}
				break;
			case BEGIN_ACTION:
				enterOuterAlt(_localctx, 3);
				{
				setState(187);
				actionBlock();
				}
				break;
			case INT:
				enterOuterAlt(_localctx, 4);
				{
				setState(188);
				match(INT);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DelegateGrammarsContext extends ParserRuleContext {
		public TerminalNode IMPORT() { return getToken(ANTLRv4Parser.IMPORT, 0); }
		public List<DelegateGrammarContext> delegateGrammar() {
			return getRuleContexts(DelegateGrammarContext.class);
		}
		public DelegateGrammarContext delegateGrammar(int i) {
			return getRuleContext(DelegateGrammarContext.class,i);
		}
		public TerminalNode SEMI() { return getToken(ANTLRv4Parser.SEMI, 0); }
		public List<TerminalNode> COMMA() { return getTokens(ANTLRv4Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ANTLRv4Parser.COMMA, i);
		}
		public DelegateGrammarsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_delegateGrammars; }
	}

	public final DelegateGrammarsContext delegateGrammars() throws RecognitionException {
		DelegateGrammarsContext _localctx = new DelegateGrammarsContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_delegateGrammars);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(191);
			match(IMPORT);
			setState(192);
			delegateGrammar();
			setState(197);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(193);
				match(COMMA);
				setState(194);
				delegateGrammar();
				}
				}
				setState(199);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(200);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DelegateGrammarContext extends ParserRuleContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public TerminalNode ASSIGN() { return getToken(ANTLRv4Parser.ASSIGN, 0); }
		public DelegateGrammarContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_delegateGrammar; }
	}

	public final DelegateGrammarContext delegateGrammar() throws RecognitionException {
		DelegateGrammarContext _localctx = new DelegateGrammarContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_delegateGrammar);
		try {
			setState(207);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(202);
				identifier();
				setState(203);
				match(ASSIGN);
				setState(204);
				identifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(206);
				identifier();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TokensSpecContext extends ParserRuleContext {
		public TerminalNode TOKENS() { return getToken(ANTLRv4Parser.TOKENS, 0); }
		public TerminalNode LBRACE() { return getToken(ANTLRv4Parser.LBRACE, 0); }
		public TerminalNode RBRACE() { return getToken(ANTLRv4Parser.RBRACE, 0); }
		public IdListContext idList() {
			return getRuleContext(IdListContext.class,0);
		}
		public TokensSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tokensSpec; }
	}

	public final TokensSpecContext tokensSpec() throws RecognitionException {
		TokensSpecContext _localctx = new TokensSpecContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_tokensSpec);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(209);
			match(TOKENS);
			setState(210);
			match(LBRACE);
			setState(212);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TOKEN_REF || _la==RULE_REF) {
				{
				setState(211);
				idList();
				}
			}

			setState(214);
			match(RBRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ChannelsSpecContext extends ParserRuleContext {
		public TerminalNode CHANNELS() { return getToken(ANTLRv4Parser.CHANNELS, 0); }
		public TerminalNode LBRACE() { return getToken(ANTLRv4Parser.LBRACE, 0); }
		public TerminalNode RBRACE() { return getToken(ANTLRv4Parser.RBRACE, 0); }
		public IdListContext idList() {
			return getRuleContext(IdListContext.class,0);
		}
		public ChannelsSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_channelsSpec; }
	}

	public final ChannelsSpecContext channelsSpec() throws RecognitionException {
		ChannelsSpecContext _localctx = new ChannelsSpecContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_channelsSpec);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(216);
			match(CHANNELS);
			setState(217);
			match(LBRACE);
			setState(219);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TOKEN_REF || _la==RULE_REF) {
				{
				setState(218);
				idList();
				}
			}

			setState(221);
			match(RBRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdListContext extends ParserRuleContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(ANTLRv4Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ANTLRv4Parser.COMMA, i);
		}
		public IdListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_idList; }
	}

	public final IdListContext idList() throws RecognitionException {
		IdListContext _localctx = new IdListContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_idList);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(223);
			identifier();
			setState(228);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(224);
					match(COMMA);
					setState(225);
					identifier();
					}
					} 
				}
				setState(230);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
			}
			setState(232);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMA) {
				{
				setState(231);
				match(COMMA);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Action_Context extends ParserRuleContext {
		public TerminalNode AT() { return getToken(ANTLRv4Parser.AT, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public ActionBlockContext actionBlock() {
			return getRuleContext(ActionBlockContext.class,0);
		}
		public ActionScopeNameContext actionScopeName() {
			return getRuleContext(ActionScopeNameContext.class,0);
		}
		public TerminalNode COLONCOLON() { return getToken(ANTLRv4Parser.COLONCOLON, 0); }
		public Action_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_action_; }
	}

	public final Action_Context action_() throws RecognitionException {
		Action_Context _localctx = new Action_Context(_ctx, getState());
		enterRule(_localctx, 24, RULE_action_);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(234);
			match(AT);
			setState(238);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				{
				setState(235);
				actionScopeName();
				setState(236);
				match(COLONCOLON);
				}
				break;
			}
			setState(240);
			identifier();
			setState(241);
			actionBlock();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ActionScopeNameContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode LEXER() { return getToken(ANTLRv4Parser.LEXER, 0); }
		public TerminalNode PARSER() { return getToken(ANTLRv4Parser.PARSER, 0); }
		public ActionScopeNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_actionScopeName; }
	}

	public final ActionScopeNameContext actionScopeName() throws RecognitionException {
		ActionScopeNameContext _localctx = new ActionScopeNameContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_actionScopeName);
		try {
			setState(246);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case TOKEN_REF:
			case RULE_REF:
				enterOuterAlt(_localctx, 1);
				{
				setState(243);
				identifier();
				}
				break;
			case LEXER:
				enterOuterAlt(_localctx, 2);
				{
				setState(244);
				match(LEXER);
				}
				break;
			case PARSER:
				enterOuterAlt(_localctx, 3);
				{
				setState(245);
				match(PARSER);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ActionBlockContext extends ParserRuleContext {
		public TerminalNode BEGIN_ACTION() { return getToken(ANTLRv4Parser.BEGIN_ACTION, 0); }
		public TerminalNode END_ACTION() { return getToken(ANTLRv4Parser.END_ACTION, 0); }
		public List<TerminalNode> ACTION_CONTENT() { return getTokens(ANTLRv4Parser.ACTION_CONTENT); }
		public TerminalNode ACTION_CONTENT(int i) {
			return getToken(ANTLRv4Parser.ACTION_CONTENT, i);
		}
		public ActionBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_actionBlock; }
	}

	public final ActionBlockContext actionBlock() throws RecognitionException {
		ActionBlockContext _localctx = new ActionBlockContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_actionBlock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(248);
			match(BEGIN_ACTION);
			setState(252);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==ACTION_CONTENT) {
				{
				{
				setState(249);
				match(ACTION_CONTENT);
				}
				}
				setState(254);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(255);
			match(END_ACTION);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ArgActionBlockContext extends ParserRuleContext {
		public TerminalNode BEGIN_ARGUMENT() { return getToken(ANTLRv4Parser.BEGIN_ARGUMENT, 0); }
		public TerminalNode END_ARGUMENT() { return getToken(ANTLRv4Parser.END_ARGUMENT, 0); }
		public List<TerminalNode> ARGUMENT_CONTENT() { return getTokens(ANTLRv4Parser.ARGUMENT_CONTENT); }
		public TerminalNode ARGUMENT_CONTENT(int i) {
			return getToken(ANTLRv4Parser.ARGUMENT_CONTENT, i);
		}
		public ArgActionBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_argActionBlock; }
	}

	public final ArgActionBlockContext argActionBlock() throws RecognitionException {
		ArgActionBlockContext _localctx = new ArgActionBlockContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_argActionBlock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(257);
			match(BEGIN_ARGUMENT);
			setState(261);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==ARGUMENT_CONTENT) {
				{
				{
				setState(258);
				match(ARGUMENT_CONTENT);
				}
				}
				setState(263);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(264);
			match(END_ARGUMENT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ModeSpecContext extends ParserRuleContext {
		public TerminalNode MODE() { return getToken(ANTLRv4Parser.MODE, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(ANTLRv4Parser.SEMI, 0); }
		public List<LexerRuleSpecContext> lexerRuleSpec() {
			return getRuleContexts(LexerRuleSpecContext.class);
		}
		public LexerRuleSpecContext lexerRuleSpec(int i) {
			return getRuleContext(LexerRuleSpecContext.class,i);
		}
		public ModeSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_modeSpec; }
	}

	public final ModeSpecContext modeSpec() throws RecognitionException {
		ModeSpecContext _localctx = new ModeSpecContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_modeSpec);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(266);
			match(MODE);
			setState(267);
			identifier();
			setState(268);
			match(SEMI);
			setState(272);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TOKEN_REF || _la==FRAGMENT) {
				{
				{
				setState(269);
				lexerRuleSpec();
				}
				}
				setState(274);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RulesContext extends ParserRuleContext {
		public List<RuleSpecContext> ruleSpec() {
			return getRuleContexts(RuleSpecContext.class);
		}
		public RuleSpecContext ruleSpec(int i) {
			return getRuleContext(RuleSpecContext.class,i);
		}
		public RulesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_rules; }
	}

	public final RulesContext rules() throws RecognitionException {
		RulesContext _localctx = new RulesContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_rules);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(278);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TOKEN_REF) | (1L << RULE_REF) | (1L << FRAGMENT) | (1L << PROTECTED) | (1L << PUBLIC) | (1L << PRIVATE))) != 0)) {
				{
				{
				setState(275);
				ruleSpec();
				}
				}
				setState(280);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RuleSpecContext extends ParserRuleContext {
		public ParserRuleSpecContext parserRuleSpec() {
			return getRuleContext(ParserRuleSpecContext.class,0);
		}
		public LexerRuleSpecContext lexerRuleSpec() {
			return getRuleContext(LexerRuleSpecContext.class,0);
		}
		public RuleSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ruleSpec; }
	}

	public final RuleSpecContext ruleSpec() throws RecognitionException {
		RuleSpecContext _localctx = new RuleSpecContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_ruleSpec);
		try {
			setState(283);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(281);
				parserRuleSpec();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(282);
				lexerRuleSpec();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParserRuleSpecContext extends ParserRuleContext {
		public TerminalNode RULE_REF() { return getToken(ANTLRv4Parser.RULE_REF, 0); }
		public TerminalNode COLON() { return getToken(ANTLRv4Parser.COLON, 0); }
		public RuleBlockContext ruleBlock() {
			return getRuleContext(RuleBlockContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(ANTLRv4Parser.SEMI, 0); }
		public ExceptionGroupContext exceptionGroup() {
			return getRuleContext(ExceptionGroupContext.class,0);
		}
		public RuleModifiersContext ruleModifiers() {
			return getRuleContext(RuleModifiersContext.class,0);
		}
		public ArgActionBlockContext argActionBlock() {
			return getRuleContext(ArgActionBlockContext.class,0);
		}
		public RuleReturnsContext ruleReturns() {
			return getRuleContext(RuleReturnsContext.class,0);
		}
		public ThrowsSpecContext throwsSpec() {
			return getRuleContext(ThrowsSpecContext.class,0);
		}
		public LocalsSpecContext localsSpec() {
			return getRuleContext(LocalsSpecContext.class,0);
		}
		public List<RulePrequelContext> rulePrequel() {
			return getRuleContexts(RulePrequelContext.class);
		}
		public RulePrequelContext rulePrequel(int i) {
			return getRuleContext(RulePrequelContext.class,i);
		}
		public ParserRuleSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parserRuleSpec; }
	}

	public final ParserRuleSpecContext parserRuleSpec() throws RecognitionException {
		ParserRuleSpecContext _localctx = new ParserRuleSpecContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_parserRuleSpec);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(286);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FRAGMENT) | (1L << PROTECTED) | (1L << PUBLIC) | (1L << PRIVATE))) != 0)) {
				{
				setState(285);
				ruleModifiers();
				}
			}

			setState(288);
			match(RULE_REF);
			setState(290);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==BEGIN_ARGUMENT) {
				{
				setState(289);
				argActionBlock();
				}
			}

			setState(293);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURNS) {
				{
				setState(292);
				ruleReturns();
				}
			}

			setState(296);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==THROWS) {
				{
				setState(295);
				throwsSpec();
				}
			}

			setState(299);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCALS) {
				{
				setState(298);
				localsSpec();
				}
			}

			setState(304);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==OPTIONS || _la==AT) {
				{
				{
				setState(301);
				rulePrequel();
				}
				}
				setState(306);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(307);
			match(COLON);
			setState(308);
			ruleBlock();
			setState(309);
			match(SEMI);
			setState(310);
			exceptionGroup();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExceptionGroupContext extends ParserRuleContext {
		public List<ExceptionHandlerContext> exceptionHandler() {
			return getRuleContexts(ExceptionHandlerContext.class);
		}
		public ExceptionHandlerContext exceptionHandler(int i) {
			return getRuleContext(ExceptionHandlerContext.class,i);
		}
		public FinallyClauseContext finallyClause() {
			return getRuleContext(FinallyClauseContext.class,0);
		}
		public ExceptionGroupContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_exceptionGroup; }
	}

	public final ExceptionGroupContext exceptionGroup() throws RecognitionException {
		ExceptionGroupContext _localctx = new ExceptionGroupContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_exceptionGroup);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(315);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==CATCH) {
				{
				{
				setState(312);
				exceptionHandler();
				}
				}
				setState(317);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(319);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==FINALLY) {
				{
				setState(318);
				finallyClause();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExceptionHandlerContext extends ParserRuleContext {
		public TerminalNode CATCH() { return getToken(ANTLRv4Parser.CATCH, 0); }
		public ArgActionBlockContext argActionBlock() {
			return getRuleContext(ArgActionBlockContext.class,0);
		}
		public ActionBlockContext actionBlock() {
			return getRuleContext(ActionBlockContext.class,0);
		}
		public ExceptionHandlerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_exceptionHandler; }
	}

	public final ExceptionHandlerContext exceptionHandler() throws RecognitionException {
		ExceptionHandlerContext _localctx = new ExceptionHandlerContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_exceptionHandler);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(321);
			match(CATCH);
			setState(322);
			argActionBlock();
			setState(323);
			actionBlock();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FinallyClauseContext extends ParserRuleContext {
		public TerminalNode FINALLY() { return getToken(ANTLRv4Parser.FINALLY, 0); }
		public ActionBlockContext actionBlock() {
			return getRuleContext(ActionBlockContext.class,0);
		}
		public FinallyClauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_finallyClause; }
	}

	public final FinallyClauseContext finallyClause() throws RecognitionException {
		FinallyClauseContext _localctx = new FinallyClauseContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_finallyClause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(325);
			match(FINALLY);
			setState(326);
			actionBlock();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RulePrequelContext extends ParserRuleContext {
		public OptionsSpecContext optionsSpec() {
			return getRuleContext(OptionsSpecContext.class,0);
		}
		public RuleActionContext ruleAction() {
			return getRuleContext(RuleActionContext.class,0);
		}
		public RulePrequelContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_rulePrequel; }
	}

	public final RulePrequelContext rulePrequel() throws RecognitionException {
		RulePrequelContext _localctx = new RulePrequelContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_rulePrequel);
		try {
			setState(330);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OPTIONS:
				enterOuterAlt(_localctx, 1);
				{
				setState(328);
				optionsSpec();
				}
				break;
			case AT:
				enterOuterAlt(_localctx, 2);
				{
				setState(329);
				ruleAction();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RuleReturnsContext extends ParserRuleContext {
		public TerminalNode RETURNS() { return getToken(ANTLRv4Parser.RETURNS, 0); }
		public ArgActionBlockContext argActionBlock() {
			return getRuleContext(ArgActionBlockContext.class,0);
		}
		public RuleReturnsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ruleReturns; }
	}

	public final RuleReturnsContext ruleReturns() throws RecognitionException {
		RuleReturnsContext _localctx = new RuleReturnsContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_ruleReturns);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(332);
			match(RETURNS);
			setState(333);
			argActionBlock();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ThrowsSpecContext extends ParserRuleContext {
		public TerminalNode THROWS() { return getToken(ANTLRv4Parser.THROWS, 0); }
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(ANTLRv4Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ANTLRv4Parser.COMMA, i);
		}
		public ThrowsSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_throwsSpec; }
	}

	public final ThrowsSpecContext throwsSpec() throws RecognitionException {
		ThrowsSpecContext _localctx = new ThrowsSpecContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_throwsSpec);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(335);
			match(THROWS);
			setState(336);
			identifier();
			setState(341);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(337);
				match(COMMA);
				setState(338);
				identifier();
				}
				}
				setState(343);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LocalsSpecContext extends ParserRuleContext {
		public TerminalNode LOCALS() { return getToken(ANTLRv4Parser.LOCALS, 0); }
		public ArgActionBlockContext argActionBlock() {
			return getRuleContext(ArgActionBlockContext.class,0);
		}
		public LocalsSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_localsSpec; }
	}

	public final LocalsSpecContext localsSpec() throws RecognitionException {
		LocalsSpecContext _localctx = new LocalsSpecContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_localsSpec);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(344);
			match(LOCALS);
			setState(345);
			argActionBlock();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RuleActionContext extends ParserRuleContext {
		public TerminalNode AT() { return getToken(ANTLRv4Parser.AT, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public ActionBlockContext actionBlock() {
			return getRuleContext(ActionBlockContext.class,0);
		}
		public RuleActionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ruleAction; }
	}

	public final RuleActionContext ruleAction() throws RecognitionException {
		RuleActionContext _localctx = new RuleActionContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_ruleAction);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(347);
			match(AT);
			setState(348);
			identifier();
			setState(349);
			actionBlock();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RuleModifiersContext extends ParserRuleContext {
		public List<RuleModifierContext> ruleModifier() {
			return getRuleContexts(RuleModifierContext.class);
		}
		public RuleModifierContext ruleModifier(int i) {
			return getRuleContext(RuleModifierContext.class,i);
		}
		public RuleModifiersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ruleModifiers; }
	}

	public final RuleModifiersContext ruleModifiers() throws RecognitionException {
		RuleModifiersContext _localctx = new RuleModifiersContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_ruleModifiers);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(352); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(351);
				ruleModifier();
				}
				}
				setState(354); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FRAGMENT) | (1L << PROTECTED) | (1L << PUBLIC) | (1L << PRIVATE))) != 0) );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RuleModifierContext extends ParserRuleContext {
		public TerminalNode PUBLIC() { return getToken(ANTLRv4Parser.PUBLIC, 0); }
		public TerminalNode PRIVATE() { return getToken(ANTLRv4Parser.PRIVATE, 0); }
		public TerminalNode PROTECTED() { return getToken(ANTLRv4Parser.PROTECTED, 0); }
		public TerminalNode FRAGMENT() { return getToken(ANTLRv4Parser.FRAGMENT, 0); }
		public RuleModifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ruleModifier; }
	}

	public final RuleModifierContext ruleModifier() throws RecognitionException {
		RuleModifierContext _localctx = new RuleModifierContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_ruleModifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(356);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FRAGMENT) | (1L << PROTECTED) | (1L << PUBLIC) | (1L << PRIVATE))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RuleBlockContext extends ParserRuleContext {
		public RuleAltListContext ruleAltList() {
			return getRuleContext(RuleAltListContext.class,0);
		}
		public RuleBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ruleBlock; }
	}

	public final RuleBlockContext ruleBlock() throws RecognitionException {
		RuleBlockContext _localctx = new RuleBlockContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_ruleBlock);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(358);
			ruleAltList();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RuleAltListContext extends ParserRuleContext {
		public List<LabeledAltContext> labeledAlt() {
			return getRuleContexts(LabeledAltContext.class);
		}
		public LabeledAltContext labeledAlt(int i) {
			return getRuleContext(LabeledAltContext.class,i);
		}
		public List<TerminalNode> OR() { return getTokens(ANTLRv4Parser.OR); }
		public TerminalNode OR(int i) {
			return getToken(ANTLRv4Parser.OR, i);
		}
		public RuleAltListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ruleAltList; }
	}

	public final RuleAltListContext ruleAltList() throws RecognitionException {
		RuleAltListContext _localctx = new RuleAltListContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_ruleAltList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(360);
			labeledAlt();
			setState(365);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==OR) {
				{
				{
				setState(361);
				match(OR);
				setState(362);
				labeledAlt();
				}
				}
				setState(367);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LabeledAltContext extends ParserRuleContext {
		public AlternativeContext alternative() {
			return getRuleContext(AlternativeContext.class,0);
		}
		public TerminalNode POUND() { return getToken(ANTLRv4Parser.POUND, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public LabeledAltContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_labeledAlt; }
	}

	public final LabeledAltContext labeledAlt() throws RecognitionException {
		LabeledAltContext _localctx = new LabeledAltContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_labeledAlt);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(368);
			alternative();
			setState(371);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==POUND) {
				{
				setState(369);
				match(POUND);
				setState(370);
				identifier();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LexerRuleSpecContext extends ParserRuleContext {
		public TerminalNode TOKEN_REF() { return getToken(ANTLRv4Parser.TOKEN_REF, 0); }
		public TerminalNode COLON() { return getToken(ANTLRv4Parser.COLON, 0); }
		public LexerRuleBlockContext lexerRuleBlock() {
			return getRuleContext(LexerRuleBlockContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(ANTLRv4Parser.SEMI, 0); }
		public TerminalNode FRAGMENT() { return getToken(ANTLRv4Parser.FRAGMENT, 0); }
		public LexerRuleSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lexerRuleSpec; }
	}

	public final LexerRuleSpecContext lexerRuleSpec() throws RecognitionException {
		LexerRuleSpecContext _localctx = new LexerRuleSpecContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_lexerRuleSpec);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(374);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==FRAGMENT) {
				{
				setState(373);
				match(FRAGMENT);
				}
			}

			setState(376);
			match(TOKEN_REF);
			setState(377);
			match(COLON);
			setState(378);
			lexerRuleBlock();
			setState(379);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LexerRuleBlockContext extends ParserRuleContext {
		public LexerAltListContext lexerAltList() {
			return getRuleContext(LexerAltListContext.class,0);
		}
		public LexerRuleBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lexerRuleBlock; }
	}

	public final LexerRuleBlockContext lexerRuleBlock() throws RecognitionException {
		LexerRuleBlockContext _localctx = new LexerRuleBlockContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_lexerRuleBlock);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(381);
			lexerAltList();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LexerAltListContext extends ParserRuleContext {
		public List<LexerAltContext> lexerAlt() {
			return getRuleContexts(LexerAltContext.class);
		}
		public LexerAltContext lexerAlt(int i) {
			return getRuleContext(LexerAltContext.class,i);
		}
		public List<TerminalNode> OR() { return getTokens(ANTLRv4Parser.OR); }
		public TerminalNode OR(int i) {
			return getToken(ANTLRv4Parser.OR, i);
		}
		public LexerAltListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lexerAltList; }
	}

	public final LexerAltListContext lexerAltList() throws RecognitionException {
		LexerAltListContext _localctx = new LexerAltListContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_lexerAltList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(383);
			lexerAlt();
			setState(388);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==OR) {
				{
				{
				setState(384);
				match(OR);
				setState(385);
				lexerAlt();
				}
				}
				setState(390);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LexerAltContext extends ParserRuleContext {
		public LexerElementsContext lexerElements() {
			return getRuleContext(LexerElementsContext.class,0);
		}
		public LexerCommandsContext lexerCommands() {
			return getRuleContext(LexerCommandsContext.class,0);
		}
		public LexerAltContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lexerAlt; }
	}

	public final LexerAltContext lexerAlt() throws RecognitionException {
		LexerAltContext _localctx = new LexerAltContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_lexerAlt);
		int _la;
		try {
			setState(396);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,36,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(391);
				lexerElements();
				setState(393);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RARROW) {
					{
					setState(392);
					lexerCommands();
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LexerElementsContext extends ParserRuleContext {
		public List<LexerElementContext> lexerElement() {
			return getRuleContexts(LexerElementContext.class);
		}
		public LexerElementContext lexerElement(int i) {
			return getRuleContext(LexerElementContext.class,i);
		}
		public LexerElementsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lexerElements; }
	}

	public final LexerElementsContext lexerElements() throws RecognitionException {
		LexerElementsContext _localctx = new LexerElementsContext(_ctx, getState());
		enterRule(_localctx, 74, RULE_lexerElements);
		int _la;
		try {
			setState(404);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case TOKEN_REF:
			case RULE_REF:
			case LEXER_CHAR_SET:
			case STRING_LITERAL:
			case BEGIN_ACTION:
			case LPAREN:
			case DOT:
			case NOT:
				enterOuterAlt(_localctx, 1);
				{
				setState(399); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(398);
					lexerElement();
					}
					}
					setState(401); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TOKEN_REF) | (1L << RULE_REF) | (1L << LEXER_CHAR_SET) | (1L << STRING_LITERAL) | (1L << BEGIN_ACTION) | (1L << LPAREN) | (1L << DOT) | (1L << NOT))) != 0) );
				}
				break;
			case SEMI:
			case RPAREN:
			case RARROW:
			case OR:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LexerElementContext extends ParserRuleContext {
		public LabeledLexerElementContext labeledLexerElement() {
			return getRuleContext(LabeledLexerElementContext.class,0);
		}
		public EbnfSuffixContext ebnfSuffix() {
			return getRuleContext(EbnfSuffixContext.class,0);
		}
		public LexerAtomContext lexerAtom() {
			return getRuleContext(LexerAtomContext.class,0);
		}
		public LexerBlockContext lexerBlock() {
			return getRuleContext(LexerBlockContext.class,0);
		}
		public ActionBlockContext actionBlock() {
			return getRuleContext(ActionBlockContext.class,0);
		}
		public TerminalNode QUESTION() { return getToken(ANTLRv4Parser.QUESTION, 0); }
		public LexerElementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lexerElement; }
	}

	public final LexerElementContext lexerElement() throws RecognitionException {
		LexerElementContext _localctx = new LexerElementContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_lexerElement);
		int _la;
		try {
			setState(422);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,43,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(406);
				labeledLexerElement();
				setState(408);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << QUESTION) | (1L << STAR) | (1L << PLUS))) != 0)) {
					{
					setState(407);
					ebnfSuffix();
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(410);
				lexerAtom();
				setState(412);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << QUESTION) | (1L << STAR) | (1L << PLUS))) != 0)) {
					{
					setState(411);
					ebnfSuffix();
					}
				}

				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(414);
				lexerBlock();
				setState(416);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << QUESTION) | (1L << STAR) | (1L << PLUS))) != 0)) {
					{
					setState(415);
					ebnfSuffix();
					}
				}

				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(418);
				actionBlock();
				setState(420);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==QUESTION) {
					{
					setState(419);
					match(QUESTION);
					}
				}

				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LabeledLexerElementContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(ANTLRv4Parser.ASSIGN, 0); }
		public TerminalNode PLUS_ASSIGN() { return getToken(ANTLRv4Parser.PLUS_ASSIGN, 0); }
		public LexerAtomContext lexerAtom() {
			return getRuleContext(LexerAtomContext.class,0);
		}
		public LexerBlockContext lexerBlock() {
			return getRuleContext(LexerBlockContext.class,0);
		}
		public LabeledLexerElementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_labeledLexerElement; }
	}

	public final LabeledLexerElementContext labeledLexerElement() throws RecognitionException {
		LabeledLexerElementContext _localctx = new LabeledLexerElementContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_labeledLexerElement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(424);
			identifier();
			setState(425);
			_la = _input.LA(1);
			if ( !(_la==ASSIGN || _la==PLUS_ASSIGN) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(428);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case TOKEN_REF:
			case LEXER_CHAR_SET:
			case STRING_LITERAL:
			case DOT:
			case NOT:
				{
				setState(426);
				lexerAtom();
				}
				break;
			case LPAREN:
				{
				setState(427);
				lexerBlock();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LexerBlockContext extends ParserRuleContext {
		public TerminalNode LPAREN() { return getToken(ANTLRv4Parser.LPAREN, 0); }
		public LexerAltListContext lexerAltList() {
			return getRuleContext(LexerAltListContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(ANTLRv4Parser.RPAREN, 0); }
		public LexerBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lexerBlock; }
	}

	public final LexerBlockContext lexerBlock() throws RecognitionException {
		LexerBlockContext _localctx = new LexerBlockContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_lexerBlock);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(430);
			match(LPAREN);
			setState(431);
			lexerAltList();
			setState(432);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LexerCommandsContext extends ParserRuleContext {
		public TerminalNode RARROW() { return getToken(ANTLRv4Parser.RARROW, 0); }
		public List<LexerCommandContext> lexerCommand() {
			return getRuleContexts(LexerCommandContext.class);
		}
		public LexerCommandContext lexerCommand(int i) {
			return getRuleContext(LexerCommandContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(ANTLRv4Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ANTLRv4Parser.COMMA, i);
		}
		public LexerCommandsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lexerCommands; }
	}

	public final LexerCommandsContext lexerCommands() throws RecognitionException {
		LexerCommandsContext _localctx = new LexerCommandsContext(_ctx, getState());
		enterRule(_localctx, 82, RULE_lexerCommands);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(434);
			match(RARROW);
			setState(435);
			lexerCommand();
			setState(440);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(436);
				match(COMMA);
				setState(437);
				lexerCommand();
				}
				}
				setState(442);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LexerCommandContext extends ParserRuleContext {
		public LexerCommandNameContext lexerCommandName() {
			return getRuleContext(LexerCommandNameContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(ANTLRv4Parser.LPAREN, 0); }
		public LexerCommandExprContext lexerCommandExpr() {
			return getRuleContext(LexerCommandExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(ANTLRv4Parser.RPAREN, 0); }
		public LexerCommandContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lexerCommand; }
	}

	public final LexerCommandContext lexerCommand() throws RecognitionException {
		LexerCommandContext _localctx = new LexerCommandContext(_ctx, getState());
		enterRule(_localctx, 84, RULE_lexerCommand);
		try {
			setState(449);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,46,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(443);
				lexerCommandName();
				setState(444);
				match(LPAREN);
				setState(445);
				lexerCommandExpr();
				setState(446);
				match(RPAREN);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(448);
				lexerCommandName();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LexerCommandNameContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode MODE() { return getToken(ANTLRv4Parser.MODE, 0); }
		public LexerCommandNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lexerCommandName; }
	}

	public final LexerCommandNameContext lexerCommandName() throws RecognitionException {
		LexerCommandNameContext _localctx = new LexerCommandNameContext(_ctx, getState());
		enterRule(_localctx, 86, RULE_lexerCommandName);
		try {
			setState(453);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case TOKEN_REF:
			case RULE_REF:
				enterOuterAlt(_localctx, 1);
				{
				setState(451);
				identifier();
				}
				break;
			case MODE:
				enterOuterAlt(_localctx, 2);
				{
				setState(452);
				match(MODE);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LexerCommandExprContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode INT() { return getToken(ANTLRv4Parser.INT, 0); }
		public LexerCommandExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lexerCommandExpr; }
	}

	public final LexerCommandExprContext lexerCommandExpr() throws RecognitionException {
		LexerCommandExprContext _localctx = new LexerCommandExprContext(_ctx, getState());
		enterRule(_localctx, 88, RULE_lexerCommandExpr);
		try {
			setState(457);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case TOKEN_REF:
			case RULE_REF:
				enterOuterAlt(_localctx, 1);
				{
				setState(455);
				identifier();
				}
				break;
			case INT:
				enterOuterAlt(_localctx, 2);
				{
				setState(456);
				match(INT);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AltListContext extends ParserRuleContext {
		public List<AlternativeContext> alternative() {
			return getRuleContexts(AlternativeContext.class);
		}
		public AlternativeContext alternative(int i) {
			return getRuleContext(AlternativeContext.class,i);
		}
		public List<TerminalNode> OR() { return getTokens(ANTLRv4Parser.OR); }
		public TerminalNode OR(int i) {
			return getToken(ANTLRv4Parser.OR, i);
		}
		public AltListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_altList; }
	}

	public final AltListContext altList() throws RecognitionException {
		AltListContext _localctx = new AltListContext(_ctx, getState());
		enterRule(_localctx, 90, RULE_altList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(459);
			alternative();
			setState(464);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==OR) {
				{
				{
				setState(460);
				match(OR);
				setState(461);
				alternative();
				}
				}
				setState(466);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AlternativeContext extends ParserRuleContext {
		public ElementOptionsContext elementOptions() {
			return getRuleContext(ElementOptionsContext.class,0);
		}
		public List<ElementContext> element() {
			return getRuleContexts(ElementContext.class);
		}
		public ElementContext element(int i) {
			return getRuleContext(ElementContext.class,i);
		}
		public AlternativeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_alternative; }
	}

	public final AlternativeContext alternative() throws RecognitionException {
		AlternativeContext _localctx = new AlternativeContext(_ctx, getState());
		enterRule(_localctx, 92, RULE_alternative);
		int _la;
		try {
			setState(476);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case TOKEN_REF:
			case RULE_REF:
			case STRING_LITERAL:
			case BEGIN_ACTION:
			case LPAREN:
			case LT:
			case DOT:
			case NOT:
				enterOuterAlt(_localctx, 1);
				{
				setState(468);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LT) {
					{
					setState(467);
					elementOptions();
					}
				}

				setState(471); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(470);
					element();
					}
					}
					setState(473); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TOKEN_REF) | (1L << RULE_REF) | (1L << STRING_LITERAL) | (1L << BEGIN_ACTION) | (1L << LPAREN) | (1L << DOT) | (1L << NOT))) != 0) );
				}
				break;
			case SEMI:
			case RPAREN:
			case OR:
			case POUND:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ElementContext extends ParserRuleContext {
		public LabeledElementContext labeledElement() {
			return getRuleContext(LabeledElementContext.class,0);
		}
		public EbnfSuffixContext ebnfSuffix() {
			return getRuleContext(EbnfSuffixContext.class,0);
		}
		public AtomContext atom() {
			return getRuleContext(AtomContext.class,0);
		}
		public EbnfContext ebnf() {
			return getRuleContext(EbnfContext.class,0);
		}
		public ActionBlockContext actionBlock() {
			return getRuleContext(ActionBlockContext.class,0);
		}
		public TerminalNode QUESTION() { return getToken(ANTLRv4Parser.QUESTION, 0); }
		public ElementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_element; }
	}

	public final ElementContext element() throws RecognitionException {
		ElementContext _localctx = new ElementContext(_ctx, getState());
		enterRule(_localctx, 94, RULE_element);
		int _la;
		try {
			setState(493);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,56,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(478);
				labeledElement();
				setState(481);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case QUESTION:
				case STAR:
				case PLUS:
					{
					setState(479);
					ebnfSuffix();
					}
					break;
				case TOKEN_REF:
				case RULE_REF:
				case STRING_LITERAL:
				case BEGIN_ACTION:
				case SEMI:
				case LPAREN:
				case RPAREN:
				case OR:
				case DOT:
				case POUND:
				case NOT:
					{
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(483);
				atom();
				setState(486);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case QUESTION:
				case STAR:
				case PLUS:
					{
					setState(484);
					ebnfSuffix();
					}
					break;
				case TOKEN_REF:
				case RULE_REF:
				case STRING_LITERAL:
				case BEGIN_ACTION:
				case SEMI:
				case LPAREN:
				case RPAREN:
				case OR:
				case DOT:
				case POUND:
				case NOT:
					{
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(488);
				ebnf();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(489);
				actionBlock();
				setState(491);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==QUESTION) {
					{
					setState(490);
					match(QUESTION);
					}
				}

				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LabeledElementContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(ANTLRv4Parser.ASSIGN, 0); }
		public TerminalNode PLUS_ASSIGN() { return getToken(ANTLRv4Parser.PLUS_ASSIGN, 0); }
		public AtomContext atom() {
			return getRuleContext(AtomContext.class,0);
		}
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public LabeledElementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_labeledElement; }
	}

	public final LabeledElementContext labeledElement() throws RecognitionException {
		LabeledElementContext _localctx = new LabeledElementContext(_ctx, getState());
		enterRule(_localctx, 96, RULE_labeledElement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(495);
			identifier();
			setState(496);
			_la = _input.LA(1);
			if ( !(_la==ASSIGN || _la==PLUS_ASSIGN) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(499);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case TOKEN_REF:
			case RULE_REF:
			case STRING_LITERAL:
			case DOT:
			case NOT:
				{
				setState(497);
				atom();
				}
				break;
			case LPAREN:
				{
				setState(498);
				block();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EbnfContext extends ParserRuleContext {
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public BlockSuffixContext blockSuffix() {
			return getRuleContext(BlockSuffixContext.class,0);
		}
		public EbnfContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ebnf; }
	}

	public final EbnfContext ebnf() throws RecognitionException {
		EbnfContext _localctx = new EbnfContext(_ctx, getState());
		enterRule(_localctx, 98, RULE_ebnf);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(501);
			block();
			setState(503);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << QUESTION) | (1L << STAR) | (1L << PLUS))) != 0)) {
				{
				setState(502);
				blockSuffix();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BlockSuffixContext extends ParserRuleContext {
		public EbnfSuffixContext ebnfSuffix() {
			return getRuleContext(EbnfSuffixContext.class,0);
		}
		public BlockSuffixContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_blockSuffix; }
	}

	public final BlockSuffixContext blockSuffix() throws RecognitionException {
		BlockSuffixContext _localctx = new BlockSuffixContext(_ctx, getState());
		enterRule(_localctx, 100, RULE_blockSuffix);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(505);
			ebnfSuffix();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EbnfSuffixContext extends ParserRuleContext {
		public List<TerminalNode> QUESTION() { return getTokens(ANTLRv4Parser.QUESTION); }
		public TerminalNode QUESTION(int i) {
			return getToken(ANTLRv4Parser.QUESTION, i);
		}
		public TerminalNode STAR() { return getToken(ANTLRv4Parser.STAR, 0); }
		public TerminalNode PLUS() { return getToken(ANTLRv4Parser.PLUS, 0); }
		public EbnfSuffixContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ebnfSuffix; }
	}

	public final EbnfSuffixContext ebnfSuffix() throws RecognitionException {
		EbnfSuffixContext _localctx = new EbnfSuffixContext(_ctx, getState());
		enterRule(_localctx, 102, RULE_ebnfSuffix);
		int _la;
		try {
			setState(519);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case QUESTION:
				enterOuterAlt(_localctx, 1);
				{
				setState(507);
				match(QUESTION);
				setState(509);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==QUESTION) {
					{
					setState(508);
					match(QUESTION);
					}
				}

				}
				break;
			case STAR:
				enterOuterAlt(_localctx, 2);
				{
				setState(511);
				match(STAR);
				setState(513);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==QUESTION) {
					{
					setState(512);
					match(QUESTION);
					}
				}

				}
				break;
			case PLUS:
				enterOuterAlt(_localctx, 3);
				{
				setState(515);
				match(PLUS);
				setState(517);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==QUESTION) {
					{
					setState(516);
					match(QUESTION);
					}
				}

				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LexerAtomContext extends ParserRuleContext {
		public CharacterRangeContext characterRange() {
			return getRuleContext(CharacterRangeContext.class,0);
		}
		public TerminalContext terminal() {
			return getRuleContext(TerminalContext.class,0);
		}
		public NotSetContext notSet() {
			return getRuleContext(NotSetContext.class,0);
		}
		public TerminalNode LEXER_CHAR_SET() { return getToken(ANTLRv4Parser.LEXER_CHAR_SET, 0); }
		public TerminalNode DOT() { return getToken(ANTLRv4Parser.DOT, 0); }
		public ElementOptionsContext elementOptions() {
			return getRuleContext(ElementOptionsContext.class,0);
		}
		public LexerAtomContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lexerAtom; }
	}

	public final LexerAtomContext lexerAtom() throws RecognitionException {
		LexerAtomContext _localctx = new LexerAtomContext(_ctx, getState());
		enterRule(_localctx, 104, RULE_lexerAtom);
		int _la;
		try {
			setState(529);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,64,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(521);
				characterRange();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(522);
				terminal();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(523);
				notSet();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(524);
				match(LEXER_CHAR_SET);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(525);
				match(DOT);
				setState(527);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LT) {
					{
					setState(526);
					elementOptions();
					}
				}

				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AtomContext extends ParserRuleContext {
		public TerminalContext terminal() {
			return getRuleContext(TerminalContext.class,0);
		}
		public RulerefContext ruleref() {
			return getRuleContext(RulerefContext.class,0);
		}
		public NotSetContext notSet() {
			return getRuleContext(NotSetContext.class,0);
		}
		public TerminalNode DOT() { return getToken(ANTLRv4Parser.DOT, 0); }
		public ElementOptionsContext elementOptions() {
			return getRuleContext(ElementOptionsContext.class,0);
		}
		public AtomContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_atom; }
	}

	public final AtomContext atom() throws RecognitionException {
		AtomContext _localctx = new AtomContext(_ctx, getState());
		enterRule(_localctx, 106, RULE_atom);
		int _la;
		try {
			setState(538);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case TOKEN_REF:
			case STRING_LITERAL:
				enterOuterAlt(_localctx, 1);
				{
				setState(531);
				terminal();
				}
				break;
			case RULE_REF:
				enterOuterAlt(_localctx, 2);
				{
				setState(532);
				ruleref();
				}
				break;
			case NOT:
				enterOuterAlt(_localctx, 3);
				{
				setState(533);
				notSet();
				}
				break;
			case DOT:
				enterOuterAlt(_localctx, 4);
				{
				setState(534);
				match(DOT);
				setState(536);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LT) {
					{
					setState(535);
					elementOptions();
					}
				}

				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NotSetContext extends ParserRuleContext {
		public TerminalNode NOT() { return getToken(ANTLRv4Parser.NOT, 0); }
		public SetElementContext setElement() {
			return getRuleContext(SetElementContext.class,0);
		}
		public BlockSetContext blockSet() {
			return getRuleContext(BlockSetContext.class,0);
		}
		public NotSetContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_notSet; }
	}

	public final NotSetContext notSet() throws RecognitionException {
		NotSetContext _localctx = new NotSetContext(_ctx, getState());
		enterRule(_localctx, 108, RULE_notSet);
		try {
			setState(544);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,67,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(540);
				match(NOT);
				setState(541);
				setElement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(542);
				match(NOT);
				setState(543);
				blockSet();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BlockSetContext extends ParserRuleContext {
		public TerminalNode LPAREN() { return getToken(ANTLRv4Parser.LPAREN, 0); }
		public List<SetElementContext> setElement() {
			return getRuleContexts(SetElementContext.class);
		}
		public SetElementContext setElement(int i) {
			return getRuleContext(SetElementContext.class,i);
		}
		public TerminalNode RPAREN() { return getToken(ANTLRv4Parser.RPAREN, 0); }
		public List<TerminalNode> OR() { return getTokens(ANTLRv4Parser.OR); }
		public TerminalNode OR(int i) {
			return getToken(ANTLRv4Parser.OR, i);
		}
		public BlockSetContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_blockSet; }
	}

	public final BlockSetContext blockSet() throws RecognitionException {
		BlockSetContext _localctx = new BlockSetContext(_ctx, getState());
		enterRule(_localctx, 110, RULE_blockSet);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(546);
			match(LPAREN);
			setState(547);
			setElement();
			setState(552);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==OR) {
				{
				{
				setState(548);
				match(OR);
				setState(549);
				setElement();
				}
				}
				setState(554);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(555);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SetElementContext extends ParserRuleContext {
		public TerminalNode TOKEN_REF() { return getToken(ANTLRv4Parser.TOKEN_REF, 0); }
		public ElementOptionsContext elementOptions() {
			return getRuleContext(ElementOptionsContext.class,0);
		}
		public TerminalNode STRING_LITERAL() { return getToken(ANTLRv4Parser.STRING_LITERAL, 0); }
		public CharacterRangeContext characterRange() {
			return getRuleContext(CharacterRangeContext.class,0);
		}
		public TerminalNode LEXER_CHAR_SET() { return getToken(ANTLRv4Parser.LEXER_CHAR_SET, 0); }
		public SetElementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_setElement; }
	}

	public final SetElementContext setElement() throws RecognitionException {
		SetElementContext _localctx = new SetElementContext(_ctx, getState());
		enterRule(_localctx, 112, RULE_setElement);
		int _la;
		try {
			setState(567);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,71,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(557);
				match(TOKEN_REF);
				setState(559);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LT) {
					{
					setState(558);
					elementOptions();
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(561);
				match(STRING_LITERAL);
				setState(563);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LT) {
					{
					setState(562);
					elementOptions();
					}
				}

				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(565);
				characterRange();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(566);
				match(LEXER_CHAR_SET);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BlockContext extends ParserRuleContext {
		public TerminalNode LPAREN() { return getToken(ANTLRv4Parser.LPAREN, 0); }
		public AltListContext altList() {
			return getRuleContext(AltListContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(ANTLRv4Parser.RPAREN, 0); }
		public TerminalNode COLON() { return getToken(ANTLRv4Parser.COLON, 0); }
		public OptionsSpecContext optionsSpec() {
			return getRuleContext(OptionsSpecContext.class,0);
		}
		public List<RuleActionContext> ruleAction() {
			return getRuleContexts(RuleActionContext.class);
		}
		public RuleActionContext ruleAction(int i) {
			return getRuleContext(RuleActionContext.class,i);
		}
		public BlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_block; }
	}

	public final BlockContext block() throws RecognitionException {
		BlockContext _localctx = new BlockContext(_ctx, getState());
		enterRule(_localctx, 114, RULE_block);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(569);
			match(LPAREN);
			setState(580);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << OPTIONS) | (1L << COLON) | (1L << AT))) != 0)) {
				{
				setState(571);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==OPTIONS) {
					{
					setState(570);
					optionsSpec();
					}
				}

				setState(576);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==AT) {
					{
					{
					setState(573);
					ruleAction();
					}
					}
					setState(578);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(579);
				match(COLON);
				}
			}

			setState(582);
			altList();
			setState(583);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RulerefContext extends ParserRuleContext {
		public TerminalNode RULE_REF() { return getToken(ANTLRv4Parser.RULE_REF, 0); }
		public ArgActionBlockContext argActionBlock() {
			return getRuleContext(ArgActionBlockContext.class,0);
		}
		public ElementOptionsContext elementOptions() {
			return getRuleContext(ElementOptionsContext.class,0);
		}
		public RulerefContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ruleref; }
	}

	public final RulerefContext ruleref() throws RecognitionException {
		RulerefContext _localctx = new RulerefContext(_ctx, getState());
		enterRule(_localctx, 116, RULE_ruleref);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(585);
			match(RULE_REF);
			setState(587);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==BEGIN_ARGUMENT) {
				{
				setState(586);
				argActionBlock();
				}
			}

			setState(590);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LT) {
				{
				setState(589);
				elementOptions();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CharacterRangeContext extends ParserRuleContext {
		public List<TerminalNode> STRING_LITERAL() { return getTokens(ANTLRv4Parser.STRING_LITERAL); }
		public TerminalNode STRING_LITERAL(int i) {
			return getToken(ANTLRv4Parser.STRING_LITERAL, i);
		}
		public TerminalNode RANGE() { return getToken(ANTLRv4Parser.RANGE, 0); }
		public CharacterRangeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_characterRange; }
	}

	public final CharacterRangeContext characterRange() throws RecognitionException {
		CharacterRangeContext _localctx = new CharacterRangeContext(_ctx, getState());
		enterRule(_localctx, 118, RULE_characterRange);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(592);
			match(STRING_LITERAL);
			setState(593);
			match(RANGE);
			setState(594);
			match(STRING_LITERAL);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TerminalContext extends ParserRuleContext {
		public TerminalNode TOKEN_REF() { return getToken(ANTLRv4Parser.TOKEN_REF, 0); }
		public ElementOptionsContext elementOptions() {
			return getRuleContext(ElementOptionsContext.class,0);
		}
		public TerminalNode STRING_LITERAL() { return getToken(ANTLRv4Parser.STRING_LITERAL, 0); }
		public TerminalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_terminal; }
	}

	public final TerminalContext terminal() throws RecognitionException {
		TerminalContext _localctx = new TerminalContext(_ctx, getState());
		enterRule(_localctx, 120, RULE_terminal);
		int _la;
		try {
			setState(604);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case TOKEN_REF:
				enterOuterAlt(_localctx, 1);
				{
				setState(596);
				match(TOKEN_REF);
				setState(598);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LT) {
					{
					setState(597);
					elementOptions();
					}
				}

				}
				break;
			case STRING_LITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(600);
				match(STRING_LITERAL);
				setState(602);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LT) {
					{
					setState(601);
					elementOptions();
					}
				}

				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ElementOptionsContext extends ParserRuleContext {
		public TerminalNode LT() { return getToken(ANTLRv4Parser.LT, 0); }
		public List<ElementOptionContext> elementOption() {
			return getRuleContexts(ElementOptionContext.class);
		}
		public ElementOptionContext elementOption(int i) {
			return getRuleContext(ElementOptionContext.class,i);
		}
		public TerminalNode GT() { return getToken(ANTLRv4Parser.GT, 0); }
		public List<TerminalNode> COMMA() { return getTokens(ANTLRv4Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ANTLRv4Parser.COMMA, i);
		}
		public ElementOptionsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elementOptions; }
	}

	public final ElementOptionsContext elementOptions() throws RecognitionException {
		ElementOptionsContext _localctx = new ElementOptionsContext(_ctx, getState());
		enterRule(_localctx, 122, RULE_elementOptions);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(606);
			match(LT);
			setState(607);
			elementOption();
			setState(612);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(608);
				match(COMMA);
				setState(609);
				elementOption();
				}
				}
				setState(614);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(615);
			match(GT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ElementOptionContext extends ParserRuleContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public TerminalNode ASSIGN() { return getToken(ANTLRv4Parser.ASSIGN, 0); }
		public TerminalNode STRING_LITERAL() { return getToken(ANTLRv4Parser.STRING_LITERAL, 0); }
		public ElementOptionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elementOption; }
	}

	public final ElementOptionContext elementOption() throws RecognitionException {
		ElementOptionContext _localctx = new ElementOptionContext(_ctx, getState());
		enterRule(_localctx, 124, RULE_elementOption);
		try {
			setState(624);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,82,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(617);
				identifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(618);
				identifier();
				setState(619);
				match(ASSIGN);
				setState(622);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case TOKEN_REF:
				case RULE_REF:
					{
					setState(620);
					identifier();
					}
					break;
				case STRING_LITERAL:
					{
					setState(621);
					match(STRING_LITERAL);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdentifierContext extends ParserRuleContext {
		public TerminalNode RULE_REF() { return getToken(ANTLRv4Parser.RULE_REF, 0); }
		public TerminalNode TOKEN_REF() { return getToken(ANTLRv4Parser.TOKEN_REF, 0); }
		public IdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifier; }
	}

	public final IdentifierContext identifier() throws RecognitionException {
		IdentifierContext _localctx = new IdentifierContext(_ctx, getState());
		enterRule(_localctx, 126, RULE_identifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(626);
			_la = _input.LA(1);
			if ( !(_la==TOKEN_REF || _la==RULE_REF) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3@\u0277\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\4>\t>\4?\t?\4@\t@\4A\tA\3\2\3\2\7\2\u0085\n\2\f\2\16\2\u0088\13\2\3\2"+
		"\3\2\7\2\u008c\n\2\f\2\16\2\u008f\13\2\3\2\3\2\3\3\3\3\3\3\3\3\3\4\3\4"+
		"\3\4\3\4\3\4\5\4\u009c\n\4\3\5\3\5\3\5\3\5\3\5\5\5\u00a3\n\5\3\6\3\6\3"+
		"\6\3\6\3\6\7\6\u00aa\n\6\f\6\16\6\u00ad\13\6\3\6\3\6\3\7\3\7\3\7\3\7\3"+
		"\b\3\b\3\b\7\b\u00b8\n\b\f\b\16\b\u00bb\13\b\3\b\3\b\3\b\5\b\u00c0\n\b"+
		"\3\t\3\t\3\t\3\t\7\t\u00c6\n\t\f\t\16\t\u00c9\13\t\3\t\3\t\3\n\3\n\3\n"+
		"\3\n\3\n\5\n\u00d2\n\n\3\13\3\13\3\13\5\13\u00d7\n\13\3\13\3\13\3\f\3"+
		"\f\3\f\5\f\u00de\n\f\3\f\3\f\3\r\3\r\3\r\7\r\u00e5\n\r\f\r\16\r\u00e8"+
		"\13\r\3\r\5\r\u00eb\n\r\3\16\3\16\3\16\3\16\5\16\u00f1\n\16\3\16\3\16"+
		"\3\16\3\17\3\17\3\17\5\17\u00f9\n\17\3\20\3\20\7\20\u00fd\n\20\f\20\16"+
		"\20\u0100\13\20\3\20\3\20\3\21\3\21\7\21\u0106\n\21\f\21\16\21\u0109\13"+
		"\21\3\21\3\21\3\22\3\22\3\22\3\22\7\22\u0111\n\22\f\22\16\22\u0114\13"+
		"\22\3\23\7\23\u0117\n\23\f\23\16\23\u011a\13\23\3\24\3\24\5\24\u011e\n"+
		"\24\3\25\5\25\u0121\n\25\3\25\3\25\5\25\u0125\n\25\3\25\5\25\u0128\n\25"+
		"\3\25\5\25\u012b\n\25\3\25\5\25\u012e\n\25\3\25\7\25\u0131\n\25\f\25\16"+
		"\25\u0134\13\25\3\25\3\25\3\25\3\25\3\25\3\26\7\26\u013c\n\26\f\26\16"+
		"\26\u013f\13\26\3\26\5\26\u0142\n\26\3\27\3\27\3\27\3\27\3\30\3\30\3\30"+
		"\3\31\3\31\5\31\u014d\n\31\3\32\3\32\3\32\3\33\3\33\3\33\3\33\7\33\u0156"+
		"\n\33\f\33\16\33\u0159\13\33\3\34\3\34\3\34\3\35\3\35\3\35\3\35\3\36\6"+
		"\36\u0163\n\36\r\36\16\36\u0164\3\37\3\37\3 \3 \3!\3!\3!\7!\u016e\n!\f"+
		"!\16!\u0171\13!\3\"\3\"\3\"\5\"\u0176\n\"\3#\5#\u0179\n#\3#\3#\3#\3#\3"+
		"#\3$\3$\3%\3%\3%\7%\u0185\n%\f%\16%\u0188\13%\3&\3&\5&\u018c\n&\3&\5&"+
		"\u018f\n&\3\'\6\'\u0192\n\'\r\'\16\'\u0193\3\'\5\'\u0197\n\'\3(\3(\5("+
		"\u019b\n(\3(\3(\5(\u019f\n(\3(\3(\5(\u01a3\n(\3(\3(\5(\u01a7\n(\5(\u01a9"+
		"\n(\3)\3)\3)\3)\5)\u01af\n)\3*\3*\3*\3*\3+\3+\3+\3+\7+\u01b9\n+\f+\16"+
		"+\u01bc\13+\3,\3,\3,\3,\3,\3,\5,\u01c4\n,\3-\3-\5-\u01c8\n-\3.\3.\5.\u01cc"+
		"\n.\3/\3/\3/\7/\u01d1\n/\f/\16/\u01d4\13/\3\60\5\60\u01d7\n\60\3\60\6"+
		"\60\u01da\n\60\r\60\16\60\u01db\3\60\5\60\u01df\n\60\3\61\3\61\3\61\5"+
		"\61\u01e4\n\61\3\61\3\61\3\61\5\61\u01e9\n\61\3\61\3\61\3\61\5\61\u01ee"+
		"\n\61\5\61\u01f0\n\61\3\62\3\62\3\62\3\62\5\62\u01f6\n\62\3\63\3\63\5"+
		"\63\u01fa\n\63\3\64\3\64\3\65\3\65\5\65\u0200\n\65\3\65\3\65\5\65\u0204"+
		"\n\65\3\65\3\65\5\65\u0208\n\65\5\65\u020a\n\65\3\66\3\66\3\66\3\66\3"+
		"\66\3\66\5\66\u0212\n\66\5\66\u0214\n\66\3\67\3\67\3\67\3\67\3\67\5\67"+
		"\u021b\n\67\5\67\u021d\n\67\38\38\38\38\58\u0223\n8\39\39\39\39\79\u0229"+
		"\n9\f9\169\u022c\139\39\39\3:\3:\5:\u0232\n:\3:\3:\5:\u0236\n:\3:\3:\5"+
		":\u023a\n:\3;\3;\5;\u023e\n;\3;\7;\u0241\n;\f;\16;\u0244\13;\3;\5;\u0247"+
		"\n;\3;\3;\3;\3<\3<\5<\u024e\n<\3<\5<\u0251\n<\3=\3=\3=\3=\3>\3>\5>\u0259"+
		"\n>\3>\3>\5>\u025d\n>\5>\u025f\n>\3?\3?\3?\3?\7?\u0265\n?\f?\16?\u0268"+
		"\13?\3?\3?\3@\3@\3@\3@\3@\5@\u0271\n@\5@\u0273\n@\3A\3A\3A\2\2B\2\4\6"+
		"\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPRT"+
		"VXZ\\^`bdfhjlnprtvxz|~\u0080\2\5\4\2\22\22\26\30\4\2**--\3\2\3\4\2\u029c"+
		"\2\u0082\3\2\2\2\4\u0092\3\2\2\2\6\u009b\3\2\2\2\b\u00a2\3\2\2\2\n\u00a4"+
		"\3\2\2\2\f\u00b0\3\2\2\2\16\u00bf\3\2\2\2\20\u00c1\3\2\2\2\22\u00d1\3"+
		"\2\2\2\24\u00d3\3\2\2\2\26\u00da\3\2\2\2\30\u00e1\3\2\2\2\32\u00ec\3\2"+
		"\2\2\34\u00f8\3\2\2\2\36\u00fa\3\2\2\2 \u0103\3\2\2\2\"\u010c\3\2\2\2"+
		"$\u0118\3\2\2\2&\u011d\3\2\2\2(\u0120\3\2\2\2*\u013d\3\2\2\2,\u0143\3"+
		"\2\2\2.\u0147\3\2\2\2\60\u014c\3\2\2\2\62\u014e\3\2\2\2\64\u0151\3\2\2"+
		"\2\66\u015a\3\2\2\28\u015d\3\2\2\2:\u0162\3\2\2\2<\u0166\3\2\2\2>\u0168"+
		"\3\2\2\2@\u016a\3\2\2\2B\u0172\3\2\2\2D\u0178\3\2\2\2F\u017f\3\2\2\2H"+
		"\u0181\3\2\2\2J\u018e\3\2\2\2L\u0196\3\2\2\2N\u01a8\3\2\2\2P\u01aa\3\2"+
		"\2\2R\u01b0\3\2\2\2T\u01b4\3\2\2\2V\u01c3\3\2\2\2X\u01c7\3\2\2\2Z\u01cb"+
		"\3\2\2\2\\\u01cd\3\2\2\2^\u01de\3\2\2\2`\u01ef\3\2\2\2b\u01f1\3\2\2\2"+
		"d\u01f7\3\2\2\2f\u01fb\3\2\2\2h\u0209\3\2\2\2j\u0213\3\2\2\2l\u021c\3"+
		"\2\2\2n\u0222\3\2\2\2p\u0224\3\2\2\2r\u0239\3\2\2\2t\u023b\3\2\2\2v\u024b"+
		"\3\2\2\2x\u0252\3\2\2\2z\u025e\3\2\2\2|\u0260\3\2\2\2~\u0272\3\2\2\2\u0080"+
		"\u0274\3\2\2\2\u0082\u0086\5\4\3\2\u0083\u0085\5\b\5\2\u0084\u0083\3\2"+
		"\2\2\u0085\u0088\3\2\2\2\u0086\u0084\3\2\2\2\u0086\u0087\3\2\2\2\u0087"+
		"\u0089\3\2\2\2\u0088\u0086\3\2\2\2\u0089\u008d\5$\23\2\u008a\u008c\5\""+
		"\22\2\u008b\u008a\3\2\2\2\u008c\u008f\3\2\2\2\u008d\u008b\3\2\2\2\u008d"+
		"\u008e\3\2\2\2\u008e\u0090\3\2\2\2\u008f\u008d\3\2\2\2\u0090\u0091\7\2"+
		"\2\3\u0091\3\3\2\2\2\u0092\u0093\5\6\4\2\u0093\u0094\5\u0080A\2\u0094"+
		"\u0095\7\"\2\2\u0095\5\3\2\2\2\u0096\u0097\7\23\2\2\u0097\u009c\7\25\2"+
		"\2\u0098\u0099\7\24\2\2\u0099\u009c\7\25\2\2\u009a\u009c\7\25\2\2\u009b"+
		"\u0096\3\2\2\2\u009b\u0098\3\2\2\2\u009b\u009a\3\2\2\2\u009c\7\3\2\2\2"+
		"\u009d\u00a3\5\n\6\2\u009e\u00a3\5\20\t\2\u009f\u00a3\5\24\13\2\u00a0"+
		"\u00a3\5\26\f\2\u00a1\u00a3\5\32\16\2\u00a2\u009d\3\2\2\2\u00a2\u009e"+
		"\3\2\2\2\u00a2\u009f\3\2\2\2\u00a2\u00a0\3\2\2\2\u00a2\u00a1\3\2\2\2\u00a3"+
		"\t\3\2\2\2\u00a4\u00a5\7\16\2\2\u00a5\u00ab\7%\2\2\u00a6\u00a7\5\f\7\2"+
		"\u00a7\u00a8\7\"\2\2\u00a8\u00aa\3\2\2\2\u00a9\u00a6\3\2\2\2\u00aa\u00ad"+
		"\3\2\2\2\u00ab\u00a9\3\2\2\2\u00ab\u00ac\3\2\2\2\u00ac\u00ae\3\2\2\2\u00ad"+
		"\u00ab\3\2\2\2\u00ae\u00af\7&\2\2\u00af\13\3\2\2\2\u00b0\u00b1\5\u0080"+
		"A\2\u00b1\u00b2\7*\2\2\u00b2\u00b3\5\16\b\2\u00b3\r\3\2\2\2\u00b4\u00b9"+
		"\5\u0080A\2\u00b5\u00b6\7\62\2\2\u00b6\u00b8\5\u0080A\2\u00b7\u00b5\3"+
		"\2\2\2\u00b8\u00bb\3\2\2\2\u00b9\u00b7\3\2\2\2\u00b9\u00ba\3\2\2\2\u00ba"+
		"\u00c0\3\2\2\2\u00bb\u00b9\3\2\2\2\u00bc\u00c0\7\n\2\2\u00bd\u00c0\5\36"+
		"\20\2\u00be\u00c0\7\t\2\2\u00bf\u00b4\3\2\2\2\u00bf\u00bc\3\2\2\2\u00bf"+
		"\u00bd\3\2\2\2\u00bf\u00be\3\2\2\2\u00c0\17\3\2\2\2\u00c1\u00c2\7\21\2"+
		"\2\u00c2\u00c7\5\22\n\2\u00c3\u00c4\7!\2\2\u00c4\u00c6\5\22\n\2\u00c5"+
		"\u00c3\3\2\2\2\u00c6\u00c9\3\2\2\2\u00c7\u00c5\3\2\2\2\u00c7\u00c8\3\2"+
		"\2\2\u00c8\u00ca\3\2\2\2\u00c9\u00c7\3\2\2\2\u00ca\u00cb\7\"\2\2\u00cb"+
		"\21\3\2\2\2\u00cc\u00cd\5\u0080A\2\u00cd\u00ce\7*\2\2\u00ce\u00cf\5\u0080"+
		"A\2\u00cf\u00d2\3\2\2\2\u00d0\u00d2\5\u0080A\2\u00d1\u00cc\3\2\2\2\u00d1"+
		"\u00d0\3\2\2\2\u00d2\23\3\2\2\2\u00d3\u00d4\7\17\2\2\u00d4\u00d6\7%\2"+
		"\2\u00d5\u00d7\5\30\r\2\u00d6\u00d5\3\2\2\2\u00d6\u00d7\3\2\2\2\u00d7"+
		"\u00d8\3\2\2\2\u00d8\u00d9\7&\2\2\u00d9\25\3\2\2\2\u00da\u00db\7\20\2"+
		"\2\u00db\u00dd\7%\2\2\u00dc\u00de\5\30\r\2\u00dd\u00dc\3\2\2\2\u00dd\u00de"+
		"\3\2\2\2\u00de\u00df\3\2\2\2\u00df\u00e0\7&\2\2\u00e0\27\3\2\2\2\u00e1"+
		"\u00e6\5\u0080A\2\u00e2\u00e3\7!\2\2\u00e3\u00e5\5\u0080A\2\u00e4\u00e2"+
		"\3\2\2\2\u00e5\u00e8\3\2\2\2\u00e6\u00e4\3\2\2\2\u00e6\u00e7\3\2\2\2\u00e7"+
		"\u00ea\3\2\2\2\u00e8\u00e6\3\2\2\2\u00e9\u00eb\7!\2\2\u00ea\u00e9\3\2"+
		"\2\2\u00ea\u00eb\3\2\2\2\u00eb\31\3\2\2\2\u00ec\u00f0\7\63\2\2\u00ed\u00ee"+
		"\5\34\17\2\u00ee\u00ef\7 \2\2\u00ef\u00f1\3\2\2\2\u00f0\u00ed\3\2\2\2"+
		"\u00f0\u00f1\3\2\2\2\u00f1\u00f2\3\2\2\2\u00f2\u00f3\5\u0080A\2\u00f3"+
		"\u00f4\5\36\20\2\u00f4\33\3\2\2\2\u00f5\u00f9\5\u0080A\2\u00f6\u00f9\7"+
		"\23\2\2\u00f7\u00f9\7\24\2\2\u00f8\u00f5\3\2\2\2\u00f8\u00f6\3\2\2\2\u00f8"+
		"\u00f7\3\2\2\2\u00f9\35\3\2\2\2\u00fa\u00fe\7\r\2\2\u00fb\u00fd\7>\2\2"+
		"\u00fc\u00fb\3\2\2\2\u00fd\u0100\3\2\2\2\u00fe\u00fc\3\2\2\2\u00fe\u00ff"+
		"\3\2\2\2\u00ff\u0101\3\2\2\2\u0100\u00fe\3\2\2\2\u0101\u0102\7<\2\2\u0102"+
		"\37\3\2\2\2\u0103\u0107\7\f\2\2\u0104\u0106\7;\2\2\u0105\u0104\3\2\2\2"+
		"\u0106\u0109\3\2\2\2\u0107\u0105\3\2\2\2\u0107\u0108\3\2\2\2\u0108\u010a"+
		"\3\2\2\2\u0109\u0107\3\2\2\2\u010a\u010b\79\2\2\u010b!\3\2\2\2\u010c\u010d"+
		"\7\36\2\2\u010d\u010e\5\u0080A\2\u010e\u0112\7\"\2\2\u010f\u0111\5D#\2"+
		"\u0110\u010f\3\2\2\2\u0111\u0114\3\2\2\2\u0112\u0110\3\2\2\2\u0112\u0113"+
		"\3\2\2\2\u0113#\3\2\2\2\u0114\u0112\3\2\2\2\u0115\u0117\5&\24\2\u0116"+
		"\u0115\3\2\2\2\u0117\u011a\3\2\2\2\u0118\u0116\3\2\2\2\u0118\u0119\3\2"+
		"\2\2\u0119%\3\2\2\2\u011a\u0118\3\2\2\2\u011b\u011e\5(\25\2\u011c\u011e"+
		"\5D#\2\u011d\u011b\3\2\2\2\u011d\u011c\3\2\2\2\u011e\'\3\2\2\2\u011f\u0121"+
		"\5:\36\2\u0120\u011f\3\2\2\2\u0120\u0121\3\2\2\2\u0121\u0122\3\2\2\2\u0122"+
		"\u0124\7\4\2\2\u0123\u0125\5 \21\2\u0124\u0123\3\2\2\2\u0124\u0125\3\2"+
		"\2\2\u0125\u0127\3\2\2\2\u0126\u0128\5\62\32\2\u0127\u0126\3\2\2\2\u0127"+
		"\u0128\3\2\2\2\u0128\u012a\3\2\2\2\u0129\u012b\5\64\33\2\u012a\u0129\3"+
		"\2\2\2\u012a\u012b\3\2\2\2\u012b\u012d\3\2\2\2\u012c\u012e\5\66\34\2\u012d"+
		"\u012c\3\2\2\2\u012d\u012e\3\2\2\2\u012e\u0132\3\2\2\2\u012f\u0131\5\60"+
		"\31\2\u0130\u012f\3\2\2\2\u0131\u0134\3\2\2\2\u0132\u0130\3\2\2\2\u0132"+
		"\u0133\3\2\2\2\u0133\u0135\3\2\2\2\u0134\u0132\3\2\2\2\u0135\u0136\7\37"+
		"\2\2\u0136\u0137\5> \2\u0137\u0138\7\"\2\2\u0138\u0139\5*\26\2\u0139)"+
		"\3\2\2\2\u013a\u013c\5,\27\2\u013b\u013a\3\2\2\2\u013c\u013f\3\2\2\2\u013d"+
		"\u013b\3\2\2\2\u013d\u013e\3\2\2\2\u013e\u0141\3\2\2\2\u013f\u013d\3\2"+
		"\2\2\u0140\u0142\5.\30\2\u0141\u0140\3\2\2\2\u0141\u0142\3\2\2\2\u0142"+
		"+\3\2\2\2\u0143\u0144\7\34\2\2\u0144\u0145\5 \21\2\u0145\u0146\5\36\20"+
		"\2\u0146-\3\2\2\2\u0147\u0148\7\35\2\2\u0148\u0149\5\36\20\2\u0149/\3"+
		"\2\2\2\u014a\u014d\5\n\6\2\u014b\u014d\58\35\2\u014c\u014a\3\2\2\2\u014c"+
		"\u014b\3\2\2\2\u014d\61\3\2\2\2\u014e\u014f\7\31\2\2\u014f\u0150\5 \21"+
		"\2\u0150\63\3\2\2\2\u0151\u0152\7\33\2\2\u0152\u0157\5\u0080A\2\u0153"+
		"\u0154\7!\2\2\u0154\u0156\5\u0080A\2\u0155\u0153\3\2\2\2\u0156\u0159\3"+
		"\2\2\2\u0157\u0155\3\2\2\2\u0157\u0158\3\2\2\2\u0158\65\3\2\2\2\u0159"+
		"\u0157\3\2\2\2\u015a\u015b\7\32\2\2\u015b\u015c\5 \21\2\u015c\67\3\2\2"+
		"\2\u015d\u015e\7\63\2\2\u015e\u015f\5\u0080A\2\u015f\u0160\5\36\20\2\u0160"+
		"9\3\2\2\2\u0161\u0163\5<\37\2\u0162\u0161\3\2\2\2\u0163\u0164\3\2\2\2"+
		"\u0164\u0162\3\2\2\2\u0164\u0165\3\2\2\2\u0165;\3\2\2\2\u0166\u0167\t"+
		"\2\2\2\u0167=\3\2\2\2\u0168\u0169\5@!\2\u0169?\3\2\2\2\u016a\u016f\5B"+
		"\"\2\u016b\u016c\7/\2\2\u016c\u016e\5B\"\2\u016d\u016b\3\2\2\2\u016e\u0171"+
		"\3\2\2\2\u016f\u016d\3\2\2\2\u016f\u0170\3\2\2\2\u0170A\3\2\2\2\u0171"+
		"\u016f\3\2\2\2\u0172\u0175\5^\60\2\u0173\u0174\7\64\2\2\u0174\u0176\5"+
		"\u0080A\2\u0175\u0173\3\2\2\2\u0175\u0176\3\2\2\2\u0176C\3\2\2\2\u0177"+
		"\u0179\7\22\2\2\u0178\u0177\3\2\2\2\u0178\u0179\3\2\2\2\u0179\u017a\3"+
		"\2\2\2\u017a\u017b\7\3\2\2\u017b\u017c\7\37\2\2\u017c\u017d\5F$\2\u017d"+
		"\u017e\7\"\2\2\u017eE\3\2\2\2\u017f\u0180\5H%\2\u0180G\3\2\2\2\u0181\u0186"+
		"\5J&\2\u0182\u0183\7/\2\2\u0183\u0185\5J&\2\u0184\u0182\3\2\2\2\u0185"+
		"\u0188\3\2\2\2\u0186\u0184\3\2\2\2\u0186\u0187\3\2\2\2\u0187I\3\2\2\2"+
		"\u0188\u0186\3\2\2\2\u0189\u018b\5L\'\2\u018a\u018c\5T+\2\u018b\u018a"+
		"\3\2\2\2\u018b\u018c\3\2\2\2\u018c\u018f\3\2\2\2\u018d\u018f\3\2\2\2\u018e"+
		"\u0189\3\2\2\2\u018e\u018d\3\2\2\2\u018fK\3\2\2\2\u0190\u0192\5N(\2\u0191"+
		"\u0190\3\2\2\2\u0192\u0193\3\2\2\2\u0193\u0191\3\2\2\2\u0193\u0194\3\2"+
		"\2\2\u0194\u0197\3\2\2\2\u0195\u0197\3\2\2\2\u0196\u0191\3\2\2\2\u0196"+
		"\u0195\3\2\2\2\u0197M\3\2\2\2\u0198\u019a\5P)\2\u0199\u019b\5h\65\2\u019a"+
		"\u0199\3\2\2\2\u019a\u019b\3\2\2\2\u019b\u01a9\3\2\2\2\u019c\u019e\5j"+
		"\66\2\u019d\u019f\5h\65\2\u019e\u019d\3\2\2\2\u019e\u019f\3\2\2\2\u019f"+
		"\u01a9\3\2\2\2\u01a0\u01a2\5R*\2\u01a1\u01a3\5h\65\2\u01a2\u01a1\3\2\2"+
		"\2\u01a2\u01a3\3\2\2\2\u01a3\u01a9\3\2\2\2\u01a4\u01a6\5\36\20\2\u01a5"+
		"\u01a7\7+\2\2\u01a6\u01a5\3\2\2\2\u01a6\u01a7\3\2\2\2\u01a7\u01a9\3\2"+
		"\2\2\u01a8\u0198\3\2\2\2\u01a8\u019c\3\2\2\2\u01a8\u01a0\3\2\2\2\u01a8"+
		"\u01a4\3\2\2\2\u01a9O\3\2\2\2\u01aa\u01ab\5\u0080A\2\u01ab\u01ae\t\3\2"+
		"\2\u01ac\u01af\5j\66\2\u01ad\u01af\5R*\2\u01ae\u01ac\3\2\2\2\u01ae\u01ad"+
		"\3\2\2\2\u01afQ\3\2\2\2\u01b0\u01b1\7#\2\2\u01b1\u01b2\5H%\2\u01b2\u01b3"+
		"\7$\2\2\u01b3S\3\2\2\2\u01b4\u01b5\7\'\2\2\u01b5\u01ba\5V,\2\u01b6\u01b7"+
		"\7!\2\2\u01b7\u01b9\5V,\2\u01b8\u01b6\3\2\2\2\u01b9\u01bc\3\2\2\2\u01ba"+
		"\u01b8\3\2\2\2\u01ba\u01bb\3\2\2\2\u01bbU\3\2\2\2\u01bc\u01ba\3\2\2\2"+
		"\u01bd\u01be\5X-\2\u01be\u01bf\7#\2\2\u01bf\u01c0\5Z.\2\u01c0\u01c1\7"+
		"$\2\2\u01c1\u01c4\3\2\2\2\u01c2\u01c4\5X-\2\u01c3\u01bd\3\2\2\2\u01c3"+
		"\u01c2\3\2\2\2\u01c4W\3\2\2\2\u01c5\u01c8\5\u0080A\2\u01c6\u01c8\7\36"+
		"\2\2\u01c7\u01c5\3\2\2\2\u01c7\u01c6\3\2\2\2\u01c8Y\3\2\2\2\u01c9\u01cc"+
		"\5\u0080A\2\u01ca\u01cc\7\t\2\2\u01cb\u01c9\3\2\2\2\u01cb\u01ca\3\2\2"+
		"\2\u01cc[\3\2\2\2\u01cd\u01d2\5^\60\2\u01ce\u01cf\7/\2\2\u01cf\u01d1\5"+
		"^\60\2\u01d0\u01ce\3\2\2\2\u01d1\u01d4\3\2\2\2\u01d2\u01d0\3\2\2\2\u01d2"+
		"\u01d3\3\2\2\2\u01d3]\3\2\2\2\u01d4\u01d2\3\2\2\2\u01d5\u01d7\5|?\2\u01d6"+
		"\u01d5\3\2\2\2\u01d6\u01d7\3\2\2\2\u01d7\u01d9\3\2\2\2\u01d8\u01da\5`"+
		"\61\2\u01d9\u01d8\3\2\2\2\u01da\u01db\3\2\2\2\u01db\u01d9\3\2\2\2\u01db"+
		"\u01dc\3\2\2\2\u01dc\u01df\3\2\2\2\u01dd\u01df\3\2\2\2\u01de\u01d6\3\2"+
		"\2\2\u01de\u01dd\3\2\2\2\u01df_\3\2\2\2\u01e0\u01e3\5b\62\2\u01e1\u01e4"+
		"\5h\65\2\u01e2\u01e4\3\2\2\2\u01e3\u01e1\3\2\2\2\u01e3\u01e2\3\2\2\2\u01e4"+
		"\u01f0\3\2\2\2\u01e5\u01e8\5l\67\2\u01e6\u01e9\5h\65\2\u01e7\u01e9\3\2"+
		"\2\2\u01e8\u01e6\3\2\2\2\u01e8\u01e7\3\2\2\2\u01e9\u01f0\3\2\2\2\u01ea"+
		"\u01f0\5d\63\2\u01eb\u01ed\5\36\20\2\u01ec\u01ee\7+\2\2\u01ed\u01ec\3"+
		"\2\2\2\u01ed\u01ee\3\2\2\2\u01ee\u01f0\3\2\2\2\u01ef\u01e0\3\2\2\2\u01ef"+
		"\u01e5\3\2\2\2\u01ef\u01ea\3\2\2\2\u01ef\u01eb\3\2\2\2\u01f0a\3\2\2\2"+
		"\u01f1\u01f2\5\u0080A\2\u01f2\u01f5\t\3\2\2\u01f3\u01f6\5l\67\2\u01f4"+
		"\u01f6\5t;\2\u01f5\u01f3\3\2\2\2\u01f5\u01f4\3\2\2\2\u01f6c\3\2\2\2\u01f7"+
		"\u01f9\5t;\2\u01f8\u01fa\5f\64\2\u01f9\u01f8\3\2\2\2\u01f9\u01fa\3\2\2"+
		"\2\u01fae\3\2\2\2\u01fb\u01fc\5h\65\2\u01fcg\3\2\2\2\u01fd\u01ff\7+\2"+
		"\2\u01fe\u0200\7+\2\2\u01ff\u01fe\3\2\2\2\u01ff\u0200\3\2\2\2\u0200\u020a"+
		"\3\2\2\2\u0201\u0203\7,\2\2\u0202\u0204\7+\2\2\u0203\u0202\3\2\2\2\u0203"+
		"\u0204\3\2\2\2\u0204\u020a\3\2\2\2\u0205\u0207\7.\2\2\u0206\u0208\7+\2"+
		"\2\u0207\u0206\3\2\2\2\u0207\u0208\3\2\2\2\u0208\u020a\3\2\2\2\u0209\u01fd"+
		"\3\2\2\2\u0209\u0201\3\2\2\2\u0209\u0205\3\2\2\2\u020ai\3\2\2\2\u020b"+
		"\u0214\5x=\2\u020c\u0214\5z>\2\u020d\u0214\5n8\2\u020e\u0214\7\5\2\2\u020f"+
		"\u0211\7\62\2\2\u0210\u0212\5|?\2\u0211\u0210\3\2\2\2\u0211\u0212\3\2"+
		"\2\2\u0212\u0214\3\2\2\2\u0213\u020b\3\2\2\2\u0213\u020c\3\2\2\2\u0213"+
		"\u020d\3\2\2\2\u0213\u020e\3\2\2\2\u0213\u020f\3\2\2\2\u0214k\3\2\2\2"+
		"\u0215\u021d\5z>\2\u0216\u021d\5v<\2\u0217\u021d\5n8\2\u0218\u021a\7\62"+
		"\2\2\u0219\u021b\5|?\2\u021a\u0219\3\2\2\2\u021a\u021b\3\2\2\2\u021b\u021d"+
		"\3\2\2\2\u021c\u0215\3\2\2\2\u021c\u0216\3\2\2\2\u021c\u0217\3\2\2\2\u021c"+
		"\u0218\3\2\2\2\u021dm\3\2\2\2\u021e\u021f\7\65\2\2\u021f\u0223\5r:\2\u0220"+
		"\u0221\7\65\2\2\u0221\u0223\5p9\2\u0222\u021e\3\2\2\2\u0222\u0220\3\2"+
		"\2\2\u0223o\3\2\2\2\u0224\u0225\7#\2\2\u0225\u022a\5r:\2\u0226\u0227\7"+
		"/\2\2\u0227\u0229\5r:\2\u0228\u0226\3\2\2\2\u0229\u022c\3\2\2\2\u022a"+
		"\u0228\3\2\2\2\u022a\u022b\3\2\2\2\u022b\u022d\3\2\2\2\u022c\u022a\3\2"+
		"\2\2\u022d\u022e\7$\2\2\u022eq\3\2\2\2\u022f\u0231\7\3\2\2\u0230\u0232"+
		"\5|?\2\u0231\u0230\3\2\2\2\u0231\u0232\3\2\2\2\u0232\u023a\3\2\2\2\u0233"+
		"\u0235\7\n\2\2\u0234\u0236\5|?\2\u0235\u0234\3\2\2\2\u0235\u0236\3\2\2"+
		"\2\u0236\u023a\3\2\2\2\u0237\u023a\5x=\2\u0238\u023a\7\5\2\2\u0239\u022f"+
		"\3\2\2\2\u0239\u0233\3\2\2\2\u0239\u0237\3\2\2\2\u0239\u0238\3\2\2\2\u023a"+
		"s\3\2\2\2\u023b\u0246\7#\2\2\u023c\u023e\5\n\6\2\u023d\u023c\3\2\2\2\u023d"+
		"\u023e\3\2\2\2\u023e\u0242\3\2\2\2\u023f\u0241\58\35\2\u0240\u023f\3\2"+
		"\2\2\u0241\u0244\3\2\2\2\u0242\u0240\3\2\2\2\u0242\u0243\3\2\2\2\u0243"+
		"\u0245\3\2\2\2\u0244\u0242\3\2\2\2\u0245\u0247\7\37\2\2\u0246\u023d\3"+
		"\2\2\2\u0246\u0247\3\2\2\2\u0247\u0248\3\2\2\2\u0248\u0249\5\\/\2\u0249"+
		"\u024a\7$\2\2\u024au\3\2\2\2\u024b\u024d\7\4\2\2\u024c\u024e\5 \21\2\u024d"+
		"\u024c\3\2\2\2\u024d\u024e\3\2\2\2\u024e\u0250\3\2\2\2\u024f\u0251\5|"+
		"?\2\u0250\u024f\3\2\2\2\u0250\u0251\3\2\2\2\u0251w\3\2\2\2\u0252\u0253"+
		"\7\n\2\2\u0253\u0254\7\61\2\2\u0254\u0255\7\n\2\2\u0255y\3\2\2\2\u0256"+
		"\u0258\7\3\2\2\u0257\u0259\5|?\2\u0258\u0257\3\2\2\2\u0258\u0259\3\2\2"+
		"\2\u0259\u025f\3\2\2\2\u025a\u025c\7\n\2\2\u025b\u025d\5|?\2\u025c\u025b"+
		"\3\2\2\2\u025c\u025d\3\2\2\2\u025d\u025f\3\2\2\2\u025e\u0256\3\2\2\2\u025e"+
		"\u025a\3\2\2\2\u025f{\3\2\2\2\u0260\u0261\7(\2\2\u0261\u0266\5~@\2\u0262"+
		"\u0263\7!\2\2\u0263\u0265\5~@\2\u0264\u0262\3\2\2\2\u0265\u0268\3\2\2"+
		"\2\u0266\u0264\3\2\2\2\u0266\u0267\3\2\2\2\u0267\u0269\3\2\2\2\u0268\u0266"+
		"\3\2\2\2\u0269\u026a\7)\2\2\u026a}\3\2\2\2\u026b\u0273\5\u0080A\2\u026c"+
		"\u026d\5\u0080A\2\u026d\u0270\7*\2\2\u026e\u0271\5\u0080A\2\u026f\u0271"+
		"\7\n\2\2\u0270\u026e\3\2\2\2\u0270\u026f\3\2\2\2\u0271\u0273\3\2\2\2\u0272"+
		"\u026b\3\2\2\2\u0272\u026c\3\2\2\2\u0273\177\3\2\2\2\u0274\u0275\t\4\2"+
		"\2\u0275\u0081\3\2\2\2U\u0086\u008d\u009b\u00a2\u00ab\u00b9\u00bf\u00c7"+
		"\u00d1\u00d6\u00dd\u00e6\u00ea\u00f0\u00f8\u00fe\u0107\u0112\u0118\u011d"+
		"\u0120\u0124\u0127\u012a\u012d\u0132\u013d\u0141\u014c\u0157\u0164\u016f"+
		"\u0175\u0178\u0186\u018b\u018e\u0193\u0196\u019a\u019e\u01a2\u01a6\u01a8"+
		"\u01ae\u01ba\u01c3\u01c7\u01cb\u01d2\u01d6\u01db\u01de\u01e3\u01e8\u01ed"+
		"\u01ef\u01f5\u01f9\u01ff\u0203\u0207\u0209\u0211\u0213\u021a\u021c\u0222"+
		"\u022a\u0231\u0235\u0239\u023d\u0242\u0246\u024d\u0250\u0258\u025c\u025e"+
		"\u0266\u0270\u0272";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}