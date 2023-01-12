#include "lists.h"

/**
 * dlistint_len - counts number of elements in linked list
 * @h: head of dlistint_t
 * Return: number of elements in dlistint_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

