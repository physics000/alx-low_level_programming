#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long i = 0, j = 1, S;
	float T_S;

	while (1)
	{
		S = i + j;
		if (S > 4000000)
			break;

		if ((S % 2) == 0)
			T_S += S;

		i = j;
		j = S;
	}
	printf("%.0f\n", T_S);

	return (0);
}
