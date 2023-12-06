///////////////////////////////
// Programmer: Garth Bates
// Project: Modified Vigenere
// File: main.cpp
// Date Started: 11/11/2023
// Date Completed:
///////////////////////////////

#include "Cypher.h"
#include "Cypher.cpp"           //Added include to get around linker error in gcc

int main(void){
    Cypher cyp;
    //call runEncryption to start debugging
    cout << cyp.runEncryption();
    cout << cyp.runDecryption();
}