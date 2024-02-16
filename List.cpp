//
// Created by ADMIN on 15/02/2024.
//
#include "List.h"
#include <iostream>

List::List() {
    firstPtr = nullptr;
}

List::~List() {
    Node *tmpNode = firstPtr;
    while(tmpNode != nullptr){
        Node *nextPtr = tmpNode->next;
        delete tmpNode;
        tmpNode = nextPtr;
    }
}

void List::insertQueue(int value) {
    Node *newNode = new Node(value);
    if(firstPtr == nullptr){
        firstPtr = newNode;
        return;
    }
    Node *tmpNode = firstPtr;
    while(tmpNode->next != nullptr){
        tmpNode = tmpNode->next;
    }
    tmpNode->next = newNode;
}

void List::sortInsert(int value) {

    Node *newNode = new Node(value);
    if(firstPtr == nullptr){
        firstPtr = newNode;
        return;
    }

    Node *auxNode = firstPtr;
    while(auxNode->next != nullptr){
        Node *prevNode = auxNode;
        auxNode = auxNode->next;

        if(prevNode->data < newNode->data && newNode->data < auxNode->data){
            newNode->next = auxNode;
            prevNode->next = newNode;
        }
    }
}

void List::print() {
    Node *tmpNode = firstPtr;
    while (tmpNode != nullptr) {
        std::cout << tmpNode->data << " | ";
        tmpNode = tmpNode->next;
    }
}


