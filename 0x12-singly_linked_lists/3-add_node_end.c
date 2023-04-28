#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 *
 * @head: head of the linked list
 *
 * @str: string to store in the list.
 *
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *the_node;
	size_t i;

/*the_node here refer to the current node we at*/
	i = 0;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	while (str[i])
		i++;

	new_node->len = i;
	new_node->next = NULL;
	the_node = *head;

	if (the_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (the_node->next != NULL)
			the_node = the_node->next;
		the_node->next = new_node;
	}

	return (*head);
}
