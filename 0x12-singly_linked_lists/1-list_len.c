#include "lists.h"

/**
 * list_len - function that returns  the number of elements
 * in a linked list_t list
 *
 * @h: header of the list
 *
 * Return: the number of elements
 *
*/

size_t list_len(const list_t *h)
{
	size_t node;

	node = 0;
	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
