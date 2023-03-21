#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	unsigned long i = 0, j = 1, S;
	unsigned long i_half1, i_half2, j_half1, j_half2;
	unsigned long half1, half2;

	for (a = 0; a < 92; a++)
	{
		S = i + j;
		printf("%lu, ", S);

		i = j;
		j = S;
	}

	i_half1 = i / 10000000000;
	j_half1 = j / 10000000000;
	i_half2 = i % 10000000000;
	j_half2 = j % 10000000000;

	for (a = 93; a < 99; a++)
	{
		half1 = i_half1 + j_half1;
		half2 = i_half2 + j_half2;
		if (i_half2 + j_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (a != 98)
			printf(", ");

		i_half1 = j_half1;
		j_half2 = j_half2;
		i_half1 = half1;
		j_half2 = half2;
	}
	printf("\n");
	return (0);
}
