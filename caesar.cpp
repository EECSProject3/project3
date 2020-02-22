/**
 * caesar.cpp
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

#include "caesar.h"
#include <iostream>

char shiftAlphaCharacter(char c, int n) {
    if (c >= 'a' && c <= 'z') {
        c = (c - 'a' + n) % 26 + 'a';
    } else if (c >= 'A' && c <= 'z') {
         c = (c - 'A' + n) % 26 + 'A';
    }
    return c;
}

 string caesarCipher(string original, int key, bool encrypt) {
     if (encrypt == 1) {
         for (int i = 0; i < original.size(); i++) {
             original.at(i) = shiftAlphaCharacter(original.at(i), key);
         }
         } else if (encrypt == 0) {
             for (int j = 0; j < original.size(); j++) {
             original.at(j) = shiftAlphaCharacter(original.at(j), -key);
             }
         }
     return original;
 }

