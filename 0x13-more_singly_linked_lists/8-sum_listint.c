#include "lists.h"
/**
 * sum_listint - Returns the sum of all integer values in a linked list.
 *
 * @head: A pointer to the head of the linked list.
 *
 * Return: The sum of all integer values in the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (!head)
	{
		return (0);
	}

	sum = head->n;
	sum += sum_listint(head->next);

	return (sum);
}
