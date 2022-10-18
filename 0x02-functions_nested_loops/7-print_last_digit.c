#include "main.h"

/**
 * print_last_digit - prints last digit of number.
 * @n: number in queston
 *
 * Return: value of last digt.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
