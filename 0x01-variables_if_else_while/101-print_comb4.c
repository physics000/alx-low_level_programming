#include <stdio.h>

/**
 * main - Entry point
 * Description : Write a program that prints all possible different
 * combinations of three digits.
 * Numbers must be separated by ,, followed by a space
 * 012, 120, 102, 021, 201, 210 are considered the same
 * combination of the three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;
for (i = 48; i <= 57; i++)
{
for (j = i + 1 ; j <= 57; j++)
{
for (k = j + 1 ; k <= 57; k++)
{
putchar(i);
putchar (j);
putchar (k);
if ((i == 56) && (j == 57) && (k == 57))
break;
putchar(',');
putchar (' ');
}
}
}
putchar('\n');
return (0);
}
