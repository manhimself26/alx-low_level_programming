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
int main(int  argc, char *argv[])
{
	/*declaring variables*/

	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
			printf("%s\n", argv[count]);
	}
}

