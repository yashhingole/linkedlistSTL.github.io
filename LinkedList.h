// LinkedList.h

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList();
    ~LinkedList();

    void insertNode(int value);
    void deleteNode(int value);
    void display();
};

#endif
