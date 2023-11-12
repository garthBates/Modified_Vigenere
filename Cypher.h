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


using std::string;
using std::cout;
using std::cin;

class Cypher {
    public:
    string getKey();
    string getPlaintext();
    private:
    void createTable(string key);
    string runEnryption(string key, string plaintext);      //returns cyphertext
    string runDecryption(string key, string cyphertext);    //return plaintext

};