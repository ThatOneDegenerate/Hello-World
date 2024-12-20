/*
* Implementation of indexOfLinkedList
*
* @Ian Ranstadler, Claire Schulz, Austin Johnson
* @imransta@mtu.edu
*
* @date 11/15/2024
*/

#include "linkedlist.h"
#include <stddef.h>

/*
* Gets the index of a value.
*
* @param head: The first node of the list.
* @param value: The value to search for.
*
* @return the index found, or -1 on failure.
*/

int indexOfLinkedList(Node *head, int value){

Node *current = head;
int count = 0;

while(current !=NULL){
        if (current->value == value){
                return count;
        }

current = current->next;
count++;

}

return -1;
}
