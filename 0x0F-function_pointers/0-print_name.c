#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: the name to be printed
 * @f: pointer to the function that prints
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}

