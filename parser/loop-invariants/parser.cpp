#include <iostream>
#include <fstream> 
#include <strstream>
#include <string>
#include "antlr4-runtime.h"
#include "PTGLexer.h"
#include "PTGParser.h"
#include "structs.h"

using namespace std;
using namespace antlr4;

int main(int argc, char* argv[]) {
	
	string fileName(argv[1]);
	ifstream ins(fileName, std::ifstream::in); 
	//ins.open("/home/shashin/antlr/demo/test1/test1.log");
	
	ANTLRInputStream input(ins);
	
	PTGLexer lexer(&input);
	CommonTokenStream tokens(&lexer);
	
	cout << "tokens" << endl;
	tokens.fill();
	 
	    for (Token *token : tokens.getTokens()) 
	    { 
		//std::cout << token->toString() << std::endl; 
	    } 
	    
	    
    PTGParser parser(&tokens);
    tree::ParseTree *tree = parser.ptg();
     
    // Print the parse tree in Lisp format. 
    cout << endl << "Parse succesful, parse tree:" << endl; 
    std::cout << tree->toStringTree(&parser) << endl; 
    
	cout << endl;


	//cout << "visiting now\n";
	//PTGParser::PtgContext *ctx = parser.ptg();
	
	/*
	PTGBuilderVisitor visitor;
   std::map<string, StaticPtg> res = tree->accept(&visitor).as<std::map<string, StaticPtg>>();
   //	std::map<string, StaticPtg> res = visitor.visitPtg((PTGParser::PtgContext *) tree).as<std::map<string, StaticPtg>>();
   std::map<string, StaticPtg> :: iterator it = res.begin();
	while(it != res.end()) {
		cout << it->first << endl;
		auto vars = it->second.varsMap;
      std::map<string, std::set<string>> :: iterator vIt = vars.begin();
      while(vIt != vars.end()) {
         cout << vIt->first << endl;
         vIt++;
      }
      auto fields = it->second.fieldsMap;
      std::map<string, std::set<string>> :: iterator fIt = fields.begin();
      while(fIt != fields.end()) {
         cout << fIt->first << endl;
         fIt++;
      }
		it++;
	}
	
	*/
	    
    return 0;
}
