#include "main.h"

/**
 * strcat - concatenates the string pointed to by @src, including the
 *          terminating null byte, to the end of string @dest
 * @dest: pointer to the string to be concatenated.
 * @src: source of string to append to @dest.
 *
 * Return: A pointer to the string @dest
 */
char *_strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}

