/**
 * Header File: Model.h
 *
 * Full Name: Rahul Sura
 * Student ID: 2371308
 * Chapman email: sura@chapman.edu
 * Course: CPSC 350-03
 * Assignment: Assignment 1
 */

#ifndef MODEL_H
#define MODEL_H

#include <iostream>
using namespace std;

class Model{
    public:
        Model();
        ~Model();
        string translateSingleCharacter(char singleChar);
        string translateDoubleCharacter(char doubleChar);
};

#endif
