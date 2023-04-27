#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *
 * @head: pointer to the head of the list
 *
 * @str: string to be added
 *
 * Return: returns the address to the new element or NULL
 *		if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	char *x2; /*iwill reprsent x as duplacator*/
	int len = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	x2 = strdup(str); /*strdup dublacate the string*/
	if (x2 == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[len])
		len++;

	new->str = x2;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
