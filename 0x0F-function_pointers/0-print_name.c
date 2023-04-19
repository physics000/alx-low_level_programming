#include "function_pointers.h"

/**
 * print_name -  a function that prints a name
 *
 * @name: name to print
 *
 * @f: function that prints name
 *
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
