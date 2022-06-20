/************************************************
** Author: Andrea Hayes
** Date: May 31, 2020
** Purpose: Determine number of uppercase, lowercase and digits in file
** Input: File
** Processing: Count uppercase, lowercase and digits
** Output: Display how many of each
*************************************************/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <string>
using namespace std;
int main() {

    const int SIZE = 10000;
    ifstream text;  // Variables 
    int upper = 0, lower = 0, digit = 0,i=0;
    char words[SIZE];
    text.open("../text.txt"); // Opens file

    if (!text)  // If file cannot open
    {
        cout << "Could not open file.";
        return 1;
    }
    
    // Open file into an array
    while (text >> words[i]) {
        //cout << words[i];
        i++;
    }

    // Find and count Upper, lower and digits 
    for (int j = 0; j < i; j++) {
        if (isupper(words[j])) {
            upper++;
        }
        if (islower(words[j])) {
            lower++;
        }
        if (isdigit(words[j])) {
            digit++;
        }
    }

    cout << "There are " << upper << " upper case letters." << endl;
    cout << "There are " << lower << " lower case letters." << endl;
    cout << "There are " << digit << " digits.";

    return 0;
}