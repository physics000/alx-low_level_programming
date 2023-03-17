#include <stdio.h>

/**
 * main - Entry point
 * Description :program that prints all possible combinations of single-digit
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 48; n <= 57; n++)
{
putchar(n);
if (n == 57)
{
break;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
