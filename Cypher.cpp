///////////////////////////////
// Programmer: Garth Bates
// Project: Modified Vigenere
// File: Cypher.cpp
// Date Started: 11/12/2023
// Date Completed:
///////////////////////////////

#pragma once

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

void Cypher::createTable(string key){
    /*
    vector<char> table = {'A','B','C','D','E'};
    std::shuffle(table.begin(), table.end(), key);

    cout << "Shuffled elements: ";
    for (const int& i : table){
        cout << i << " ";
    }
    */
}

string Cypher::runEncryption(){
    string key = getKey();

    
    return "Encryption completed\n";
}

string Cypher::runDecryption(){
    return " ";
}

string Cypher::getCyphertext(){

}