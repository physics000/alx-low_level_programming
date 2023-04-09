#include "main.h"

/**
*_memset -  function that fills memory with
*			 a constant byte.
*@s:target
*@b: constant byte
*@n:number of byte
*Return: returns new value of target
*Process:	iterating through the memory
		*area using a for loop and setting
		*each byte to the value if b
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] =  b;
	/* set the byte at position i in memory area s to b*/
	}
	return (s);
}
