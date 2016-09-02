/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include<stdbool.h>
#include "ArrayVectorString.h"

/*
 * Big O(n) solution
 */
void isUnique (string s)
{
    bool arr[128] = {false};
    bool unique = true;
    
    for (int i=0; i<s.length(); i++) {
        if (arr[(int)s[i]]) {
            unique = false;
            cout << "Repeated character is " << s[i] << endl;
            break;
        }
        arr[(int)s[i]] = true;
    }
    
    if (unique) {
        cout << "String has Unique characters " << endl;
    } else {
        cout << "String does not have Unique characters " << endl;
    }
}

/*
 *  Big O n^2
 */
void isUnique_2 (string s)
{
    bool is_unique = true;
    
    for (int i=0; i<s.length(); i++) {
        for (int j=i+1; j<s.length(); j++) {
            if(s[i] == s[j]) {
                is_unique = false;
            }
        }
    }
    cout << is_unique <<endl;
    
    cout<< (int) s[1];
}