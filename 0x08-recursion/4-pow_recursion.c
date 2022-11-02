/*
 * File: 4-pow_recursion.c
 * Auth: Reward Mucheche
 */

#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: number to be raised.
 * @y: the power.
 *
 * Return: the value of x raise to power of y.
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}

