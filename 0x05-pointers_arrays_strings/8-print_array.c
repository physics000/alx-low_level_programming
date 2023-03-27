#include "main.h"
#include <stdio.h>

/**
 * print_array - print `n` elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Return: Void
 * process : we take an array of integers and an integer `n` as inputs
 * we use a loop to iterate through the first `n` elements
 * of the array
 * we use the printf() function to print each element
 * we also print a comma and space after each element
 * , except for the last one.
*/

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
