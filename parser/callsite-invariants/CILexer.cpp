
// Generated from CI.g4 by ANTLR 4.9.2


#include "CILexer.h"


using namespace antlr4;


CILexer::CILexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CILexer::~CILexer() {
  delete _interpreter;
}

std::string CILexer::getGrammarFileName() const {
  return "CI.g4";
}

const std::vector<std::string>& CILexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& CILexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& CILexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& CILexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& CILexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> CILexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& CILexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> CILexer::_decisionToDFA;
atn::PredictionContextCache CILexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CILexer::_atn;
std::vector<uint16_t> CILexer::_serializedATN;

std::vector<std::string> CILexer::_ruleNames = {
  "T__0", "T__1", "T__2", "NIL", "STRING", "CONST", "GLOBAL", "NUMS", "ALPHAS", 
  "NEWLINE", "ALL"
};

std::vector<std::string> CILexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> CILexer::_modeNames = {
  "DEFAULT_MODE"
};

std::vector<std::string> CILexer::_literalNames = {
  "", "' '", "'-'", "'.'", "'N'", "'S'", "'C'", "'G'"
};

std::vector<std::string> CILexer::_symbolicNames = {
  "", "", "", "", "NIL", "STRING", "CONST", "GLOBAL", "NUMS", "ALPHAS", 
  "NEWLINE", "ALL"
};

dfa::Vocabulary CILexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CILexer::_tokenNames;

CILexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
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

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x2, 0xd, 0x3b, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 
       0x4, 0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 
       0x7, 0x9, 0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 
       0x9, 0xa, 0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x3, 0x2, 0x3, 
       0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x9, 0x6, 0x9, 0x29, 0xa, 0x9, 0xd, 0x9, 0xe, 0x9, 0x2a, 0x3, 0xa, 
       0x6, 0xa, 0x2e, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x2f, 0x3, 0xb, 0x6, 
       0xb, 0x33, 0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 0x34, 0x3, 0xc, 0x6, 0xc, 
       0x38, 0xa, 0xc, 0xd, 0xc, 0xe, 0xc, 0x39, 0x2, 0x2, 0xd, 0x3, 0x3, 
       0x5, 0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 0x7, 0xd, 0x8, 0xf, 0x9, 0x11, 
       0xa, 0x13, 0xb, 0x15, 0xc, 0x17, 0xd, 0x3, 0x2, 0x6, 0x3, 0x2, 0x32, 
       0x3b, 0x4, 0x2, 0x43, 0x5c, 0x63, 0x7c, 0x4, 0x2, 0xc, 0xc, 0xf, 
       0xf, 0x7, 0x2, 0x2f, 0x2f, 0x3e, 0x3e, 0x40, 0x40, 0x43, 0x5c, 0x63, 
       0x7c, 0x2, 0x3e, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 
       0x2, 0x2, 0x2, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 0x3, 0x2, 0x2, 
       0x2, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 0x2, 0xd, 0x3, 0x2, 0x2, 0x2, 
       0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 0x2, 
       0x13, 0x3, 0x2, 0x2, 0x2, 0x2, 0x15, 0x3, 0x2, 0x2, 0x2, 0x2, 0x17, 
       0x3, 0x2, 0x2, 0x2, 0x3, 0x19, 0x3, 0x2, 0x2, 0x2, 0x5, 0x1b, 0x3, 
       0x2, 0x2, 0x2, 0x7, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x9, 0x1f, 0x3, 0x2, 
       0x2, 0x2, 0xb, 0x21, 0x3, 0x2, 0x2, 0x2, 0xd, 0x23, 0x3, 0x2, 0x2, 
       0x2, 0xf, 0x25, 0x3, 0x2, 0x2, 0x2, 0x11, 0x28, 0x3, 0x2, 0x2, 0x2, 
       0x13, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x15, 0x32, 0x3, 0x2, 0x2, 0x2, 0x17, 
       0x37, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1a, 0x7, 0x22, 0x2, 0x2, 0x1a, 
       0x4, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 0x7, 0x2f, 0x2, 0x2, 0x1c, 0x6, 
       0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x7, 0x30, 0x2, 0x2, 0x1e, 0x8, 0x3, 
       0x2, 0x2, 0x2, 0x1f, 0x20, 0x7, 0x50, 0x2, 0x2, 0x20, 0xa, 0x3, 0x2, 
       0x2, 0x2, 0x21, 0x22, 0x7, 0x55, 0x2, 0x2, 0x22, 0xc, 0x3, 0x2, 0x2, 
       0x2, 0x23, 0x24, 0x7, 0x45, 0x2, 0x2, 0x24, 0xe, 0x3, 0x2, 0x2, 0x2, 
       0x25, 0x26, 0x7, 0x49, 0x2, 0x2, 0x26, 0x10, 0x3, 0x2, 0x2, 0x2, 
       0x27, 0x29, 0x9, 0x2, 0x2, 0x2, 0x28, 0x27, 0x3, 0x2, 0x2, 0x2, 0x29, 
       0x2a, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 
       0x3, 0x2, 0x2, 0x2, 0x2b, 0x12, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2e, 0x9, 
       0x3, 0x2, 0x2, 0x2d, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x3, 0x2, 
       0x2, 0x2, 0x2f, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x3, 0x2, 0x2, 
       0x2, 0x30, 0x14, 0x3, 0x2, 0x2, 0x2, 0x31, 0x33, 0x9, 0x4, 0x2, 0x2, 
       0x32, 0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x3, 0x2, 0x2, 0x2, 0x34, 
       0x32, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x3, 0x2, 0x2, 0x2, 0x35, 0x16, 
       0x3, 0x2, 0x2, 0x2, 0x36, 0x38, 0x9, 0x5, 0x2, 0x2, 0x37, 0x36, 0x3, 
       0x2, 0x2, 0x2, 0x38, 0x39, 0x3, 0x2, 0x2, 0x2, 0x39, 0x37, 0x3, 0x2, 
       0x2, 0x2, 0x39, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x18, 0x3, 0x2, 0x2, 
       0x2, 0x7, 0x2, 0x2a, 0x2f, 0x34, 0x39, 0x2, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CILexer::Initializer CILexer::_init;
