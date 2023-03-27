#include "main.h"

/**
 * print_rev - function print a string in reverse
 * @s: parameter string
 * Return:Void
 * the process :first finding the length of the string using a
  * for loop, and then iterating through the string in reverse
	* order using a 2nd for loop, printing each character using the
  *_putchar() function.
  */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
