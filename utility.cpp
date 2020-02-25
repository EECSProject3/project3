/**
 * utility.cpp
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
#include <iostream>


string toUpperCase(string original) {
    for (int i = 0; i < original.size(); i++) {
        if (original.at(i) >= 'a' && original.at(i) <= 'z') {
            original.at(i) = original.at(i) - 32;
    }
    }
    return original;
}

string removeNonAlphas(string original) {
    string newString = "";
    for (int i = 0; i < original.size(); i++) {
        if (((original.at(i) >= 'A' && original.at(i) <= 'Z')
              || (original.at(i) >= 'a' && original.at(i) <= 'z'))) {
            newString += original.at(i);
        }
    }
    return newString;
}

 string removeDuplicate(string original) {
     string noDupes = "";
     for(int i = 0; i < original.length(); i++) {
         int j;
         for(j = 0; j < i; j++) {
             if(original[i] == original[j])  {
                 break;
             }
         }
         if(j == i) {
             noDupes += original[i];
         }
     }
     return noDupes;
 }

int charToInt(char original) {
       int nonChar = original - '0';
       return nonChar;
}

////////////////////////////////////////////////////////////////////////////////
// Do not touch code below. ////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void printGrid(const char grid[SIZE][SIZE]) {
    for (int col = 0; col < SIZE; col++) {
        cout << " ---";
    }
    cout << endl;
    for (int row = 0; row < SIZE; row++) {
        cout << "| ";
        for (int col = 0; col < SIZE; col++) {
            cout << string(1, grid[row][col]) + " | ";
        }
        cout << endl;
        for (int col = 0; col < SIZE; col++) {
            cout << " ---";
        }
        cout << endl;
    }
}
