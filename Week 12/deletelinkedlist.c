/*
 * CS1111 pointer.c
 * Author: Thad Kustarz, Ian Ranstadler, Claire schultz, Austin Johnson
 * Email:twkustar@mtu.edu, austinjo@mtu.edu, claschul@mtu.edu, imransta@mtu.edu
 * 11/15/2024
 */

//Set up the code
#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
//Declare the Node
typedef struct Node {
        int data;
        struct Node* next;
};

int deleteLinkedList(Node **head, int index) {
        if (*head == NULL || index < 0) {
                return -1; // Failure: list is empty or index is out of bounds
        }

        Node *temp = *head;
        if (index == 0) {
                *head = temp->next; // Change head
                free(temp); // Free old head
        return 0; // Success
        }

        // Find the previous node of the node to be deleted
        for (int i = 0; temp != NULL && i < index - 1; i++) {
                temp = temp->next;
        }

        // If the index is out of bounds
        if (temp == NULL || temp->next == NULL) {
                return -1; // Failure
        }

        // Node temp->next is the node to be deleted
        Node *next = temp->next->next;
        free(temp->next); // Free the node
        temp->next = next; // Unlink the deleted node from the list

        return 0; // Success
}
