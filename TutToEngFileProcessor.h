#ifndef TUTTOENGFILEPROCESSOR_H
#define TUTTOENGFILEPROCESSOR_H

#include <iostream>

using namespace std;

class TutToEngFileProcessor{
    public:
        TutToEngFileProcessor();
        ~TutToEngFileProcessor();
        void processFile(string inputFile, string outputFile);
    private:
        string trimString(string phrase);
};

#endif
