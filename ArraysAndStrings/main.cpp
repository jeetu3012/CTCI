/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jibhandi
 *
 * Created on July 17, 2016, 10:23 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <iterator>
#include "ArrayVectorString.h"

using namespace std;

void print_vector(vector<int> v) 
{
    vector<int>::iterator i;
    
    for (i = v.begin(); i!= v.end(); i++) {
        cout << *i;
    }
}

void print_vector(vector<string> v) 
{
    vector<string>::iterator i;
    
    for (i = v.begin(); i!= v.end(); i++) {
        cout << *i;
    }
}

/*
 * 
 */
int main(int argc, char** argv) 
{
    
    /* CTC Problem 1.1 */
    //isUnique(s1);
    
    /* CTC Problem 1.2 */
    string s1("cisco");
    string s2("ccoir");
    //bool x = checkPermutation(s1, s2);
    //cout << x;
    
    /*CTC problem 1.3*/
    string s3("hi how are you doing");
    //urlify(s3);
    
    string s4("NITI");
    checkPalindrome(s4);
    
    return 0;
}

