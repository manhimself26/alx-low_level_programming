/*
 * File: 0-memset.c
 * auth: Reward Mucheche
 */

#include "main.h"

/**
 * memset - fills the first n bytes of memory area
 * pointed to by @s with the constant byte @c.
 * @s: the pointer to the memory are t be filled.
 * @c: the character to fill the memory area with.
 * @n: number of bytes to be filled.
 *
 * Return: a pointer to be filled memory area @s.
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}

