#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create-array - creates an array of chars, ad initializes it
 * @size: size of array.
 * @c: character to initialize with.
 *
 * Retun: pointer
 */
char *create_array(unsigned int size, char c);
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}


	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}

	else
	{
		positio = 0;
		while (position < size)
		{
			*(buffer + position) = c;
			position++;
		}

		return (buffer);
	}
}

