/*
 * File: 100-is_palindrome.c
 * Auth: Reward Mucheche
 */

#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strle - returns the length of a string.
 * @s: string to be measured.
 *
 * Return: length of string
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}

