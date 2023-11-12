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
    string runEnryption();      //returns cyphertext
    string runDecryption();    //return plaintext
    private:
    void createTable(string key);
    string getKey();
    string getPlaintext();
    string getCyphertext();

};