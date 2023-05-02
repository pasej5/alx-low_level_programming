#include <stdio.h>
#include "lists.h"

/**
 * print_listint - this function prints all the elements of a listint_t list
 * @h: head pointer to the function listint_t
 *
 * Return: the total number of nodes in linkint_t list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
