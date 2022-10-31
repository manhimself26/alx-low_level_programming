/*
 * file: 3-strspn.c
 * auth: Reward Mucheche
 */

#include "main.h"

/**
 * _strspn - gets length of a prefix substring.
 * @s: the string to be searched.
 * @accept: prefix to be measured.
 *
 * Return: number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}

