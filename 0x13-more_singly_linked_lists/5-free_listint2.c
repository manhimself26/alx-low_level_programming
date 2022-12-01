#include "lists.h"

/**
 * free_listint2 - frees listint_t
 * @head: head of listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *prev;

	if (head == NULL)
		return;
	while (*head)
	{
		prev = *head;
		*head = (*head)->next;
		free(prev);
	}
}

