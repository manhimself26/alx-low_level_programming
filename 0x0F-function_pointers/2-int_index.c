#include "function_pointers.h"
/**
 * int_index - search for an integer
 * @array: array of integers
 * @size: array size
 * @cmp: pointer to the comparing function
 * Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size, i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

