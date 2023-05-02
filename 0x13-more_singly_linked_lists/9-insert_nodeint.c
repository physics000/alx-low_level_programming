#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node with a specified integer value
 * at the specified index in a linked list.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 * @idx: The index at which to insert the new node.
 * @n: The integer value to assign to the new node.
 *
 * Return: A pointer to the newly inserted node
 * or NULL if the insertion failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	do {
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
		i++;
	} while (temp);

	free(new_node);
	return (NULL);
}
