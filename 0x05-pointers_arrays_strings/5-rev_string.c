#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: the used string to beb reversed
 * Return: Void
 * 1st counting the length of the string
 * swapping characters from opposite ends of the string
 * until the midpoint is reached. The function modifies the
 * input string directly.
 */

void rev_string(char *s)
{
	int x, i, half; /**
									* x is the  length and half
									*repsent the midpoint of the string
									*/
	char temp;

	for (x = 0; s[x] != '\0'; x++)

	i = 0;
	half = x / 2;

	while (half--)
	{
		temp = s[x - i - 1];
		s[x - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
