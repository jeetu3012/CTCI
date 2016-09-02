/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "ArrayVectorString.h"

void checkPalindrome(string s)
{
    int length = (s.length()/2);
    cout << length << endl;
    bool palindrome = true; 
    
    for (int i=0; i<length; i++) {
        if (s[i] != s[s.length() -1 -i])
        {
            palindrome = false;
            break;
        }
    }
    cout << palindrome;
}