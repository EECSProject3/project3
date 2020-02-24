/**
 * vigenere.cpp
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
#include <iostream>


string vigenereCipher(string original, string keyword, bool encrypt) {
    keyword = removeNonAlphas(keyword);
    keyword = toUpperCase(keyword);
        if (encrypt == 1) {
            int i, j;
            for (i = 0, j = 0; i < original.size(); ++i, ++j) {
                if (j >= keyword.length()) {
                            j = 0;
                           }
                if ((original.at(i) >= 'A' && original.at(i) <= 'Z') || (original.at(i) >= 'a' && original.at(i) <='z')) {
                original.at(i) = shiftAlphaCharacter(original.at(i), (keyword.at(j) - 'A'));

                } else {
                    j -= 1;
                }
        }
        } else if (encrypt == 0) {
            int k, m;
           for (k = 0, m = 0; k < original.size(); ++k, ++m) {
               if (m >= keyword.length()) {
                   m = 0;
               }
               if ((original.at(k) >= 'A' && original.at(k) <= 'Z') || (original.at(k) >= 'a' && original.at(k) <='z')) {
            original.at(k) = shiftAlphaCharacter(original.at(k), (-1 * (keyword.at(m) - 'A')));
               } else {
                   m -= 1;
               }
       }
    }
    return original;
}
