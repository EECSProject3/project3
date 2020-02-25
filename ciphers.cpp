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
         
         cout << "Enter a message: ";
         string message = "";
         getline(cin, message);
         
         int keyInt;
         cout << "What is your key: ";
         cin >> keyInt;
         
         cout << "The encrypted message is: ";
         if(encryptOrDecrypt == "encrypt") {
          cout << caesarCipher(message, keyInt, true) << endl;
         }
         else {
          cout << caesarCipher(message, keyInt, false);
         }
     }
     else if(cipher == "vigenere" || cipher == "v") {

             cout << "Encrypt or decrypt: ";
             string encryptOrDecrypt = "";
             getline(cin, encryptOrDecrypt);
             for(int j = 0; j < encryptOrDecrypt.length(); j++) {
                 encryptOrDecrypt[j] = tolower(encryptOrDecrypt[j]);
             }
             
             cout << "Enter a message: ";
             string message = "";
             getline(cin, message);
             
          cout << "What is your key: ";
                string keyStr = "";
                getline(cin, keyStr);
                
                int count = 0;
                for(int i = 0; i < keyStr.length(); i++) {
                    if((keyStr.at(i) >= 'a' && keyStr.at(i) <= 'z') || (keyStr.at(i) >= 'A' && keyStr.at(i) <= 'Z')) {
                        count++;
                    }
                }
            if(count >= 1) {
             keyStr = removeNonAlphas(keyStr);
             cout << "The encrypted message is: ";
                if (encryptOrDecrypt == "encrypt") {
                   cout << vigenereCipher(message, keyStr, true) << endl;
                } else {
                   cout << vigenereCipher(message, keyStr, false) << endl;
             }
         } else {
             cout << "Invalid key!";
             return;
         }
     }
     else if(cipher == "polybius" || cipher == "p") {
         cout << "What is your key: ";
         string keyStr = "";
         getline(cin, keyStr);
         
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
         if(message.length() == 36) {
             cout << "The encrypted message is: ";
             if(encryptOrDecrypt == "encrypt") {
               //  polybiusSquare(grid, keyStr, original, true);
             }
             else {
                // polybiusSquare(grid, keyStr, original, false);
             }
         }
        
     }
     else {
         cout << "Invalid cipher!";
     }
     return;
 }
