/*
 * File: 4-strpbrk.c
 * Auth: Reward Mucheche
 */

#include "main.h"

/**
 * _strbrk - searches a string for any of set of bytes.
 * @s: string to be searched.
 * @accept: set of bytes to be searched for.
 *
 * Return: if a set is matched - pointer to matched byte.
 *	if no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}

