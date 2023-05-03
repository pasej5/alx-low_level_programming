#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


/**
 * pop_listint - this function deletes the head
 * @head: points to the head pointer
 *
 * Return: sets the head to NULL
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
