SinglyLinkedList
This repository contains the source code for a singly linked list data structure in C.

What is a singly linked list?
A singly linked list is a data structure that consists of a collection of nodes. Each node contains data and a pointer to the next node. The first node in the list is called the head, and the last node is called the tail.

Features
The singly linked list can be used to store any type of data.
The singly linked list can be easily expanded or contracted.
The singly linked list can be traversed in one direction only, from the head to the tail.
How to use
To use the singly linked list, you first need to create a new instance of the SinglyLinkedList struct. You can then add nodes to the list by calling the insert() method. To remove a node from the list, you can call the delete() method.

Examples
c
// Create a new singly linked list
SinglyLinkedList list;

// Add some nodes to the list
list.insert(1);
list.insert(2);
list.insert(3);

// Print the contents of the list
for (Node* node = list.head; node != NULL; node = node->next) {
printf("%d\n", node->data);
}

// Remove the first node from the list
list.delete(0);

// Print the contents of the list again
for (Node* node = list.head; node != NULL; node = node->next) {
printf("%d\n", node->data);
}
