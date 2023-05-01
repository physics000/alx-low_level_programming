#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 *
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoi, *h;

	tortoi = h = head;
	while (tortoi && h && h->next)
	{
		tortoi = tortoi->next;
		h = h->next->next;
		if (tortoi == h)
		{
			tortoi = head;
			break;
		}
	}
	if (!tortoi || !h || !h->next)
		return (NULL);
	while (tortoi != h)
	{
		tortoi = tortoi->next;
		h = h->next;
	}
	return (h);
}
