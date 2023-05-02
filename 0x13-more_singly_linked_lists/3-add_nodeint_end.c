#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list recursively
 *
 * @head: a pointer to a pointer to the head of the linked list
 * @n: the integer value to be stored in the new node.
 *
 * if the head is NULLthe list is empty
 * we allocate memory for a new node and assign its value
 * we assign the head to the new node
 * then we call the function with the next node as the head
 *
 * Return: The address of the new node on success, or NULL on failure.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	if (*head == NULL)
	{
		listint_t *new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = (NULL);
		*head = new_node;
		return (new_node);
	}

	return (add_nodeint_end(&((*head)->next), n));
}
