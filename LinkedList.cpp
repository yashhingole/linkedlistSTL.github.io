// LinkedList.cpp

#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

void LinkedList::insertNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void LinkedList::deleteNode(int value) {
    if (head == nullptr) {
        std::cout << "List is empty. Cannot delete.\n";
        return;
    }

    Node* current = head;
    Node* prev = nullptr;

    // If the node to be deleted is the head node
    if (current->data == value) {
        head = current->next;
        delete current;
        return;
    }

    // Traverse the list to find the node with the given value
    while (current != nullptr && current->data != value) {
        prev = current;
        current = current->next;
    }

    // If the node is not found
    if (current == nullptr) {
        std::cout << "Node with value " << value << " not found.\n";
        return;
    }

    // Delete the node
    prev->next = current->next;
    delete current;
}

void LinkedList::display() {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
