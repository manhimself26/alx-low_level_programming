#include "main.h"

/**
 * _strpy - copies a string pointed to by @src including
 * @dest: buffer to copy string to
 * @src: source string to copy
 *
 * Return: A pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}

