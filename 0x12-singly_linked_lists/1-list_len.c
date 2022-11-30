#include "lists.h"

/**
 * list_len - finds number of elements in linked list list_t
 * @h: the linked list_t
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}

