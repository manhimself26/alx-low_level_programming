#include "lists.h"
/**
 * free_listint - frees list listint_t
 * @head: head of listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *prev;

	while (head)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
}

