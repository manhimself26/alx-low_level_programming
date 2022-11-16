#include "function_pointers.h"
/**
 * array_iterator - funtion to execute a function
 * @array: array to be iterated
 * @size: number of iterations
 * @action: the action to be taken
 * Retur: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action == NULL || array == NULL)
	{
		return;
	}

	while (size > 0)
	{
		action(*array);
		array++;
		size--;
	}
}

