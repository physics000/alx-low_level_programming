#include "lists.h"

/**
 * print_listint - Prints all the elements of
 *		a listint_t list recursively.
 *
 * @h: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 *
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count += 1;
		current = current->next;
	}
	return (count);
}
