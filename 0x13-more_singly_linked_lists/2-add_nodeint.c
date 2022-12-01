#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head: head of listint_t
 * @n: int to add in listint_t
 * Return: address of new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

