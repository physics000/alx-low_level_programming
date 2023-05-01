#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position recursively
 *
 * @head: pointer to pointer to the head of the list
 *
 * @index: index of the node to be deleted
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (!*head)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = (*head)->next;

		free(*head);
		*head = temp;
		return (1);
	}

	return (delete_nodeint_at_index(&(*head)->next, index - 1));
}
