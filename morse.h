#pragma once
#include <iostream>
#include <chrono>
#include <ctime>
#include <fstream>
#include <map>
#include <vector>
#include <cctype>
#include <cstring>
#include <iomanip>
#define NUM_FILES 2
#define NUM_PROGRAM_CMDS 4
#define MAX_NUM_ARGS 4
#define MAX_MORSE_LENGTH 7
enum ERROR_CODE {
    NO_ERROR,
    NO_ARGS_PROVIDED,
    FILE_NAMES_MISSING,
    UNRECOGNIZED_CMDS,
    INVALID_CMDS,
    CONFLICTED_CMDS,
    DUPLICATED_ARGS,
    TOO_MANY_ARGS,
    FILE_NOT_EXIST,
    FILE_EXIST,
    UNRECOGNIZED_CHARS,
    INVALID_CODES
};
enum FILE_TYPE {
    PLAIN_TEXT,
    MORSE_CODE
};

// Value of which will be modified by input errors handling functions
extern bool areInputErrors;
extern int areErrors;

/* A map from ASCII characters to Morse code */
extern std::map<char, std::string> asciiToMorse; 

/* A map from Morse code to ASCII character */
extern std::map<std::string, char> morseToAscii;

// Functions that perform micellaneous tasks

std::string getErrorCode(int errorCode);

int isRecognizableCommand(std::string command);

int isValidCommand(std::string command);

int doesArgvIncludeCommand(int argc, char *argv[], std::string programCommand);

int doesArgvIncludeCommand(int argc, char *argv[], std::string programCommand);

int countFileNames(int argc, char *argv[]);

int isValidMorse(std::string morse);

int getFileType(std::string fileName);

int doesFileExist(std::string fileName);

int isResponseYes(std::string response);

int isResponseNo(std::string response);

std::vector<char *> getFileNames(int argc, char *argv[]);

std::vector<char *> getCommands(int argc, char *argv[]);

// Functions that log error messages to the console
namespace errorsLogging {
    
    // User's input related errors
    void noArgumentsProvided(int errorCode);

    void fileNamesMissing(int errorCode, int numFileNames);

    void outputFileNameMissing(int errorCode);

    void unrecognizedCommands(int errorCode, std::string command);

    void invalidCommands(int errorCode, std::string command);

    void conflictedCommands(int errorCode);

    void duplicatedArguments(int errorCode, std::string command);

    void tooManyArguments(int errorCode);

    void fileNotExist(int errorCode, std::string fileName);

    void fileExist(int errorCode, std::string fileName);

    void unrecognizedChars(int errorCode, int lineNum, char c);

    void unrecognizedCodes(int errorCode, int lineNum, std::string code);

    void invalidCodes(int errorCode, int lineNum, std::string code);
}

namespace errorsHandling {

    void noArgumentsProvided(int argc);

    void fileNamesMissing(int argc, char *argv[]);

    void unrecognizedCommands(int argc, char *argv[]);

    void invalidCommands(int argc, char *argv[]);

    void conflictedCommands(int argc, char *argv[]);

    void duplicatedArguments(int argc, char *argv[]);

    void tooManyArguments(int argc, char *argv[]);

    void inputFileNotExist(std::string fileName);

    void outputFileExist(std::string fileName);
}

namespace tasks {

    void convertMorse(std::string inFile, std::string outFile);

    void convertText(std::string inFile, std::string outFile);

    void convert(std::string inFile, std::string outFile);

    void help();

    void logFile(std::string inFile, std::string outFile);

    void logConsoleInvalid(int errorCode);

    void logConsoleUnrecognized(int errorCode);
}