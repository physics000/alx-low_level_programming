#include "main.h"

/**
 * _puts_recursion - function  that prints a string
 *			followed by a new line.
 * @s:string to be printed
 *
 * Returns: Void
 * we check if the s not a null character that we print
 *  the string using putchar and then it  calls itself
 *  recursively using puts_recursion
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
