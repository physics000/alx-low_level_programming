#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list recursively
 * @h: pointer to the head node of the list
 * Return: The number of nodes in the list
 *
 *	my logic for the code :
 * kinda simalair to the task 0
 * i used recursion to count the numbe rof nodes in the list
 * when h is NULL we returns 0 to stop the recursion
 * we add 1 to the count returned by the recursive call and
 * returns the total count
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL) /*empty list*/
		return (0);

	return (1 + listint_len(h->next));
}
