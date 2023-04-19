#include "function_pointers.h"
#include <stdlib.h>

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
	if (name && f)

	f(name);
}
