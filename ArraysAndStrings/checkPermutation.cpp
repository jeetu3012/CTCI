/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "ArrayVectorString.h"

bool checkPermutation(string first, string second)
{
    string s1 = first;
    string s2 = second; 
    
    if (s1.length() != s2.length()) {
        cout<< "Unequal lengths of strings ";
        return false;
    }
    
    /* O( n logn ) */
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    if (s1 == s2) {
        cout << "The strings are permutations of each other" << endl;
        return true;
    } else {
        cout << "The strings are NOT permutations of each other" << endl;
        return false;
    }
}