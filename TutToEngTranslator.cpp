
#include "TutToEngTranslator.h"

using namespace std;

TutToEngTranslator::TutToEngTranslator(){

}

TutToEngTranslator::~TutToEngTranslator(){

}

string TutToEngTranslator::lowercaseString(string s){
    for (int i = 0; i < s.length(); ++i) {
        s[i] = tolower(s[i]);
    }
    return s;
}

string TutToEngTranslator::translateAndUpdate(string& sentence){
    string translation = "";
    if (sentence == "") { // in case an empty string is passed
        return "";
    }

    if (toupper(sentence[0]) == tolower(sentence[0])) { // character is non alphabetical
        translation += sentence[0];
        sentence = sentence.substr(1,sentence.length());
        return translation;
    }

    bool isUpper = (sentence[0] == toupper(sentence[0]));
    string tempString = lowercaseString(sentence); // to prevent calling lowercaseString for every "character" of the Tutnese sentence

    if (tempString[0] == 'a' || (tempString[0] == 'e' && tempString[1] != 'x') || tempString[0] == 'i' || tempString[0] == 'o' || tempString[0] == 'u') {
        translation += tempString[0];
        sentence = sentence.substr(1,sentence.length());
    } else if (tempString.substr(0,4) == "squa"){
        if (tempString[4] == 't') {
            if (tempString.substr(0,7) == "squatut") {
                translation = "tt";
                sentence = sentence.substr(7,sentence.length());
                // cout << translation << "*" << endl;
            }
            else {
                translation += tempString[5];
                translation += tempString[5];
                // cout << translation << "!" << endl;
                sentence = sentence.substr(6,sentence.length());
            }
        }
        // else if (tempString.substr(4,6) == "ex"){
        //     translation = "xx";
        //     sentence = sentence.substr(7,sentence.length());
        //     // cout << translation << "?" << endl;
        // }
        else {
            sentence = sentence.substr(4,sentence.length());
            translation = translateAndUpdate(sentence);
            translation = translation + translation;
            // cout << translation << "$" << endl;
        }
    } else if (tempString.substr(0,3) == "bub"){
        translation = "b";
        sentence = sentence.substr(3,sentence.length());
    } else if (tempString.substr(0,4) == "cash"){
        translation = "c";
        sentence = sentence.substr(4,sentence.length());
    } else if (tempString.substr(0,3) == "dud"){
        translation = "d";
        sentence = sentence.substr(3,sentence.length());
    } else if (tempString.substr(0,3) == "fuf"){
        translation = "f";
        sentence = sentence.substr(3,sentence.length());
    } else if (tempString.substr(0,3) == "gug"){
        translation = "g";
        sentence = sentence.substr(3,sentence.length());
    } else if (tempString.substr(0,4) == "hash"){
        translation = "h";
        sentence = sentence.substr(4,sentence.length());
    } else if (tempString.substr(0,3) == "jay"){
        translation = "j";
        sentence = sentence.substr(3,sentence.length());
    } else if (tempString.substr(0,4) == "kuck"){
        translation = "k";
        sentence = sentence.substr(4,sentence.length());
    } else if (tempString.substr(0,3) == "lul"){
        translation = "l";
        sentence = sentence.substr(3,sentence.length());
    } else if (tempString.substr(0,3) == "mum"){
        translation = "m";
        sentence = sentence.substr(3,sentence.length());
    } else if (tempString.substr(0,3) == "nun"){
        translation = "n";
        sentence = sentence.substr(3,sentence.length());
    } else if (tempString.substr(0,3) == "pub"){
        translation = "p";
        sentence = sentence.substr(3,sentence.length());
    } else if (tempString.substr(0,5) == "quack"){
        translation = "q";
        sentence = sentence.substr(5,sentence.length());
    } else if (tempString.substr(0,3) == "rug"){
        translation = "r";
        sentence = sentence.substr(3,sentence.length());
    } else if (tempString.substr(0,3) == "sus"){
        translation = "s";
        sentence = sentence.substr(3,sentence.length());
    } else if (tempString.substr(0,3) == "tut"){
        translation = "t";
        sentence = sentence.substr(3,sentence.length());
    } else if (tempString.substr(0,3) == "vuv"){
        translation = "v";
        sentence = sentence.substr(3,sentence.length());
    } else if (tempString.substr(0,4) == "wack"){
        translation = "w";
        sentence = sentence.substr(4,sentence.length());
    } else if (tempString.substr(0,2) == "ex"){
        translation = "x";
        sentence = sentence.substr(2,sentence.length());
    } else if (tempString.substr(0,3) == "yub"){
        translation = "y";
        sentence = sentence.substr(3,sentence.length());
    } else if (tempString.substr(0,3) == "zub"){
        translation = "z";
        sentence = sentence.substr(3,sentence.length());
    } else { // if somehow the tutnese file has an issue with spelling
        translation += sentence[0];
        sentence = sentence.substr(1,sentence.length());
    }

    if (isUpper) {
        translation[0] = toupper(translation[0]);
    }
    return translation;
}

string TutToEngTranslator::returnTranslatedSentence(string engSentence){
    string translatedSentence = "";
    while (engSentence.length() > 0){
        translatedSentence += translateAndUpdate(engSentence);
    }
    return translatedSentence;
}
