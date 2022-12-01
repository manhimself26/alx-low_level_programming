#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of listint_t
 * @head: head of listint_t
 * @index: nth node of listint_t
 * Return: pointer to list node or NULL if index is not present
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head; i++)
	{
		if (i == inex)
			return (head);
		head = head->next;
	}
	return (NULL);
}

