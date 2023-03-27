#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: the string reference
 * Return: Void
 * we use a loop to iterate through the string
 * and determine its length.
 * we use another loop to print ever
 * character in the second half of the string
*/

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)

	/* Move the index i to the middle of the string*/
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	/*Loop through the second half of the string and print each character.*/
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
