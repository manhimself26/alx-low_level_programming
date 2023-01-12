#include "lists.h"

/**
 * add_dnodeint - adds a new node at beginning of dlistint_t
 * @head: pointer to the head of dlistint_t
 * @n: integer
 * Return: if the function fails - NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}

