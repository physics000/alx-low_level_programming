#include "lists.h"

/**
 * add_node_end - function -  that adds a new node at
 *		the end of a list_t list
 *
 *@head: pointer to the head of the list
 *
 * @str: string to be added to the list
 *
 *Return: NULL in case of failure
 *	or address or the element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *x2;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	x2 = strdup(str);
	if (str == NULL)
	{
	/*release the memory blocks which are previously allocated*/
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = x2;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
