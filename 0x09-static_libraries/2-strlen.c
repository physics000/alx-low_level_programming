#include "main.h"

/**
 * _strlen - funtion to return the length of string
 * @s: the string to be returned
 * Return: the length of the string  x
*/

int _strlen(char *s)
{
	int x = 0;			/* x represents the count of characters*/

	while (s[x] != '\0') /**
											*'\0' is a null character
											*so x will count the character
											*in the string in the pointer *s
											*intill he find a null character
											*/
	{
		x++;
	}
	return (x);
}
