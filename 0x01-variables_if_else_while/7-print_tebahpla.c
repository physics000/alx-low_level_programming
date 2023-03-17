#include <stdio.h>

/**
 * main - Entry point
 * Description : reverse alphabet ,Decimal alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
char Alpha;
for (Alpha = 'z'; Alpha >= 'a'; Alpha--)
{
putchar(Alpha);
}
putchar('\n');
return (0);
}
