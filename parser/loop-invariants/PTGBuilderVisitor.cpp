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
	std::map<string, StaticPtg> staticKeyedPtg;
	for (auto entry : ctx->entry())
	{
		cout << "invoking bciKey()->accept(this)" << endl;
		string bci = entry->bciKey()->accept(this).as<string>();
		cout << "completed bciKey()->accept(this)" << endl;
		
		
		
		
		
		
		
		
		
		std::map<string, std::set<string>> varsMap = entry->vars()->accept(this).as<std::map<string, std::set<string>>>();
		std::map<string, std::set<string>> fieldsMap;
		if(entry->fields())
			fieldsMap = entry->fields()->accept(this).as<std::map<string, std::set<string>>>();
		StaticPtg ptg = {varsMap, fieldsMap};
		staticKeyedPtg.insert(std::pair <string, StaticPtg> (bci, ptg));

	}

	return staticKeyedPtg;
}

antlrcpp::Any PTGBuilderVisitor::visitVars(PTGParser::VarsContext *ctx)
{
	std::map<string, std::set<string>> varsMap;
	for(auto varEntry : ctx->varentry()){
		string varKey = varEntry->bciKey()->accept(this).as<string>();
		std::set<string> vals;
		for(auto val : varEntry->bciVal()) {
			string v = val->accept(this).as<string>();
			vals.insert(v);
		}
		varsMap.insert(std::pair<string, std::set<string>> (varKey, vals));

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


