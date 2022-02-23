#include <iostream>
#include <fstream> 
#include <strstream>
#include <string>
#include "antlr4-runtime.h"
#include "PTGLexer.h"
#include "PTGParser.h"
#include "structs.h"
#include "PTGBuilderVisitor.h"

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


	//cout << "visiting now\n";
	PTGParser::PtgContext *ctx = parser.ptg();
	
	cout << endl;
	
	PTGBuilderVisitor visitor;
   //std::map<int, StaticPtg> res = tree->accept(&visitor).as<std::map<int, StaticPtg>>();
   	std::map<int, StaticPtg> res = visitor.visitPtg((PTGParser::PtgContext *) tree).as<std::map<int, StaticPtg>>();
    
	cout << "\n\n" << endl;
   std::map<int, StaticPtg> :: iterator it = res.begin();
	while(it != res.end()) {
		cout << "bci : " << it->first << endl;
 		auto vars = it->second.varsMap;
      std::map<int, std::vector<Entry>> :: iterator vIt = vars.begin();
      while(vIt != vars.end()) {
         cout << "\t" << vIt->first << ": ";
		 auto vals = vIt->second;
		 for (Entry entry : vals) {
			 if(entry.isNull) cout << " n";
			 else if(entry.isConstant) cout << " c";
			 else if(entry.isGlobal) cout << " g";
			 else if(entry.isString) cout << " s";
			 else {
				 cout << " " << entry.caller << "-" << entry.bci;
			 }
		 }

			 cout << endl;
         vIt++;
      }

//       auto fields = it->second.fieldsMap;
//       std::map<string, std::set<string>> :: iterator fIt = fields.begin();
//       while(fIt != fields.end()) {
//          cout << fIt->first << endl;
//          fIt++;
//       }
		it++;
	}
	
	
	    
    return 0;
}
