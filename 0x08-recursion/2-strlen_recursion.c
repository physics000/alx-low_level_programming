#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: string to be returned
 *
 * Return: length of the string
 *
 * we declare integer length and we check
 * if s is not a null character
 * then we adds one to the length counter
 * and we make a recursive call to itself with
 * the next character in the string
*/

int _strlen_recursion(char *s)
{
	int length;

	length = 0;
	if (*s != '\0')
	{
		length++;
		length = length + _strlen_recursion(s + 1);
	}
	return (length);
}
