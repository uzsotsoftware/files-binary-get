/*
 * File:   main.cpp
 * Author: R135278L
 *
 * Created on January 28, 2015, 11:20 PM
 */

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>

using namespace std;

/*
 *
 */

int main(int argc, char** argv) {
    char charString[100];
    char *str;
    str = "Software;Hardware;Networking";
    ofstream oMathsFile("Files\\courses", ios::binary);
    oMathsFile.write(str, strlen(str));
    oMathsFile.close();
    ifstream iMathsFile("Files\\courses", ios::binary);
    if (iMathsFile)
        cout << "File Opened Successfully" << endl;
    //    iMathsFile.get(charString, sizeof (charString), ';');

    //    cout << charString << endl;
    while (iMathsFile) {
        iMathsFile.get(charString, sizeof (charString), ';');
        cout<< sizeof (charString)<<endl;
        cout << charString << endl;
    }
    iMathsFile.close();


    return 0;
}
