#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * reverse_listint - Reverses a linked list.
 * @head: Pointer to the first element of the list.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
        listint_t *prev_node = NULL, *current_node = *head, *next_node;

        while (current_node != NULL) // Traverse the list until we reach the end.
        {
                next_node = current_node->next; // Store the address of the next node in a temporary variable.
                current_node->next = prev_node; // Update the next pointer of the current node to point to the previous node.
                prev_node = current_node; // Move the previous node pointer to the current node.
                current_node = next_node; // Move the current node pointer to the next node.
        }

        *head = prev_node; // Update the head pointer to point to the last node, which is now the first node.

        return (*head); // Return a pointer to the first node of the reversed list.
}

