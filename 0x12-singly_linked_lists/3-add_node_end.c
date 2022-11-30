#include "lists.h"
#include <string.h>

/**
 * add_node_end - append node to list pointed
 * @head: pointer to pointer
 * @str: string to initialize new node
 * Return: new or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t i = 0;
	list_t *last = *head;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->str = strdup(str);
	if (new->str)
		while (str[i])
			++i;
	new->len = i;
	if (last)
	{
		while (last->next)
			last = last->next;
		last->next = new;
	}
	else
		*head = new;
	return (new);
}

