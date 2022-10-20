#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: number to be checked
 *
 * Return: 1 if number is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}

