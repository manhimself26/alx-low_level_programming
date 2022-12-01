#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of listint_t
 * @head: head of listint_t
 * @n: new element in the list
 * Return: the address of the new element, or NULL if it fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *prev = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (prev == NULL)
	{
		*head = new;
		return (new);
	}
	while (prev->next)
		prev = prev->next;
	prev->next = new;
	return (new);
}

