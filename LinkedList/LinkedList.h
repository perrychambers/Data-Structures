#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Linked List Operations
void push(Node** head, int data);
Node* pop(Node head);
int length(Node head);
void print(Node* head);

#endif LINKEDLIST_H