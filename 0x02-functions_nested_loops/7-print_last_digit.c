#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 *
 *@x: the complete number
 *
 * Return: Value of the last digit k
*/

int print_last_digit(int x)
{
	int k;									/*to store the last digit in x*/

	k = x % 10;							/*modulo give the last digit */
	if (x < 0)
		k = -k;

	_putchar(k + '0');
	return (k);
}
