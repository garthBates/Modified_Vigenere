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
    //cout << cyp.runEncryption();
    //cout << cyp.runDecryption();

    int option = -1;

    while(option != 0){
        cout << "Press 1 to encrypt text" << endl;
        cout << "Press 2 to decrypt text" << endl;
        cout << "Press 0 to quit" << endl;

        cin >> option;

        if (option == 1){
            cyp.runEncryption();
        } else if (option == 2){
            cyp.runDecryption();
        } else if (option == 0) {
            cout << "Ending operations" << endl;
        } else {
            cout << "Invalid input" << endl;
        }


    }

}