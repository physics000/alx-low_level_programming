#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
int x, y, z;/*x represents the first number in each multiplication
							* operation, y represents the second number
							* z represents the result of the multiplication.
							*/

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');

			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');

				z = x * y;

				if (z <= 99)
					_putchar(' ');
				if (z <= 9)
					_putchar(' ');

				if (z >= 100)
				{
					_putchar((z / 100) + '0');
					_putchar(((z / 10)) % 10 + '0');
				}
				else if (z <= 99 && z >= 10)
				{
					_putchar((z / 10) + '0');
				}
				_putchar((z % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
