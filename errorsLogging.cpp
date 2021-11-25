#include "morse.h"

std::vector<std::vector<int>> convertErrors;

std::string getErrorCode(int errorCode) {
    /* Returns the error code as a string. 
    e.g. '7' -> 'ERROR 07: ', '21' -> 'ERROR 21: '.*/
    if (errorCode < 10)
        return "ERROR 0" + std::to_string(errorCode) + ": ";
    return "ERROR " + std::to_string(errorCode) + ": ";
}

/* Functions that log error messages to the console. */
namespace errorsLogging {

    void noArgumentsProvided(int errorCode) {
        std::cout << getErrorCode(errorCode) 
                  << "No arguments were provided to the program." << std::endl;  
    }

    void fileNamesMissing(int errorCode, int numFileNames) {
        std::cout << getErrorCode(errorCode) 
                  << numFileNames << (numFileNames == 1 ? " file name was" : " file names were") 
                  << " missing from the arguments lists." << std::endl;
    }

    void outputFileNameMissing(int errorCode) {
        std::cout << getErrorCode(errorCode) 
                  << "Output file name was missing from the arguments lists." << std::endl;
    }

    void unrecognizedCommands(int errorCode, std::string command) {
        std::cout << getErrorCode(errorCode) 
                  << "Unrecognized command '" << command << "'." << std::endl;
    }

    void invalidCommands(int errorCode, std::string command) {
        std::cout << getErrorCode(errorCode)
                  << "Invalid command '" << command << "'. Commands must start with hyphens (-)." << std::endl;
    }

    void conflictedCommands(int errorCode) {
        std::cout << getErrorCode(errorCode) 
                  << "Commands '-m' and '-t' can't be used together." << std::endl;
    }

    void duplicatedArguments(int errorCode, std::string command) {
        std::cout << getErrorCode(errorCode) 
                  << "Argument '" << command << "' was included more than once." << std::endl;
    }

    void tooManyArguments(int errorCode) {
        std::cout << getErrorCode(errorCode) 
                  << "More than 4 arguments isn't allowed." << std::endl;
    }

    void fileNotExist(int errorCode, std::string fileName) {
        std::cout << getErrorCode(errorCode) 
                  << "File '" << fileName << "' doesn't exist." << std::endl;
    }

    void openInput(int errorCode,std::string inFile){
        std::cout << getErrorCode(errorCode)
                  << "Cannot open input file: " << inFile << "." << std::endl;
    }

    void overwriteOutput(int errorCode, std::string outFile){
        std::cout << getErrorCode(errorCode)
                  << "Cannot ovewrite output file: " << outFile << "." << std::endl;
    }


    void unrecognizedChars(int errorCode, int lineNum, char c) {
        std::cout << getErrorCode(errorCode) 
                  << "Unrecognized character '" << c 
                  << "' on line " << lineNum << '.' << std::endl;
    }

    void unrecognizedCodes(int errorCode, int lineNum, std::string code) {
        std::cout << getErrorCode(errorCode) 
                  << "Unrecognized morse code '" << code 
                  << "' on line " << lineNum << '.' << std::endl;
    }

    void invalidCodes(int errorCode, int lineNum, std::string code) {
        std::cout << getErrorCode(errorCode) 
                  << "Invalid morse code '" << code
                  << "' on line " << lineNum << '.' << std::endl;
    }
    
    
}