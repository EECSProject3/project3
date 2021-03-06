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
    if (n >= 0) {
    if (c >= 'a' && c <= 'z') {
        c = (c + n - 'a') % 26 + 'a';
    } else if (c >= 'A' && c <= 'Z') {
         c = (c + n - 'A') % 26 + 'A';
        }
    } else if (n < 0) {
        if (c >= 'a' && c <= 'z') {
            c = 'z' - (('z' - c - n) % 26);
        } else if (c >= 'A' && c <= 'Z') {
            c = 'Z' - (('Z' - c - n) % 26);
        }
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
             original.at(j) = shiftAlphaCharacter(original.at(j), (key * -1));
             }
         }
     return original;
 }


