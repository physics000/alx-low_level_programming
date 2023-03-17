#include <stdio.h>

/**
 * main - Entry point
 * Description : program that prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha;/*the alphabet*/
for(alpha = 'a'; alpha <= 'z'; alpha++)
  {
  putchar(alpha);
  }
  putchar('\n');
return (0);
}