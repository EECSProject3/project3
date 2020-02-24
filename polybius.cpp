/**
 * polybius.cpp
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


#include "polybius.h"
#include "utility.h"
#include <string>
#include <iostream>

using namespace std;


void fillGrid(char grid[SIZE][SIZE], string content) {
    int contentCount = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            grid[i][j] = content.at(contentCount);
            contentCount++;
        }
    }
}



string mixKey(string key) {
  
    return "";
}


string findInGrid(char c, char grid[SIZE][SIZE]) {
    // TODO: implement

    // returning a string to avoid compile error
    return "";
}

string polybiusSquare(char grid[SIZE][SIZE], string key, string original, bool encrypt) {
    // TODO: implement

    // returning a string to avoid compile error
    return "";
}
