#include "main.h"

/**
 * _strncat - concatenates two strings using at most
 * 	      an inputted number of bytes from @src.
 * @dest: string to append upon.
 * @src: string to be appended to dest.
 * @n: the number of bytes from src to be appended to dest.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;
	
	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}

