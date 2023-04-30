#include "lists.h"

/**
 * print_listint - Prints all the elements of
 *				a listint_t list recursively.
 *
 * @h: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 *
 *	my logic for the code:
 * i will be using recursion
 * we give a condition to abase case
 * then we print the data of the current node
 * and recursive call to print the remaining nodes
 * and return the count
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	printf("%d\n", h->n);
	count++;
		return (1 + print_listint(h->next));
}
