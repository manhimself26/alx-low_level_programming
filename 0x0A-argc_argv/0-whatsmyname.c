/*
 * File: 0-whatsmyname.c
 * Auth: Reward Mucheche
 */

#include <stdio.h>
#include "main.h"
/**
 * main - prints program name ,followed by new line
 * @argc: number of arguments supplied to the program
 * @argv: an array of pointers to the arguments.
 *
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}

