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
