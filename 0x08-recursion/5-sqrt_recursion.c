/*
 * File: 5-sqrt_recursion.c
 * Auth: Reward Mucheche
 */

#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - finds natural square root of an inputted number.
 * @num: number to be found square root of.
 * @root: root to be tested.
 *
 * Return: if the number has a natural square root -square root
 * if the number does not have a natural square root - -1.
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
 * _sqrt_recursion -- returns the natural square root of a number
 * @n: the number to return square root of
 * 
 * Return: if n is a natural square root - the natural square root of n
 * if n does not have a square root - -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	
	if (n == 1)
		return(1);

	return (find_sqrt(n, root));
}

