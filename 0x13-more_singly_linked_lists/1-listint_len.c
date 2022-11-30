#include "lists.h"

/**
 * listint_len - prints all elements of listint_t
 * @h: element of listint_t
 * Return: number of elements of listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; ++i)
	{
		h = h->next;
	}
	return (i);
}

