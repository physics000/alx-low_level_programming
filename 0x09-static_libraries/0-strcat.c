#include "main.h"

/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int deslen = 0;
	int srclen = 0;
	int i;

for (i = 0; dest[i] != '\0'; i++)
	deslen++;
for (i = 0; src[i] != '\0'; i++)
	srclen++;
for (i = 0; i <= srclen; i++)
	dest[deslen + i] = src[i];

return (dest);
}
