#include "main.h"
/**
* times_table - function that prints the 9 times table
*                 starting with 0
*/

void times_table(void)
{
int x, y, z;/*x represents the first number in each multiplication
							* operation, y represents the second number
							* z represents the result of the multiplication.
							*/

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');

		for (y = 1; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');

			z = x * y;

			if (z <= 9)
				_putchar(' ');
			else
				_putchar((z / 10) + '0');

			_putchar((z % 10) + '0');
		}
		_putchar('\n');
	}
}
