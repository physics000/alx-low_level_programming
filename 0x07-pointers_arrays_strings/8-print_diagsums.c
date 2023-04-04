#include "main.h"

/**
*print_diagsums -  a function that prints the sum of
* the two diagonals of a square matrix of integers.
*@a:matrix to be summed
*@size:size of the matrix
*/

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0; 
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		/*we move the pointer to the next element in the diagonal*/
		a = a + size;
	}

	/* we move the pointer back to the start of the diagonal*/
	a = a - size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		/* move the pointer to the next element in the diagonal*/
		a = a - size;
	}

	printf("%d, %d\n", sum1, sum2);
}
