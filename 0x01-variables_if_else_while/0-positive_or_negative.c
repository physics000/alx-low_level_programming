#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
* Description :check the number positive or negative or zero
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* The code */
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
return (0);
}
