#include "lists.h"
#include <stdio.h>

/**
 * list_len - Return the number of elements in a linkedd list
 * @h: a pointer to the list
 *
 * Return: the returns the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
