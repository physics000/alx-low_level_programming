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
	const listint_t *current_node = h;
	size_t node_count = 0;

	if (current_node != NULL)
	{
	printf("%d\n", current_node->n);
	node_count += 1;
	node_count += print_listint(current_node->next);
	}
		return (node_count);
}
