/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <iterator>
#include "ArrayVectorString.h"

using namespace std; 

void stringbuilder(vector<string> vs) 
{
    string result;
    for (string word : vs) {
        result = word + result;
    }
    
    cout << "Final String = " << result;
}

void string_builder()
{
    vector<string> vs;
    
    vs.push_back("hi");
    vs.push_back("sup");
    vs.push_back("what");
    vs.push_back("are");
    stringbuilder(vs);
    print_vector(vs);
}
