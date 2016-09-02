/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArrayString.h
 * Author: jibhandi
 *
 * Created on August 31, 2016, 9:00 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <iterator>
#include <algorithm>

#ifndef ARRAYSTRING_H
#define ARRAYSTRING_H

using namespace std; 
extern void string_builder();
extern void print_vector(vector<string> v);
extern void print_vector(vector<int> v);
extern void isUnique(string);
bool checkPermutation(string, string);
void urlify(string);
void checkPalindrome(string);

#endif /* ARRAYSTRING_H */

