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

vector<vector<char>> Cypher::createTable(string key){
    vector<char> tableSet = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
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

    
    return table;
    
}

string Cypher::resizeKey(string key, string plaintext){
    int keylength = key.length();
    
    for (int i = 0; ; i++){
        if (keylength == i){
            i = 0;
        }
        if (key.length() == plaintext.length()){
            break;
        }
        key.push_back(key[i]);
    }

    for(int i = 0; i <key.length(); i++){
        cout << key[i];
    }
    cout << endl;
    return key;
}

string Cypher::encrypt(string newKey, string plaintext, vector<vector<char>> table){

}

string Cypher::runEncryption(){
    string key = getKey();
    string plainText = getPlaintext();
    createTable(key);
    string newKey = resizeKey(key, plainText);
    
    return "Encryption completed\n";
}

string Cypher::runDecryption(){
    return " ";
}

string Cypher::getCyphertext(){

}