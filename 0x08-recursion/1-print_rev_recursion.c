#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse
 *
 * @s: string to print
 *
 * Returns: Void
 *
 *
 * we check if s not a null character
 * then we make a recursive call to itself with
 * the next character in the string and during the return
 * each character in the string is printed in reverse order
 * and then we print the next character
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
