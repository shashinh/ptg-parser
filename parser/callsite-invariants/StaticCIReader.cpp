#include <iostream>
#include <fstream>
#include <strstream>
#include <string>
#include "antlr4-runtime.h"
#include "CILexer.h"
#include "CIParser.h"

using namespace std;
using namespace antlr4;
using namespace CI;

class CIParseErrorListener : public BaseErrorListener 
{
        virtual void syntaxError(Recognizer *recognizer, Token *offendingSymbol, size_t line, size_t charPositionInLine,
                                                         const std::string &msg, std::exception_ptr e)
        {

                cout << "Line(" << line << ":" << charPositionInLine << ") Error(" << msg << ")" << endl;
                throw invalid_argument("Parse Exception");
        }
};

int readCallerInvariants(string fileName) {
        ifstream ins(fileName, std::ifstream::in);

        ANTLRInputStream input(ins);
        try
        {
                CILexer lexer(&input);
                CommonTokenStream tokens(&lexer);

                CIParseErrorListener errorListener;

                tokens.fill();

                for (Token *token : tokens.getTokens())
                {
                        // std::cout << token->toString() << std::endl;
                }

                CIParser parser(&tokens);
                parser.removeErrorListeners();
                parser.addErrorListener(&errorListener);

                tree::ParseTree *tree = parser.ci();

                // Print the parse tree in Lisp format.
                cout << endl
                         << "Parse succesful, parse tree:" << endl;
                std::cout << tree->toStringTree(&parser) << endl;

        }
        catch (invalid_argument &ex)
        {
                cout << "ruh roh! : " << ex.what() << endl;
                return 1;
        }
        
        return 0;


}

int main (int argc, char * argv[]) {

        string fileName(argv[1]);

        readCallerInvariants(fileName);

}


