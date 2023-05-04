#include "main.h"

/**
 * get_endianness - check endianness
 *
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	int num = 1;
	char *ptr = (char *)&num;
	int is_little_endian = 0;

	do {
		if (*ptr == 1)
		{
			is_little_endian = 1;
			break;
		}
		ptr++;
	} while (ptr != ((char *)&num + sizeof(num)));

	return (is_little_endian);
}
