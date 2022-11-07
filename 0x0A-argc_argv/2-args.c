/*
 * File: 2-args.c
 * Auth: Reard Mucheche
 */
#include <stdio.h>
#include "main.h"

/**
 * mai - pritnt the name of program.
 * @argc: count arguments.
 * @argv: arguments
 *
 * Return: always 0
 */
int main(int  argc, char **argv)
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}

