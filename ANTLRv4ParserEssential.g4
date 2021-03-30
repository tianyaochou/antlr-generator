grammar ANTLRv4ParserEssential;

parserRuleSpec
   : RULE_REF COLON altList SEMI
   ;

lexerRuleSpec
   : TOKEN_REF COLON lexerAltList SEMI
   ;

altList
   : alternative (OR alternative)*
   ;

lexerAltList
   : lexerElements (OR lexerElements)*
   ;

alternative
   : element+
   |
   // explicitly allow empty alts
   ;

lexerElements
   : lexerElement+
   |
   ;

element
   : atom ebnfSuffix?
   | altList ebnfSuffix?
   ;

lexerElement
   : lexerAtom ebnfSuffix?
   | lexerAltList ebnfSuffix?
   ;

atom
   : terminal
   | RULE_REF
   | notSet
   | DOT elementOptions?
   ;

lexerAtom
   : characterRange
   | terminal
   | notSet
   | LEXER_CHAR_SET
   | DOT elementOptions?
   ;

setElement
   : TOKEN_REF elementOptions?        // parse rule
   | STRING_LITERAL elementOptions?   // parse rule
   | characterRange                   // lex rule
   | LEXER_CHAR_SET                   // lex rule
   ;

terminal
   : TOKEN_REF
   | STRING_LITERAL
   ;

notSet
   : NOT setElement
   | NOT LPAREN setElement (OR setElement)* RPAREN
   ;

characterRange
   : STRING_LITERAL RANGE STRING_LITERAL
   ;

ebnfSuffix
   : QUESTION QUESTION?
   | STAR QUESTION?
   | PLUS QUESTION?
   ;