#include "main.h"
/**
 * print_sign - a function to print the sign of a number
 *
 * @n: number of the sign will be printed
 *
 * Return:	1 if the number is positif
 *					0 if the number is zero
 *					-1 if the number is negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
