#include "main.h"

/**
 * puts2 - function to print every other character of a string
 * starting with the first character
 * @str: parametr string
 * Return: void
 * process : we use a loop to iterate through the string and
 * we check if the index is even to determine whether
 *  to print
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)			/*Check if the index is even*/
		{
		_putchar(str[i]);
		}
	i++;
	}

	_putchar('\n');
}
