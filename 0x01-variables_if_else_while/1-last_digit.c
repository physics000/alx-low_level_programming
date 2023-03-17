#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
* Description :Last digit of number is 0,greater than 5 , less than 6 and not 0
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int dig;/*dig is the last digit*/
srand(time(0));
n = rand() - RAND_MAX / 2;
dig = n % 10;
if (dig > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, dig);
}
else if (dig == 0)
{
printf("Last digit of %d is %d and is 0\n", n, dig);
}
else if (dig < 6 && dig != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, dig);
}
return (0);
}
