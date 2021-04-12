#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

void push(Node** head, int data) {
    Node* newNode = malloc(sizeof(Node));
    Node* last = *head;

    // assign the data
    newNode->data = data;

    // new node is going to be last node, make next null
    newNode->next = NULL;

    // if list is empty
    if(head == NULL) {
        head = newNode;
        return;
    }

    // else traverse until empty
    while(last->next != NULL) {
        last = last->next;
    }

    // change next of last node
    last->next = newNode;

    return;
}

Node* pop(Node head) {
    Node* temp = malloc(sizeof(Node));
    return temp;
}

int length(Node head) {
    return 0;
}

void print(Node* head){
    while(head != NULL) {
        printf("%d", head->data);
        head = head->next;
    }
}

int main(void) {
    int size = 2;
    int data;

    Node* head = NULL;

    for(int i = 0; i < size; i++) {
        printf("Data to enter in slot: %d    ", i);
        scanf(&data);
        push(&head, data);
    }

    print(head);

    return 0;
}