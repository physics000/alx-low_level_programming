#include "lists.h"

/**
 * free_list - frees a list
 *
 * @head: head of the linked list.
 *
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *the_node;
/*the_node here refer to the current node we at*/
	while ((the_node = head) != NULL)
	{
		head = head->next;
		free(the_node->str);
		free(the_node);
	}
}
