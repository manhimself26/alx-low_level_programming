/*
 * File: 100-set_string.c
 * Auth: Reward Mucheche
 */

#include "main.h"

/**
 * set_string - sets thevalue of a pointer to a char.
 * @s: the pointer
 * @to: the char
 */
void set_string(char **s, char *to)
{
	*s = to;
}

