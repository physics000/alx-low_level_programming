#include <stdio.h>

/**
 * main - Entry point
 * Description :program that prints all possible different
 * combinations of two digits.
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
for (i = 48; i <= 57; i++)
{
for (j = i + 1 ; j <= 57; j++)
{
putchar(i);
putchar (j);
if ((i == 56) && (j == 57))
{
break;
}
putchar(',');
putchar (' ');
}
}
putchar('\n');
return (0);
}
