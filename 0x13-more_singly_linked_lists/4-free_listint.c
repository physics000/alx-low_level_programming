#include "lists.h"
/**
 * free_listint - frees a linked list and sets the head pointer to NULL
 * @head: a pointer to the head of the linked list.
 *
 * we use recursion to free each node in the list
 * if  head is NULL  return to stop the recursion
 * otherwise wecall to free_listint with the next node
 * as the argumentand frees the current node before returning
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
	head = NULL;
}
