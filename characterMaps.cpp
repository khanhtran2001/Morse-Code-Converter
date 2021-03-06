#include "morse.h"

/* A map from ASCII characters to Morse code */
std::map<char, std::string> asciiToMorse = {
    {'a', ".-"},
    {'b', "-..."},
    {'c', "-.-."},
    {'d', "-.."},
    {'e', "."},
    {'f', "..-."},
    {'g', "--."},
    {'h', "...."},
    {'i', ".."},
    {'j', ".---"},
    {'k', "-.-"},
    {'l', ".-.."},
    {'m', "--"},
    {'n', "-."},
    {'o', "---"},
    {'p', ".--."},
    {'q', "--.-"},
    {'r', ".-."},
    {'s', "..."},
    {'t', "-"},
    {'u', "..-"},
    {'v', "...-"},
    {'w', ".--"},
    {'x', "-..-"},
    {'y', "-.--"},
    {'z', "--.."},
    {'1', ".----"},
    {'2', "..---"},
    {'3', "...--"},
    {'4', "....-"},
    {'5', "....."},
    {'6', "-...."},
    {'7', "--..."},
    {'8', "---.."},
    {'9', "----."},
    {'0', "-----"},
    {'.', ".-.-.-"},
    {',', "--..--"},
    {':', "---..."},
    {'?', "..--.."},
    {'\'', ".----."},
    {'-', "-....-"},
    {'/', "-..-."},
    {'(', "-.--."},
    {')', "-.--.-"},
    {'=', "-...-"},
    {'+', ".-.-."},
    {'@', ".--.-."},
    {'!', "-.-.--"},
    {'$', "...-..-"},
    {'&', ". ... ."},
    {'_', "..--.-"},
    {'~', ".-.-."},
    {'%', ".-..-."},
    {'#', "--..--"},
    {'*', "..--.."},
};

/* A map from Morse code to ASCII character */
std::map<std::string, char> morseToAscii = {
    {".-", 'a'},
    {"-...", 'b'},
    {"-.-.", 'c'},
    {"-..", 'd'},
    {".", 'e'},
    {"..-.", 'f'},
    {"--.", 'g'},
    {"....", 'h'},
    {"..", 'i'},
    {".---", 'j'},
    {"-.-", 'k'},
    {".-..", 'l'},
    {"--", 'm'},
    {"-.", 'n'},
    {"---", 'o'},
    {".--.", 'p'},
    {"--.-", 'q'},
    {".-.", 'r'},
    {"...", 's'},
    {"-", 't'},
    {"..-", 'u'},
    {"...-", 'v'},
    {".--", 'w'},
    {"-..-", 'x'},
    {"-.--", 'y'},
    {"--..", 'z'},
    {".----", '1'},
    {"..---", '2'},
    {"...--", '3'},
    {"....-", '4'},
    {".....", '5'},
    {"-....", '6'},
    {"--...", '7'},
    {"---..", '8'},
    {"----.", '9'},
    {"-----", '0'},
    {".-.-.-", '.'},
    {"--..--", ','},
    {"---...", ':'},
    {"..--..", '?'},
    {".----.", '\''},
    {"-....-", '-'},
    {"-..-.", '/'},
    {"-.--.", '('},
    {"-.--.-", ')'},
    {"-...-", '='},
    {".-.-.", '+'},
    {".--.-.", '@'},
    {"-.-.--", '!'},
    {"...-..-", '$'},
    {". ... .", '&'},
    {"..--.-", '_'},
    {".-.-.", '~'},
    {".-..-.", '%'},
    {"--..--", '#'},
    {"..--..", '*'},
};