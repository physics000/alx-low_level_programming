#include "main.h"
/**
 * _isalpha - a function checks for alphabetic character
 * @c: parametr to check
 * Return: 1 if c is lowercase or uppercase, 0 otherxwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
