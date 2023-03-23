#include "main.h"

/**
 * print_triangle - a function to draw triangle
 *@size: the zise of the square
 * Return: Void
*/

void print_triangle(int size)
{
		/*a represent row , b represent hashes , c represent spaces*/
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (c = size - a; c >= 1; c--)
			{
				_putchar(' ');
			}
			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
