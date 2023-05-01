#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	tortoise = hare = head;
	do {
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			tortoise = head;
			break;
		}
	} while (tortoise && hare && hare->next);

	if (!tortoise || !hare || !hare->next)
		return (NULL);

	do {
		tortoise = tortoise->next;
		hare = hare->next;
	} while (tortoise != hare);

	return (hare);
}
