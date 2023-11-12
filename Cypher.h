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


using std::string;
using std::cout;
using std::cin;
using std::vector;
using std::shuffle;

class Cypher {
    public:
    string runEnryption(string key, string plaintext);      //returns cyphertext
    string runDecryption(string key, string cyphertext);    //return plaintext
    private:
    void createTable(string key);
    string getKey();
    string getPlaintext();

};