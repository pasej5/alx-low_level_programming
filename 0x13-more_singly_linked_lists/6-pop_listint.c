#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: pointer to pointer to the first element of the list
 *
 * Return: The data stored in the head node, or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);
	return (data);
}

