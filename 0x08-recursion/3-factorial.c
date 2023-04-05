#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 *
 * @n:the number to find the factorial
 *
 * Return:  the factorial number
 * we declare integer i so we calcul the factorial of a number
 * thr formul of factorial in math is this [!n = n * !(n - 1)]
*/
int factorial(int n)
{
	int i;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	i = n * factorial(n - 1);
		return (i);
}
