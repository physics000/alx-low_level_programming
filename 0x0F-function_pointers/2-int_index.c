#include "function_pointers.h"

/**
 * int_index - function that  searches for an integer
 *@array: Array containing elements
 *@size: number of elements in array
 *@cmp: function which compare values
 *
 *Return: returns -1 if no element match
 *	  or when size is less than zero
 *	  return pointer to the first corresponding element
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);

	i++;
	}
	return (-1);

return (-1);
}
