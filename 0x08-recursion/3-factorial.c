/*
 * File: 3-factorial.c
 * Auth: Reward Mucheche
 */

#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @: the number to be found factorial of.
 *
 * Return: if n > 0 - the factorial of n.
 *	if n < 0 - 1 to show an error.
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}

