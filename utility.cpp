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
    for(int i = 0; i < original.size(); i++) {
        if(original[i] >= 97 && original[i] <= 122)
        {
          original[i] = original[i] - 32;
        }
    }
    return original;
}

string removeNonAlphas(string original) {
    // TODO: implement
    string alphas = "";
    for(int i = 0; i < original.size(); i++) {
        if((original[i] >= 'A' || original[i] <= 'Z') && (original[i]  >= 'a' &&  original[i] <=  'z')) {
            alphas += original[i];
        }
    }
    // returning 1a string to avoid compile error
    return alphas;
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
