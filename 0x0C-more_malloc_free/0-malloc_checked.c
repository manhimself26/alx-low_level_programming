#include "main.h"
#include <stdlib.h>

/**
 * malloc_unchecked - allocates memory using malloc
 * @b - number of bytes to be allocated
 *
 * Return: pointer to be allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}

