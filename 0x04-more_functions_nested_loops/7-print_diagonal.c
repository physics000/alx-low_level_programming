#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 *
 * @n: number of times the character \ should be printed
 *
 * Return: void
*/

void print_diagonal(int n)
{
	int i, j;

	i = 0;
	if (n <= 0)
		_putchar('\n');
	else
	{
	while (i <= n)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
	}
		_putchar(92);/* 92 is '\' in characters*/
		_putchar('\n');
		i++;
	}
	}
}
