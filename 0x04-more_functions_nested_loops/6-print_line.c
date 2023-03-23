#include "main.h"

/**
 * print_line - a function to draw a straight line
 *@n: the number of times the character _ should be printed
 * Return: Void
*/

void print_line(int n)
{
	int a;

	a = 0;
	while (a < n)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
