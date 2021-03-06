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
      string removing = key  + ALNUM;
      return removeDuplicate(removing);
  }



string findInGrid(char c, char grid[SIZE][SIZE]) {
    string newString = "";
    int row;
    int col;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (grid[i][j] == c) {
                row = i + '0';
                col = j + '0';
                newString += row;
                newString += col;
            }
        }
    }
    return newString;
}

string polybiusSquare(char grid[SIZE][SIZE], string key, string original, bool encrypt) {
    string final = "";
    fillGrid(grid, mixKey(key));
    if (encrypt == 1) {
        for (int i = 0; i < original.size(); i++) {
            if (original.at(i) != ' ') {
                final += findInGrid(original.at(i), grid);
            } else if (original.at(i) == ' ') {
                final += ' ';
            }
        }
        
    } else if (encrypt == 0) {
        for (int i = 0; i < original.size(); i++)
            if (original.at(i) == ' ') {
                final += ' ';
            } else {
                int row = charToInt(original.at(i));
                int col = charToInt(original.at(i + 1));
                final += grid[row][col];
                i = i + 1;
            }
        }
    return final;
}

