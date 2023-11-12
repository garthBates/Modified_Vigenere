///////////////////////////////
// Programmer: Garth Bates
// Project: Modified Vigenere
// File: Cypher.cpp
// Date Started: 11/12/2023
// Date Completed:
///////////////////////////////


#include "Cypher.h"

string Cypher::getKey(){
    cout << "Enter the encrpytion key\n";
    string key;
    cin >> key;
    return key;
}

string Cypher::getPlaintext(){
    cout << "Enter text to be encrypted\n";
    string plaintext;
    cin >> plaintext;
    return plaintext;
}