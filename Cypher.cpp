///////////////////////////////
// Programmer: Garth Bates
// Project: Modified Vigenere
// File: Cypher.cpp
// Date Started: 11/12/2023
// Date Completed: 12/9/23
///////////////////////////////

#pragma once

#include "Cypher.h"

string Cypher::getKey(){
    cout << "Enter the encrpytion key\n";
    string key;
    cin >> key;
    return key;
}

string Cypher::getPlainText(){
    cout << "Enter text to be encrypted\n";
    string plainText;
    cin >> plainText;
    return plainText;
}

vector<vector<char>> Cypher::createTable(string key){
    vector<char> tableSet = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
                            'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
                            '1','2','3','4','5','6','7','8','9','0','!','@','#','$','%','^','&','*','(',')','_','-','+','=','`','~',',','.','<','>','?','/','[',']',
                            '{','}','\\','|','\n','\t'};
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

        
    return table;
    
}

string Cypher::resizeKey(string key, string plaintext){
    int keylength = key.length();
    
    if(keylength >= plaintext.length()){
        return key;
    }

    for (int i = 0; ; i++){
        if (keylength == i){
            i = 0;
        }
        if (key.length() == plaintext.length()){
            break;
        }
        key.push_back(key[i]);
    }

    return key;
}

string Cypher::encrypt(string newKey, string plainText, vector<vector<char>> table){
    string cypherText = "";
    int indexPT = 0;
    int indexKey = 0;

    for (int i = 0; i < plainText.length(); i++){
        
        auto it = find(table[0].begin(), table[0].end(), plainText[i]);
        if (it != table[0].end()){
            indexPT = it - table[0].begin();
        } 

        auto it2 = find(table[0].begin(), table[0].end(), newKey[i]);
        if (it2 != table[0].end()){
            indexKey = it2 - table[0].begin();
        } 

        cypherText.push_back(table[indexPT][indexKey]);

    }

    return cypherText;
}

string Cypher::decrypt(string newKey, string cypherText, vector<vector<char>> table){
    string plainText = "";
    int indexCT = 0;
    int indexKey = 0;

    for (int i = 0; i < cypherText.length(); i++){

        auto it2 = find(table[0].begin(), table[0].end(), newKey[i]);
        if (it2 != table[0].end()){
            indexKey = it2 - table[0].begin();
        } 

        auto it = find(table[indexKey].begin(), table[indexKey].end(), cypherText[i]);
        if (it != table[indexKey].end()){
            indexCT = it - table[indexKey].begin();
        }

        plainText.push_back(table[0][indexCT]);

    }

    return plainText;
}

string Cypher::runEncryption(){
    string key = getKey();
    string plainText = getPlainText();
    vector<vector<char>> table = createTable(key);
    string newKey = resizeKey(key, plainText);

    string cypherText = encrypt(newKey, plainText, table);

    cout << cypherText << endl;
    
    return "Encryption completed\n";
}

string Cypher::runDecryption(){
    
    string key = getKey();
    string cypherText = getCypherText();
    vector<vector<char>> table = createTable(key);
    string newKey = resizeKey(key, cypherText);

    string plainText = decrypt(newKey, cypherText, table);

    cout << plainText << endl;

    return "Decryption completed\n";
}

string Cypher::getCypherText(){
    cout << "Enter text to be decrypted\n";
    string cypherText;
    cin >> cypherText;
    return cypherText;
}