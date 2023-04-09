#include "main.h"

/**
*_strchr - Returns a pointer to the first occurrence
*of the character c in the string s, or NULL if the
*character is not found
*
*@s:string targeted
*@c:character targeted
*
*Return: returns pointer to first occcurence of c
*/

char *_strchr(char *s, char c)
{
	unsigned int  i;

	i = 0;
	while ((s[i] != c) && (s[i] != '\0'))
		i++;
	if (s[i] == c)
		return (s + i);
		/**
		 *  By adding the i to the base address of the string s
		 * we can access the memory location
		 * of the i-th character in the string
		 */
	else
		return (NULL);
}
