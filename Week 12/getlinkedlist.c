/*
 * Implementation of getLinkedList
 *
 * @author Claire Schultz
 * @email claschul@mtu.edu
 *
 * @date 11/15/2024
 */

#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * Gets a value from a linked list.
 *
 * @param head: The first node of the list.
 * @param index: The index to get the value of.
 * @param out: location to store the value from the list.
 *
 * @return: 0 on success, -1 on failure (out of bounds).
 */
int getLinkedList(Node *head, int index, int *out)
{
        Node *current = head;
        int count = 0;

    while (current != NULL) {
        if (count == index) {
           *out = current->value;
           return 0;
        }
        current = current->next;
        count++;
    }

    return -1;
}
~                                                                                                     
~                                                                                                     
~                                                                                                     
~                                                                                                     
~                                                                                                     
~                                                                                                     
~                                                      
