/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   List.h
 * Author: jibhandi
 *
 * Created on October 5, 2016, 10:01 AM
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <iterator>
#include <algorithm>

#ifndef LIST_H
#define LIST_H

using namespace std;

struct node {
    int data;
    node *next;
};

class List { 
    node *head; 
	
public:
    List() {
        head = NULL;
    }
    
    List(List &b) {
        head = b.head;
    }
    
    /*
    ~List() {
        while (head != NULL) {
            node *n = head->next;
            delete head;
            head = n;
        }
    } */
    int 	len();
    void        display();
    node*       createNode(int);
    void        push(int);
    void        append(int);
    void        deleteList();  
    void        pop();
    void        insertAtPos(int elem, int pos);
    void        mergelists(List, List);
};

#endif /* LIST_H */

