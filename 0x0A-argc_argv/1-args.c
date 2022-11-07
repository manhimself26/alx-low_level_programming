/*
 * File: 1-args.c
 * Auth: Reward Mucheche
 */

#include <stdio.h>
#include "main.h"

/**
 * main - prints name of th program.
 * @argc: count arguments.
 * @argv: arrguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%i\n", argc - 1);

	return (0);
}

