/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "ArrayVectorString.h"

void urlify (string input_str)
{
    int spaces_count = 0;
    
    for (int i = 0; i < input_str.length(); i++) {
        if (input_str[i] == ' ') {
            spaces_count++;
        }
    }
   
    int new_len = input_str.length() + spaces_count*2;
    
    char new_str[new_len];
    
    for (int i = input_str.length(); i >=0; i--) 
    {
        if (input_str[i] == ' ') {
            new_str[new_len-1] = '0';
            new_str[new_len-2] = '2';
            new_str[new_len-3] = '%';
            
            new_len = new_len - 3;
            
        } else {
            new_str[new_len-1] = input_str[i];
            new_len = new_len - 1;
        }
    }
    
    cout << input_str << endl;
    cout << new_str;
}