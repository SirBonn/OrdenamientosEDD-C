//
// Created by ADMIN on 15/02/2024.
//

#ifndef ORDENAMIENTOS_LIST_H
#define ORDENAMIENTOS_LIST_H

class List{
private:
    struct Node{
        int data;
        Node *next;
        Node(int value): data(value), next(nullptr){}
    };
    Node *firstPtr{};
public:
    List();
    void insertQueue(int value);
    void sortInsert(int value);
    void print();
    ~List();
};

#endif //ORDENAMIENTOS_LIST_H
