
// Generated from PTG.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "PTGVisitor.h"


/**
 * This class provides an empty implementation of PTGVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  PTGBaseVisitor : public PTGVisitor {
public:

  virtual antlrcpp::Any visitPtg(PTGParser::PtgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEntry(PTGParser::EntryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVars(PTGParser::VarsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarentry(PTGParser::VarentryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFields(PTGParser::FieldsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldentry(PTGParser::FieldentryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitField(PTGParser::FieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCiBciEntry(PTGParser::CiBciEntryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCiEntries(PTGParser::CiEntriesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCallerIndex(PTGParser::CallerIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBciKey(PTGParser::BciKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBciKey2(PTGParser::BciKey2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBciVal(PTGParser::BciValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldKey(PTGParser::FieldKeyContext *ctx) override {
    return visitChildren(ctx);
  }


};

