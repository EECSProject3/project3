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
    cipher = toUpperCase(cipher);
    
     if (cipher == "CAESAR" || cipher == "C") {
        
         cout << "Encrypt or decrypt: ";
         string encryptOrDecrypt = "";
         getline(cin, encryptOrDecrypt);
         encryptOrDecrypt = toUpperCase(encryptOrDecrypt);
         
         
         if (encryptOrDecrypt == "ENCRYPT" || encryptOrDecrypt == "E" || encryptOrDecrypt == "DECRYPT" || encryptOrDecrypt == "D") {
         
         cout << "Enter a message: ";
         string message = "";
         getline(cin, message);
        
         int keyInt;
         cout << "What is your key: ";
         cin >> keyInt;
        
         cout << "The encrypted message is: ";
        
             if (encryptOrDecrypt == "ENCRYPT" || encryptOrDecrypt == "E") {
               cout << caesarCipher(message, keyInt, true) << endl;
             } else if (encryptOrDecrypt == "DECRYPT" || encryptOrDecrypt == "D") {
          cout << caesarCipher(message, keyInt, false);
             }
        } else {
             cout << "Invalid mode!" << endl;
         }
       
     } else if(cipher == "VIGENERE" || cipher == "V") {

             cout << "Encrypt or decrypt: ";
             string encryptOrDecrypt = "";
             getline(cin, encryptOrDecrypt);
             encryptOrDecrypt = toUpperCase(encryptOrDecrypt);
         
         if (encryptOrDecrypt == "ENCRYPT" || encryptOrDecrypt == "E" || encryptOrDecrypt == "DECRYPT" || encryptOrDecrypt == "D" ) {
             
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
                if (encryptOrDecrypt == "ENCRYPT" || encryptOrDecrypt == "E") {
                   cout << vigenereCipher(message, keyStr, true) << endl;
                } else if (encryptOrDecrypt == "DECRYPT" || encryptOrDecrypt == "D"){
                   cout << vigenereCipher(message, keyStr, false) << endl;
                }
                
        } else {
        cout << "Invalid key!" << endl;
        }
            
        }  else {
        cout << "Invalid mode!" << endl;
        }
         
     } else if (cipher == "POLYBIUS" || cipher == "P") {
         
         char grid[SIZE][SIZE];
         
         cout << "Encrypt or decrypt: ";
         string encryptOrDecrypt = "";
         getline(cin, encryptOrDecrypt);
         encryptOrDecrypt = toUpperCase(encryptOrDecrypt);
         
         cout << "Enter a message: ";
         string message = "";
         getline(cin, message);
         message = toUpperCase(message);
         
         
         bool polybiusMessage = 1;
         
         for (int i = 0; i < message.size(); i++) {
            if (!(message.at(i) == ' ' || (message.at(i) >= 'a' && message.at(i) <= 'z') ||  (message.at(i) >= 'A' && message.at(i) <= 'Z') || (message.at(i) >= '0' && message.at(i) <= '9')))
                    polybiusMessage = 0;
                }
                if(polybiusMessage == 1) {
                    
         cout << "What is your key: ";
         string keyStr = "";
         getline(cin, keyStr);
         keyStr = toUpperCase(keyStr);
         keyStr = removeDuplicate(keyStr);
    
             cout << "The encrypted message is: ";
             if(encryptOrDecrypt == "ENCRYPT" || encryptOrDecrypt == "E") {
               cout << polybiusSquare(grid, keyStr, message, true) << endl;
             } else if(encryptOrDecrypt == "DECRYPT" || encryptOrDecrypt == "E") {
               cout << polybiusSquare(grid, keyStr, message, false) << endl;
             } else {
                 cout << "Invalid mode!" << endl;
             }
         } else if (polybiusMessage == 0) {
             cout << "Invalid message!" << endl;
         }
        
     } else {
         cout << "Invalid cipher!" << endl;
     }
     return;
 }
