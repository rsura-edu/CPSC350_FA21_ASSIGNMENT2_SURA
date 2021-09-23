#ifndef TUTTOENGTRANSLATOR_H
#define TUTTOENGTRANSLATOR_H

#include <iostream>

using namespace std;

class TutToEngTranslator{
    public:
        TutToEngTranslator();
        ~TutToEngTranslator();
        string returnTranslatedSentence(string engSentence);
    private:
        string lowercaseString(string s);
        string translateAndUpdate(string& sentence); // translates substring and updates the sentence


};

#endif
