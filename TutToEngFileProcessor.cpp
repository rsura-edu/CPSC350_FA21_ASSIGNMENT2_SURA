/**
 * Implementation File: TutToEngFileProcessor.cpp
 *
 * Full Name: Rahul Sura
 * Student ID: 2371308
 * Chapman email: sura@chapman.edu
 * Course: CPSC 350-03
 * Assignment: Assignment 2
 */

#include <fstream>
#include "TutToEngFileProcessor.h"
#include "TutToEngTranslator.h"

using namespace std;

/**
 * Default constructor
 */
TutToEngFileProcessor::TutToEngFileProcessor(){
    // empty body - no code necessary
}

/**
 * Destructor
 */
TutToEngFileProcessor::~TutToEngFileProcessor(){
    // empty body - no code necessary
}

/**
 * Trims the spaces from the beginning and end of a string
 *
 * @param A string of characters
 * @return A string of characters that don't containing leading or trailing spaces
 */
string TutToEngFileProcessor::trimString(string phrase){
    int phraseLength = phrase.length();
    for (int i = 0; i < phraseLength; ++i) { // trims beginning of the string's spaces
        if(phrase[i] == ' '){
            phrase = phrase.substr(1,phraseLength);
            phraseLength--;
            i--;
        } else {
            break;
        }
    }

    for (int i = phraseLength - 1; i >= 0; --i) { // trims beginning of the string's spaces
        if(phrase[i] == ' '){
            phrase = phrase.substr(0,phraseLength - 1);
            phraseLength--;
        } else {
            break;
        }
    }

    return phrase;

}

/**
 * Takes the name of an input file name and an output file name to translate the
 * Tutnese text from the input text file and put the English translation in an output file.
 *
 * @param the name of the input file (including the extension)
 * @param the name of the output file (including the extension)
 */
void TutToEngFileProcessor::processFile(string inputFile, string outputFile){
    ifstream fileReader;
    fileReader.open(inputFile); // opens input file with the name (inputFile)

    TutToEngTranslator *t = new TutToEngTranslator();

    if(!fileReader.is_open()){ // checks if the file is open
        cout << "\nOops! No file found with the name of \"" << inputFile << "\"" << endl;
        cout << "Unfortunately, \"" << outputFile << "\" will not be created, as the input file was unaccessable" << endl;
        cout << "Please check if the file is in the wrong file directory, has the proper reading permissions or if you have provided the extension for the file name" << endl;
    } else {
        ofstream fileWriter;
        fileWriter.open(outputFile); // creates output file with the name (outputFile)
        string fileLine; // represents each line of text of the inputFile

        while (getline(fileReader,fileLine)) {
            fileLine = trimString(fileLine);
            if (fileLine.length() == 0) { // empty line
                fileWriter << endl; // add that empty line
            } else {
                fileWriter << t->returnTranslatedSentence(fileLine) << endl;
            }
        }

        if (!fileReader.eof()) { // if for some reason the file reader doesn't reach the endl of the file
            cout << "There was an input failure before reaching the end of file." << endl;
        } else {
            cout << "Sucessfully created the Tutnese to English translated file!" << endl;
            cout << "Please check the directory for your file: \"" << outputFile << "\"" << endl;
        }
        fileWriter.close();

    }
    fileReader.close();
}
