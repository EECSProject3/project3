/**
 * polybius.cpp
 * Project UID e98fd45ccce9d7195e89e6171a5451f2
 *
 * Shayla Coombs, Mary Volger
 * sjcoombs,
 *
 * EECS 183: Project 3
 * Winter 2020
 *
 * <#description#>
 */


#include "polybius.h"
#include <string>
using namespace std;


void fillGrid(char grid[SIZE][SIZE], string content) {
    for(int i = 0;  i  < content.length();  i++) {
        printGrid(grid);
    }
}


string mixKey(string key) {
    string removing = key  + ALNUM;
    return removeDuplicate(removing);
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
