/*
 * File: 5-sqrt_recursion.c
 * Auth: Reward Mucheche
 */

#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number 
 * @n: the number to return the square root of.
 *
 * Return: if n has a natural sqaure root 
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}

