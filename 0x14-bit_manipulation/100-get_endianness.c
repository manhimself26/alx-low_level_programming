#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: if big-endian -0,if little -1
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}

