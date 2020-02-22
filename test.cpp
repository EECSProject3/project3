/**
* caesar.cpp
* Project UID e98fd45ccce9d7195e89e6171a5451f2
*
* Shayla Coombs, Mary Volger
* sjcoombs
*
* EECS 183: Project 3
* Winter 2020
*
* tests the functions defined in utility, caesar, vigenre and polybius. 
*/
#include "utility.h"
#include "caesar.h"
#include "vigenere.h"
#include "polybius.h"
#include <iostream>
#include <string>

using namespace std;

void testShiftAlphaCharacter();
void testToUpperCase();

void startTests() {
    testShiftAlphaCharacter();
    testToUpperCase();
    // Repeat for all other functions to be tested

    return;
}

void testShiftAlphaCharacter() {
    cout << "Now testing function ShiftAlphaCharacter()" << endl;
    cout << "Expected: 'a', Actual: '" << shiftAlphaCharacter('a', 0) << "'" << endl;
    cout << "Expected: 'b', Actual: '" << shiftAlphaCharacter('a', 1) << "'" << endl;
    cout << "Expected: 'd', Actual: '" << shiftAlphaCharacter('b', 2) << "'" << endl;
    return;
}

void testToUpperCase() {
    cout << "Now testing function toUpperCase()" << endl;
    cout << "Expected: HAPPY, Actual: '" << toUpperCase("happy") << "'" << endl;
    cout << "Expected: ROG2ER, Actual: '" << toUpperCase("rog2er") << "'" << endl;
    cout << "Expected: B, Actual: '" << toUpperCase("b") << "'" << endl;
    return;
    
}

void testRemoveNonAlphas() {
    cout << "Now testing function removeNonAlphas()" << endl;
    
}

void testRemoveDuplicate() {
    cout << "Now testing function removeDuplicate()" << endl;
    
}

void testCharToInt() {
    cout << "Now testing function charToInt()" << endl;
    
}

void testCaesarCipher() {
    cout << "Now testing function caesarCipher()" << endl;
    
}

void testVigenereCipher() {
    cout << "Now testing function vigenereCipher()" << endl;
    
}

void testFillGrid() {
    cout << "Now testing function fillGrid()" << endl;
    
}

void testMixKey() {
    cout << "Now testing function mixKey()" << endl;
    
}

void testFindInGrid() {
    cout << "Now testing function findInGrid()" << endl;
    
}

void testPolybiusSquare() {
    cout << "Now testing function polybiusSquare()" << endl;
    
}
