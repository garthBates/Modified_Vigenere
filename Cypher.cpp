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
    vector<char> tableSet = {'A','B','C','D','E'};
    vector<vector<char>> table;
    char temp;
    unsigned seed = 0;
    for(int i = 0; i <key.length(); i++){
        seed += int(key[i]);
    }

    shuffle(tableSet.begin(), tableSet.end(), default_random_engine(seed));

    for(int i = 0; i < tableSet.size(); i++){
        table.push_back(tableSet);
        temp = tableSet.front();
        tableSet.erase(tableSet.begin());
        tableSet.push_back(temp);
    }

    for(int i = 0; i < table.size(); i++){
        for(int j = 0; j < table[i].size(); j++){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    

    
}

string Cypher::runEncryption(){
    string key = getKey();
    createTable(key);
    
    return "Encryption completed\n";
}

string Cypher::runDecryption(){
    return " ";
}

string Cypher::getCyphertext(){

}