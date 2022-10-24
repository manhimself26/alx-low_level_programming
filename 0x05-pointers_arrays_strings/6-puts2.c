#include "main.h"

/**
 * puts2 - prints one char out of 2 from a string.
 * @str: the string containing characters.
 */
void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}

