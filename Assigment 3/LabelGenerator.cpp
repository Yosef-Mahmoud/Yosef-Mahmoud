//
// Created by ELHAMD on 12/1/2023.
//

#include "LabelGenerator.h"
#include <iostream>
using namespace std;



LabelGenerator::LabelGenerator(string pre, int i) {

    prefix = pre ;
    index = i ;
}

string LabelGenerator::nextLabel() {

    return (prefix + " "+ to_string(index++));


}

FileLabelGenerator::FileLabelGenerator(string pre, int i, string file) : LabelGenerator( pre ,  i) {

f = file ;

}

string FileLabelGenerator::nextLabel() {

    ifstream file(f );


    file.open(f);
    string line;


    while( getline(file,  line) )
   {


   }


   return (prefix + " " + to_string(index++) + " " + line);

}
