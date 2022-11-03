/*
 * File: 6-is_prime_number.c
 * Auth: Reward Mucheche
 */

#include "main.h"

int is_divisible(int num, int div);

/**
 * is_divisible - checks if a number is divisible.
 * @num: number to be checked.
 * @div: divisor.
 *
 * Return: if number is divisible -0
 * if not divisible - 1.
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

