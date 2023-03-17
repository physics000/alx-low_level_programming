#include <stdio.h>

/**
 * main - Entry point
 * Description :program that prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
char hex;
for (hex = 48; hex <= 57; hex++)
{
putchar(hex);
}
for (hex = 97; hex <= 102; hex++)
{
putchar(hex);
}
putchar('\n');
return (0);
}
