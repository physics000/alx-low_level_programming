#include "main.h"

/**
 * _puts - function to print the string
 * @str: parameter
 * Return: Void
*/

void _puts(char *str)
{
	int i;

for (i = 0; str[i] != '\0'; i++)
	_putchar(str[i]);
/*str[i] will check the index till it reach'\0'*/
_putchar('\n');
}
