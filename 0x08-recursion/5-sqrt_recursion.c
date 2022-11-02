/*
 * File: 5-sqrt_recursion.c
 * Auth: Reward Mucheche
 */

#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - returns the natural square root of a number 
 * @n: the number to return the square root of.
 *
 * Return: if n has a natural sqaure root 
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * sqrt_recursion - returns the natural square root of a number
 * @n: the number to return the square root of.
 *
 * Return: if n is natural number
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root);
}

