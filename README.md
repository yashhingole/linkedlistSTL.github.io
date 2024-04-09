# C++ LinkedList Library

This C++ library provides basic functionalities to manipulate a singly linked list, including insertion and deletion of nodes.

## Features

- Insertion of nodes at the end of the linked list.
- Deletion of nodes with a specific value from the linked list.
- Simple and easy-to-use interface.

## Usage

To use this LinkedList library in your C++ project, follow these steps:

1. Copy the `LinkedList.h` and `LinkedList.cpp` files into your project directory.
2. Include the `LinkedList.h` header file in your C++ source files where you want to use the LinkedList functionality.
3. Create an instance of the `LinkedList` class and use its methods to manipulate the linked list.

Here's an example of how to use the LinkedList library:

```cpp
#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList myList;

    myList.insertNode(5);
    myList.insertNode(10);
    myList.insertNode(15);
    myList.insertNode(20);

    std::cout << "Original List: ";
    myList.display();

    myList.deleteNode(10);

    std::cout << "List after deleting 10: ";
    myList.display();

    return 0;
}
