#include "main.h"

/**
 * swap_int - function to swap a with b
 * @a: number1
 * @b: number2
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int t; /* the t here is use so we can store the value of *a */

	t = *a;
	*a = *b;
	*b = t;
}
