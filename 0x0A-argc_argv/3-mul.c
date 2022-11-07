/*
 * File: 3-mul.c
 * Auth: Reward Mucheche
 */

#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints the multiplication of two ntegers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return 0 if true 1m if false
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a *b);

		return (0);
	}

	printf("Error\n");
	return (1);
}

