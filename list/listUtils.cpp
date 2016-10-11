/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "List.h"

/* Functions to implement 
 * 
 *   node	createNode(int elem);
 *   node 	push(int elem);
 *   node 	append(int elem);
 *   node 	insertAfter(int elem, int pos);
 *   node 	deleteNode(int elem);
 */

node* List::createNode (int elem)
{
    node *temp = new(node);
    temp->data = elem;
    temp->next = NULL;

    return temp;
}

void List::push (int elem)
{
    node *f = createNode(elem);
    
    if (this->head == NULL) {
        this->head = f;
        this->head->next = NULL;
    } else {
        f->next = this->head;
        this->head = f;
    }
}

void List::display()
{
    node *cur = this->head;
    
    if (this->head) {

        cout<<"Displaying elements of the list: "<<endl;

        while(cur->next != NULL) {
            cout << cur->data << "->";
            cur = cur->next;
        }
        cout << cur->data << endl;
    } else {
        cout<< "List is NULL"<<endl;
    }
}

void List::append(int elem) 
{
    node *f = createNode(elem);
    
    if (this->head) {
        node *cur = this->head;

        while(cur->next != NULL) {
            cur = cur->next;
        }

        cur->next = f;
    } else {
        this->head = f;
    }
}

void List::deleteList()
{
    node *cur = this->head;
    node *next_ptr = this->head;
    
    while(cur != NULL) {
        next_ptr = cur->next;
        delete(cur);
        cur = next_ptr;
    }
    this->head = NULL;
}

int List::len()
{
    int count = 0;

    if (!this->head) {
        return 0;
    }

    node *cur = this->head;

    while (cur != NULL) {
        count = count+1;
        cur = cur->next;
    }
    
    return count;
}

void List::pop()
{
    if (!this->head) {
        cout <<"nothing to pop"<<endl;
        return;
    }
    
    node *first = this->head;
    node *second = NULL;
    
    if (first->next != NULL) {
        second = first->next;
        this->head = second;  
    } else {
        this->head = NULL;
    }
    delete(first);
}

void List::insertAtPos(int elem, int pos)
{
    int count = 0;
    node *cur = this->head;
    node *f = createNode(elem);
    
    if (pos > this->len()) {
        cout<<"position to insert is larger than length" << endl;
        return;
    }
    
    if (pos == 0) {
        this->push(elem);
        return;
    }
    
    while (count != (pos - 1)) {
        cur = cur->next;
        count++;
    }
    
    f->next = cur->next;
    cur->next = f;
}

void List::mergelists(List a, List b)
{
    node *cur;
    
    if (b.head == NULL) {
        cout<<"Nothing to do";
        return;
    }

    if (a.head == NULL) {
        a.head = b.head;
    } else {        
        cur = a.head;
        
        while (cur->next!= NULL) {
            cur = cur->next;
        }
        cur->next = b.head;
    }
    
    delete(b.head);
}