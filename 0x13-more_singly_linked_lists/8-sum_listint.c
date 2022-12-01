#include "lists.h"
/**
 * sum_listint - returns the sum of all data (n) of listint_t
 * @head: head of listint_t
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

