///////////////////////////////
// Programmer: Garth Bates
// Project: Modified Vigenere
// File: Cypher.h
// Date Started: 11/11/2023
// Date Completed:
///////////////////////////////

#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>


using std::string;
using std::cout;
using std::cin;
using std::vector;
using std::shuffle;
using std::endl;
using std::default_random_engine;

class Cypher {
    public:
    string runEncryption();      //returns cyphertext. Calls getKey() and getPlaintext()
    string runDecryption();    //return plaintext. Calls getKey() and getCyphertext()
    private:
    vector<vector<char>> createTable(string key);
    string getKey();
    string getPlaintext();
    string getCyphertext();
    string resizeKey(string key, string plainText);
    string encrypt(string newKey, string plainText, vector<vector<char>> table);
    string decrypt(string newKey, string cypherText, vector<vector<char>> table);
};