#include "main.h"

/**
 * _strlen - returns length of a string.
 * @str: the string to get length of.
 *
 * Return: length of string
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}

