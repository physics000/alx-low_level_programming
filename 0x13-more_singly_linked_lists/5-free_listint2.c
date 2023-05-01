#include "lists.h"
/**
 * free_listint2 - frees a linked list and sets the head pointer to NULL
 *
 * @head: a pointer to a pointer to the head of the linked list
 *
 * Return:
 */

void free_listint2(listint_t **head)
{
	listint_t *cursor;
	listint_t **temp = head;

	if (temp != NULL)
	{
		while (*head != NULL)
		{
			cursor = *head;
			free(cursor);
			*head = (*head)->next;
		}

	*temp = NULL;
	}
}
