#include "main.h"
/**
* jack_bauer - prints every minute of the day of Jack Bauer
*								starting from 00:00 to 23:59.
*Return
*/

void jack_bauer(void)
{
int a, b;   /*a represent houres and b represent minutes */

a = 0;
	while (a <= 23)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
		}
	a++;
		}
}
