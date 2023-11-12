///////////////////////////////
// Programmer: Garth Bates
// Project: Modified Vigenere
// File: Cypher.cpp
// Date Started: 11/12/2023
// Date Completed:
///////////////////////////////


#include "Cypher.h"

string Cypher::getKey(){
    cout << "Enter the encrpytion key";
    string key;
    cin >> key;
    return key;
}