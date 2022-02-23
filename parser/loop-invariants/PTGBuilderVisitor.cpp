#include "PTGBuilderVisitor.h"
#include "PTGBaseVisitor.h"
#include <algorithm>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "structs.h"

using namespace std;
using namespace antlrcpp;


antlrcpp::Any PTGBuilderVisitor::visitPtg(PTGParser::PtgContext *ctx)
{
	//a map of ptgs keyed by locations - represented by bci's in the method
	std::map<int, StaticPtg> staticKeyedPtg;
	for (auto entry : ctx->entry())
	{
		//cout << "invoking bciKey()->accept(this)" << endl;
		int bci = entry->bciKey()->accept(this).as<int>();
		//cout << "completed bciKey()->accept(this)" << endl;
		std::map<int, std::set<Entry>> varsMap = entry->vars()->accept(this).as<std::map<int, std::set<Entry>>>();
		std::map<int, std::set<Entry>> fieldsMap;
		if(entry->fields())
			fieldsMap = entry->fields()->accept(this).as<std::map<int, std::set<Entry>>>();
		StaticPtg ptg = {varsMap, fieldsMap};
		staticKeyedPtg.insert(std::pair <int, StaticPtg> (bci, ptg));

	}

	return staticKeyedPtg;
}

antlrcpp::Any PTGBuilderVisitor::visitVars(PTGParser::VarsContext *ctx)
{
	std::map<int, std::set<Entry>> varsMap;
	for(auto varEntry : ctx->varentry()){
		int varKey = varEntry->bciKey()->accept(this).as<int>();
		std::set<Entry> entries;

		for(auto entry : varEntry->ciBciEntry()){
			Entry varEntry;
			if(entry->ciEntries() != NULL) {
				int callerIndex = entry->ciEntries()->callerIndex()->accept(this).as<int>();
				for(auto val : entry->ciEntries()->bciVal()){
					int bciVal = val->accept(this).as<int>();
					varEntry.caller = callerIndex;
					varEntry.bci = bciVal;
				}
			}else if (entry->STRING() != NULL) {
				varEntry.isString = true;
			} else if (entry->CONST() != NULL) {
				varEntry.isConstant = true;
			} else if (entry->GLOBAL() != NULL) {
				varEntry.isGlobal = true;
			} else {
				//the value is a NIL;
				varEntry.isNull = true;
			}

			entries.insert(varEntry);
		}

		varsMap.insert(std::pair<int, std::set<Entry>>(varKey, entries));
	}

	return varsMap;
}

antlrcpp::Any PTGBuilderVisitor::visitFields(PTGParser::FieldsContext *ctx)
{
	std::map<string, std::set<string>> fieldsMap;
	for(auto fieldEntry : ctx->fieldentry()){
		string fieldReceiver = fieldEntry->bciKeyField()->accept(this).as<string>();
		string field = fieldEntry->field()->accept(this).as<string>();
		string fieldKey = fieldReceiver + "." + field;
		std::set<string> vals;
		for(auto val : fieldEntry->bciVal()) {
			string v = val->accept(this).as<string>();
			vals.insert(v);
		}
		fieldsMap.insert(std::pair<string, std::set<string>> (fieldKey, vals));

	}

	return fieldsMap;
	
}

antlrcpp::Any PTGBuilderVisitor::visitBciKey(PTGParser::BciKeyContext *ctx)
{
	cout << "entered visitBciKey(PTGParser::BciKeyContext *ctx)" << endl;
	string str;
	if (ctx->NUMS())
		str = ctx->NUMS()->toString();
	else
		str = ctx->ALL()->toString();
	//cout << str << endl;
	return str;
}

antlrcpp::Any PTGBuilderVisitor::visitBciVal(PTGParser::BciValContext *ctx)
{
	auto res = ctx->NUMS() != NULL ? ctx->NUMS()->toString() : ctx->NIL()->toString();
	//cout << res << endl;
	return res;
}

antlrcpp::Any PTGBuilderVisitor::visitBciKeyField(PTGParser::BciKeyFieldContext *ctx) {
    auto res = ctx->NUMS()->toString();
	return res;
  }

antlrcpp::Any PTGBuilderVisitor::visitField(PTGParser::FieldContext *ctx) {
    auto res = ctx->ALPHAS()->toString();
	return res;
  }


