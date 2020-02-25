/**
 * ciphers.cpp
 * Project UID e98fd45ccce9d7195e89e6171a5451f2
 *
 * <#Names#>
 * <#Uniqnames#>
 *
 * EECS 183: Project 3
 * Winter 2020
 *
 * <#description#>
 */

#include "utility.h"
#include "caesar.h"
#include "vigenere.h"
#include "polybius.h"
#include <iostream>
#include <string>

using namespace std;


void ciphers() {
    cout << "Choose a cipher (Caesar, Vigenere, or Polybius): ";
    string cipher = "";
    getline(cin, cipher);
    for(int i = 0; i <  cipher.length(); i++) {
        cipher[i] = tolower(cipher[i]);
    }
    if(cipher == "caesar" || cipher == "c") {
        
        cout << "Encrypt or decrypt: ";
        string encryptOrDecrypt = "";
        getline(cin, encryptOrDecrypt);
        
        for(int j = 0; j < encryptOrDecrypt.length(); j++) {
            encryptOrDecrypt[j] = tolower(encryptOrDecrypt[j]);
        }
        cout << endl;
        
        cout << "Enter a message: ";
        string message = "";
        getline(cin, message);
        cout << endl;
        
        int keyInt;
        cout << "What is your key: ";
        cin >> keyInt;
        
        cout << "The encrypted message is: ";
        if(encryptOrDecrypt == "encrypt") {
            cout << caesarCipher(message, keyInt, true);
        }
        else {
            cout << caesarCipher(message, keyInt, false);
        }
    }
    else if(cipher == "vigenere" || cipher == "v") {
        string keyStr = "";
        cout << "Encrypt or decrypt: ";
        string encryptOrDecrypt = "";
        getline(cin, encryptOrDecrypt);
        for(int j = 0; j < encryptOrDecrypt.length(); j++) {
            encryptOrDecrypt[j] = tolower(encryptOrDecrypt[j]);
        }
        cout << endl;
            
        cout << "Enter a message: ";
        string message = "";
        getline(cin, message);
        cout << endl;
        
        cout << "What is your key: ";
            getline(cin, keyStr);
        
            int count = 0;
            for(int i = 0; i <= keyStr.length(); i++) {
                if(tolower(keyStr[i]) >= 0 && tolower(keyStr[i] <= 26)) {
                count++;
                }
            }
            if(count == 0) {
                cout << "Invalid key!";
            }
            
            
        if(encryptOrDecrypt == "encrypt" || encryptOrDecrypt == "e") {
            cout << "The encrypted message is: ";
            cout << vigenereCipher(message, keyStr, true);
        }
        else if(encryptOrDecrypt == "decrypt" || encryptOrDecrypt == "d"){
            cout << "The decrypted message is: ";
            cout << vigenereCipher(message, keyStr, false);
        }
        else {
            cout << "Invalid Mode!";
        }
        
}

    else if(cipher == "polybius" || cipher == "p") {
        cout << "Encrypt or decrypt: ";
        string encryptOrDecrypt = "";
        getline(cin, encryptOrDecrypt);
        for(int j = 0; j < encryptOrDecrypt.length(); j++) {
            encryptOrDecrypt[j] = tolower(encryptOrDecrypt[j]);
        }
        cout << endl;
        
        cout << "Enter a message: ";
        string message = "";
        getline(cin, message);
        cout << endl;
        
        cout << "What is your key: ";
        string keyStr = "";
        getline(cin, keyStr);
        
        if(message.length() == 36) {
            cout << "The encrypted message is: ";
            if(encryptOrDecrypt == "encrypt") {
            //    polybiusSquare(grid, keyStr, message, true);
            }
            else {
           //     polybiusSquare(grid, keyStr, message, false);
            }
        }
       
    }
    else {
        cout << "Invalid cipher!";
    }
    return;
}
