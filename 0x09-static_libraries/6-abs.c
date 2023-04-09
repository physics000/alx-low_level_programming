#include "main.h"
/**
 * _abs - Write a function that computes the absolute value of an integer
 *
 * @x: integer number
 *
 * Return: the absolute  value of the integer
*/

int _abs(int x)
{

	int k = -(x);

	if (x >= 0)
		return (x);
	else
		return (k);
}
