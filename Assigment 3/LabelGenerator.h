//
// Created by ELHAMD on 12/1/2023.
//

#ifndef ASSIGMENT_3_LABELGENERATOR_H
#define ASSIGMENT_3_LABELGENERATOR_H
#include <iostream>
#include <fstream>
using namespace std ;

class LabelGenerator {

protected:
    int index ;
    string prefix;

public:
    LabelGenerator( string pre , int i); // intilaized constructer
   virtual string nextLabel();


};

class FileLabelGenerator : public LabelGenerator
{
private:
string f;

public:
    FileLabelGenerator( string pre , int i , string file); // intilaized constructer
    string nextLabel();


};



#endif //ASSIGMENT_3_LABELGENERATOR_H
