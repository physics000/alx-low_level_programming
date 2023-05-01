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
	listint_t *current_node = *head;

	if (!head || !current_node)
		return;

	if (current_node->next != NULL)
	{
		free_listint2(&(current_node->next));
	}

	free(current_node);
	*head = NULL;
}
