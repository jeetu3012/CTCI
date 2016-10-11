/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jibhandi
 *
 * Created on October 8, 2016, 11:45 AM
 */

#include <cstdlib>
#include "List.h"

using namespace std;

int main(int argc, char** argv) 
{   
    List myList;
    List myList2;
    
    myList.append(6);
    //myList.display();
    
    myList.pop();
    myList.push(2);
    myList.push(3);
    myList.push(4);
    myList.push(5);
    myList.display();
    
    myList.pop();
    myList.display();
    myList.insertAtPos(10, 4);
    myList.display();
    
    myList2.push(90);
    myList2.push(99);
    myList2.display();
    
    myList.mergelists(myList, myList2);
    myList.display();
    
    cout<<endl;
    cout << "len = " << myList.len(); 
    return 0;
}