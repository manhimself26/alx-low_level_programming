#include "lists.h"
/**
 * pop_listint - deletes the head of listint_t
 * @head: head of linked list
 * @Return: the head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *pop;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	pop = (*head);
	*head = (*head)->next;
	free(pop);
	return (n);
}

