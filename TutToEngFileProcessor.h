/**
 * Header File: TutToEngFileProcessor.h
 *
 * Full Name: Rahul Sura
 * Student ID: 2371308
 * Chapman email: sura@chapman.edu
 * Course: CPSC 350-03
 * Assignment: Assignment 2
 */

#ifndef TUTTOENGFILEPROCESSOR_H // header guards
#define TUTTOENGFILEPROCESSOR_H

#include <iostream>

using namespace std;

class TutToEngFileProcessor{
    public:
        TutToEngFileProcessor();
        ~TutToEngFileProcessor();
        void processFile(string inputFile, string outputFile);
    private:
        string trimString(string phrase); // trims a string's leading and trailing spaces
};

#endif
