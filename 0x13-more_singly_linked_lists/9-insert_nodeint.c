#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node with a specified integer value
 *				at the specified index in a linked list
 *
 * @head: a pointer to a pointer to the head of the linked list.
 * @idx: The index at which to insert the new node.
 * @n: The integer value to assign to the new node.
 *
 * Return: a pointer to the newly inserted node
 * or NULL if the insertion failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (idx == 0)
	{
		listint_t *new_node = malloc(sizeof(listint_t));

		if (!new_node)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
			return (new_node);
	}
	if (!*head)
		return (NULL);
	(*head)->next = insert_nodeint_at_index(&(*head)->next, idx - 1, n);
	if (!(*head)->next)
		return (NULL);
	return (*head);
}
