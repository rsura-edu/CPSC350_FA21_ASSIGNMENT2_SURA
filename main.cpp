/**
 * Main Implementation File: main.cpp
 *
 * Full Name: Rahul Sura
 * Student ID: 2371308
 * Chapman email: sura@chapman.edu
 * Course: CPSC 350-03
 * Assignment: Assignment 1
 */

#include "Model.h"
#include "Translator.h"
#include "FileProcessor.h"
#include "TutToEngTranslator.h"
#include <iostream>

using namespace std;

/**
 *
 *
 * @param Command line parameters, separated by a space
 * @return Exit code
 */
int main(int argc, char** argv) {

    TutToEngTranslator *t = new TutToEngTranslator();

    string translation = t->returnTranslatedSentence("I tutsquatokuck a wackalulkuck tuto tuthashe pubarugkuck yubesustuterugdudayub");

    cout << translation << endl;

    delete t;

    /*
    cout << "------------------------------" << endl; // Just to highlight the program's output in the terminal window

    FileProcessor *fp = new FileProcessor();
    if(argc >= 4){
        if (argv[3] == "T2E") {
            // TODO
            // Tutnese to English translation
        } else if (argv[3] == "E2T") {
            // English to Tutnese translation
            fp->processFile(argv[1], argv[2]);
        }
    } if (argc == 3) { // ignores the other parameters afterwards and only utilizes the input and output file names
        cout << "It appears that you haven't provided the translation direction (T2E or E2T). Please re-run " <<
        "the program with parameters about the input file's name, output file's name, and translation direction (in that order)" << endl;
    } else if (argc == 2){
        cout << "It appears that you haven't provided the translation direction (T2E or E2T) or the output file name. Please re-run " <<
        "the program with parameters about the input file's name, output file's name, and translation direction (in that order)" << endl;
    } else { // if there are no command line parameters
        cout << "It appears that you provided no command line parameters when running this program. Please re-run " <<
        "the program with parameters about the input file's name, output file's name, and translation direction (in that order)" << endl;
    }

    delete fp;

    cout << "------------------------------" << endl; // Just to highlight the program's output in the terminal window
    */
    return 0;
}
