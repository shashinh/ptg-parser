// Generated from /home/shashin/projects/ptg-parser/parser/loop-invariants/PTG.g4 by ANTLR 4.8
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class PTGParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.8", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, NIL=9, 
		STRING=10, CONST=11, GLOBAL=12, NUMS=13, ALPHAS=14, NEWLINE=15, ALL=16;
	public static final int
		RULE_ptg = 0, RULE_entry = 1, RULE_vars = 2, RULE_varentry = 3, RULE_fields = 4, 
		RULE_fieldentry = 5, RULE_field = 6, RULE_ciBciEntry = 7, RULE_ciEntries = 8, 
		RULE_callerIndex = 9, RULE_bciKey = 10, RULE_bciVal = 11, RULE_fieldKey = 12;
	private static String[] makeRuleNames() {
		return new String[] {
			"ptg", "entry", "vars", "varentry", "fields", "fieldentry", "field", 
			"ciBciEntry", "ciEntries", "callerIndex", "bciKey", "bciVal", "fieldKey"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "';'", "':'", "'('", "')'", "','", "' '", "'-'", "'.'", "'N'", 
			"'S'", "'C'", "'G'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, "NIL", "STRING", 
			"CONST", "GLOBAL", "NUMS", "ALPHAS", "NEWLINE", "ALL"
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
	public String getGrammarFileName() { return "PTG.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public PTGParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class PtgContext extends ParserRuleContext {
		public TerminalNode NEWLINE() { return getToken(PTGParser.NEWLINE, 0); }
		public TerminalNode EOF() { return getToken(PTGParser.EOF, 0); }
		public List<EntryContext> entry() {
			return getRuleContexts(EntryContext.class);
		}
		public EntryContext entry(int i) {
			return getRuleContext(EntryContext.class,i);
		}
		public PtgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ptg; }
	}

	public final PtgContext ptg() throws RecognitionException {
		PtgContext _localctx = new PtgContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_ptg);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(34);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMS) {
				{
				setState(26);
				entry();
				setState(31);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__0) {
					{
					{
					setState(27);
					match(T__0);
					setState(28);
					entry();
					}
					}
					setState(33);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(36);
			_la = _input.LA(1);
			if ( !(_la==EOF || _la==NEWLINE) ) {
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

	public static class EntryContext extends ParserRuleContext {
		public BciKeyContext bciKey() {
			return getRuleContext(BciKeyContext.class,0);
		}
		public VarsContext vars() {
			return getRuleContext(VarsContext.class,0);
		}
		public FieldsContext fields() {
			return getRuleContext(FieldsContext.class,0);
		}
		public EntryContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_entry; }
	}

	public final EntryContext entry() throws RecognitionException {
		EntryContext _localctx = new EntryContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_entry);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(38);
			bciKey();
			setState(39);
			match(T__1);
			setState(40);
			match(T__2);
			setState(41);
			vars();
			setState(42);
			match(T__3);
			setState(47);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__2) {
				{
				setState(43);
				match(T__2);
				setState(44);
				fields();
				setState(45);
				match(T__3);
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

	public static class VarsContext extends ParserRuleContext {
		public List<VarentryContext> varentry() {
			return getRuleContexts(VarentryContext.class);
		}
		public VarentryContext varentry(int i) {
			return getRuleContext(VarentryContext.class,i);
		}
		public VarsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_vars; }
	}

	public final VarsContext vars() throws RecognitionException {
		VarsContext _localctx = new VarsContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_vars);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(57);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMS) {
				{
				setState(49);
				varentry();
				setState(54);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__4) {
					{
					{
					setState(50);
					match(T__4);
					setState(51);
					varentry();
					}
					}
					setState(56);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
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

	public static class VarentryContext extends ParserRuleContext {
		public BciKeyContext bciKey() {
			return getRuleContext(BciKeyContext.class,0);
		}
		public List<CiBciEntryContext> ciBciEntry() {
			return getRuleContexts(CiBciEntryContext.class);
		}
		public CiBciEntryContext ciBciEntry(int i) {
			return getRuleContext(CiBciEntryContext.class,i);
		}
		public VarentryContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_varentry; }
	}

	public final VarentryContext varentry() throws RecognitionException {
		VarentryContext _localctx = new VarentryContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_varentry);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(59);
			bciKey();
			setState(60);
			match(T__1);
			{
			{
			setState(61);
			ciBciEntry();
			}
			setState(66);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__5) {
				{
				{
				setState(62);
				match(T__5);
				{
				setState(63);
				ciBciEntry();
				}
				}
				}
				setState(68);
				_errHandler.sync(this);
				_la = _input.LA(1);
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

	public static class FieldsContext extends ParserRuleContext {
		public List<FieldentryContext> fieldentry() {
			return getRuleContexts(FieldentryContext.class);
		}
		public FieldentryContext fieldentry(int i) {
			return getRuleContext(FieldentryContext.class,i);
		}
		public FieldsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fields; }
	}

	public final FieldsContext fields() throws RecognitionException {
		FieldsContext _localctx = new FieldsContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_fields);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(77);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMS) {
				{
				setState(69);
				fieldentry();
				setState(74);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__4) {
					{
					{
					setState(70);
					match(T__4);
					setState(71);
					fieldentry();
					}
					}
					setState(76);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
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

	public static class FieldentryContext extends ParserRuleContext {
		public CallerIndexContext callerIndex() {
			return getRuleContext(CallerIndexContext.class,0);
		}
		public BciKeyContext bciKey() {
			return getRuleContext(BciKeyContext.class,0);
		}
		public List<FieldContext> field() {
			return getRuleContexts(FieldContext.class);
		}
		public FieldContext field(int i) {
			return getRuleContext(FieldContext.class,i);
		}
		public FieldentryContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fieldentry; }
	}

	public final FieldentryContext fieldentry() throws RecognitionException {
		FieldentryContext _localctx = new FieldentryContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_fieldentry);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(79);
			callerIndex();
			setState(80);
			match(T__6);
			setState(81);
			bciKey();
			setState(82);
			match(T__2);
			{
			setState(83);
			field();
			}
			{
			setState(88);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__4) {
				{
				{
				setState(84);
				match(T__4);
				{
				setState(85);
				field();
				}
				}
				}
				setState(90);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
			setState(91);
			match(T__3);
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

	public static class FieldContext extends ParserRuleContext {
		public FieldKeyContext fieldKey() {
			return getRuleContext(FieldKeyContext.class,0);
		}
		public List<CiBciEntryContext> ciBciEntry() {
			return getRuleContexts(CiBciEntryContext.class);
		}
		public CiBciEntryContext ciBciEntry(int i) {
			return getRuleContext(CiBciEntryContext.class,i);
		}
		public FieldContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_field; }
	}

	public final FieldContext field() throws RecognitionException {
		FieldContext _localctx = new FieldContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_field);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(93);
			fieldKey();
			setState(94);
			match(T__1);
			{
			setState(95);
			ciBciEntry();
			}
			setState(100);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__5) {
				{
				{
				setState(96);
				match(T__5);
				{
				setState(97);
				ciBciEntry();
				}
				}
				}
				setState(102);
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

	public static class CiBciEntryContext extends ParserRuleContext {
		public CiEntriesContext ciEntries() {
			return getRuleContext(CiEntriesContext.class,0);
		}
		public TerminalNode STRING() { return getToken(PTGParser.STRING, 0); }
		public TerminalNode CONST() { return getToken(PTGParser.CONST, 0); }
		public TerminalNode GLOBAL() { return getToken(PTGParser.GLOBAL, 0); }
		public TerminalNode NIL() { return getToken(PTGParser.NIL, 0); }
		public CiBciEntryContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ciBciEntry; }
	}

	public final CiBciEntryContext ciBciEntry() throws RecognitionException {
		CiBciEntryContext _localctx = new CiBciEntryContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_ciBciEntry);
		try {
			setState(108);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NUMS:
				enterOuterAlt(_localctx, 1);
				{
				setState(103);
				ciEntries();
				}
				break;
			case STRING:
				enterOuterAlt(_localctx, 2);
				{
				setState(104);
				match(STRING);
				}
				break;
			case CONST:
				enterOuterAlt(_localctx, 3);
				{
				setState(105);
				match(CONST);
				}
				break;
			case GLOBAL:
				enterOuterAlt(_localctx, 4);
				{
				setState(106);
				match(GLOBAL);
				}
				break;
			case NIL:
				enterOuterAlt(_localctx, 5);
				{
				setState(107);
				match(NIL);
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

	public static class CiEntriesContext extends ParserRuleContext {
		public CallerIndexContext callerIndex() {
			return getRuleContext(CallerIndexContext.class,0);
		}
		public List<BciValContext> bciVal() {
			return getRuleContexts(BciValContext.class);
		}
		public BciValContext bciVal(int i) {
			return getRuleContext(BciValContext.class,i);
		}
		public CiEntriesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ciEntries; }
	}

	public final CiEntriesContext ciEntries() throws RecognitionException {
		CiEntriesContext _localctx = new CiEntriesContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_ciEntries);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(110);
			callerIndex();
			setState(111);
			match(T__6);
			{
			{
			setState(112);
			bciVal();
			}
			setState(117);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__7) {
				{
				{
				setState(113);
				match(T__7);
				{
				setState(114);
				bciVal();
				}
				}
				}
				setState(119);
				_errHandler.sync(this);
				_la = _input.LA(1);
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

	public static class CallerIndexContext extends ParserRuleContext {
		public TerminalNode NUMS() { return getToken(PTGParser.NUMS, 0); }
		public CallerIndexContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_callerIndex; }
	}

	public final CallerIndexContext callerIndex() throws RecognitionException {
		CallerIndexContext _localctx = new CallerIndexContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_callerIndex);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(120);
			match(NUMS);
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

	public static class BciKeyContext extends ParserRuleContext {
		public TerminalNode NUMS() { return getToken(PTGParser.NUMS, 0); }
		public BciKeyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bciKey; }
	}

	public final BciKeyContext bciKey() throws RecognitionException {
		BciKeyContext _localctx = new BciKeyContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_bciKey);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(122);
			match(NUMS);
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

	public static class BciValContext extends ParserRuleContext {
		public TerminalNode NUMS() { return getToken(PTGParser.NUMS, 0); }
		public TerminalNode NIL() { return getToken(PTGParser.NIL, 0); }
		public BciValContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bciVal; }
	}

	public final BciValContext bciVal() throws RecognitionException {
		BciValContext _localctx = new BciValContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_bciVal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(124);
			_la = _input.LA(1);
			if ( !(_la==NIL || _la==NUMS) ) {
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

	public static class FieldKeyContext extends ParserRuleContext {
		public TerminalNode ALPHAS() { return getToken(PTGParser.ALPHAS, 0); }
		public FieldKeyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fieldKey; }
	}

	public final FieldKeyContext fieldKey() throws RecognitionException {
		FieldKeyContext _localctx = new FieldKeyContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_fieldKey);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(126);
			match(ALPHAS);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\22\u0083\4\2\t\2"+
		"\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\3\2\3\2\3\2\7\2 \n\2\f\2\16\2#\13\2\5"+
		"\2%\n\2\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\5\3\62\n\3\3\4\3\4"+
		"\3\4\7\4\67\n\4\f\4\16\4:\13\4\5\4<\n\4\3\5\3\5\3\5\3\5\3\5\7\5C\n\5\f"+
		"\5\16\5F\13\5\3\6\3\6\3\6\7\6K\n\6\f\6\16\6N\13\6\5\6P\n\6\3\7\3\7\3\7"+
		"\3\7\3\7\3\7\3\7\7\7Y\n\7\f\7\16\7\\\13\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b"+
		"\7\be\n\b\f\b\16\bh\13\b\3\t\3\t\3\t\3\t\3\t\5\to\n\t\3\n\3\n\3\n\3\n"+
		"\3\n\7\nv\n\n\f\n\16\ny\13\n\3\13\3\13\3\f\3\f\3\r\3\r\3\16\3\16\3\16"+
		"\2\2\17\2\4\6\b\n\f\16\20\22\24\26\30\32\2\4\3\3\21\21\4\2\13\13\17\17"+
		"\2\u0084\2$\3\2\2\2\4(\3\2\2\2\6;\3\2\2\2\b=\3\2\2\2\nO\3\2\2\2\fQ\3\2"+
		"\2\2\16_\3\2\2\2\20n\3\2\2\2\22p\3\2\2\2\24z\3\2\2\2\26|\3\2\2\2\30~\3"+
		"\2\2\2\32\u0080\3\2\2\2\34!\5\4\3\2\35\36\7\3\2\2\36 \5\4\3\2\37\35\3"+
		"\2\2\2 #\3\2\2\2!\37\3\2\2\2!\"\3\2\2\2\"%\3\2\2\2#!\3\2\2\2$\34\3\2\2"+
		"\2$%\3\2\2\2%&\3\2\2\2&\'\t\2\2\2\'\3\3\2\2\2()\5\26\f\2)*\7\4\2\2*+\7"+
		"\5\2\2+,\5\6\4\2,\61\7\6\2\2-.\7\5\2\2./\5\n\6\2/\60\7\6\2\2\60\62\3\2"+
		"\2\2\61-\3\2\2\2\61\62\3\2\2\2\62\5\3\2\2\2\638\5\b\5\2\64\65\7\7\2\2"+
		"\65\67\5\b\5\2\66\64\3\2\2\2\67:\3\2\2\28\66\3\2\2\289\3\2\2\29<\3\2\2"+
		"\2:8\3\2\2\2;\63\3\2\2\2;<\3\2\2\2<\7\3\2\2\2=>\5\26\f\2>?\7\4\2\2?D\5"+
		"\20\t\2@A\7\b\2\2AC\5\20\t\2B@\3\2\2\2CF\3\2\2\2DB\3\2\2\2DE\3\2\2\2E"+
		"\t\3\2\2\2FD\3\2\2\2GL\5\f\7\2HI\7\7\2\2IK\5\f\7\2JH\3\2\2\2KN\3\2\2\2"+
		"LJ\3\2\2\2LM\3\2\2\2MP\3\2\2\2NL\3\2\2\2OG\3\2\2\2OP\3\2\2\2P\13\3\2\2"+
		"\2QR\5\24\13\2RS\7\t\2\2ST\5\26\f\2TU\7\5\2\2UZ\5\16\b\2VW\7\7\2\2WY\5"+
		"\16\b\2XV\3\2\2\2Y\\\3\2\2\2ZX\3\2\2\2Z[\3\2\2\2[]\3\2\2\2\\Z\3\2\2\2"+
		"]^\7\6\2\2^\r\3\2\2\2_`\5\32\16\2`a\7\4\2\2af\5\20\t\2bc\7\b\2\2ce\5\20"+
		"\t\2db\3\2\2\2eh\3\2\2\2fd\3\2\2\2fg\3\2\2\2g\17\3\2\2\2hf\3\2\2\2io\5"+
		"\22\n\2jo\7\f\2\2ko\7\r\2\2lo\7\16\2\2mo\7\13\2\2ni\3\2\2\2nj\3\2\2\2"+
		"nk\3\2\2\2nl\3\2\2\2nm\3\2\2\2o\21\3\2\2\2pq\5\24\13\2qr\7\t\2\2rw\5\30"+
		"\r\2st\7\n\2\2tv\5\30\r\2us\3\2\2\2vy\3\2\2\2wu\3\2\2\2wx\3\2\2\2x\23"+
		"\3\2\2\2yw\3\2\2\2z{\7\17\2\2{\25\3\2\2\2|}\7\17\2\2}\27\3\2\2\2~\177"+
		"\t\3\2\2\177\31\3\2\2\2\u0080\u0081\7\20\2\2\u0081\33\3\2\2\2\16!$\61"+
		"8;DLOZfnw";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}