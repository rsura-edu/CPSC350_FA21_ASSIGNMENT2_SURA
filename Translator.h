/**
 * Header File: Translator.h
 *
 * Full Name: Rahul Sura
 * Student ID: 2371308
 * Chapman email: sura@chapman.edu
 * Course: CPSC 350-03
 * Assignment: Assignment 2 (but an untouched copy from Assignment 1)
 */

#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <iostream>
using namespace std;

class Translator{
    public:
        Translator();
        ~Translator();
        string translateEnglishWord(string word);
        string translateEnglishSentence(string sentence);
    private:
        string trimString(string phrase); // private because trimming the string is irrelevant for a "public" method of this class

};

#endif
