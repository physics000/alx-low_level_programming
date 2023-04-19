#include "function_pointers.h"

/**
 * array_iterator - function that executes
 * a function given as a parameter on each element of an array.
 *
 * @array: array to be targeted
 *
 * @size: size of array
 *
 * @action: function to be axecuted
 *
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
