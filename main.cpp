/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 brooks McKinley
 */

#include "std_lib_facilities.h"

using namespace std;

int main(void) {
    cout << "Enter a number: ";
    int testNumber;
    cin >> testNumber;
    cout << "The value " << testNumber << " is an " << (testNumber % 2 == 0 ? "even" : "odd") << " number." << endl;
}