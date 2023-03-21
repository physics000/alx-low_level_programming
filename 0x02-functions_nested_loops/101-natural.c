#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			j += i; /** += means variable += value; so we want to increment j by
								* i
								*/
	}

	printf("%d\n", j);

	return (0);
}
