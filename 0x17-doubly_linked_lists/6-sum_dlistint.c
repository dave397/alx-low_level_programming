#include "lists.h"

/**
 * sum_dlistint - sums up linked list
 * @head: head of doubly linked list
 *
 * Return: the sum of all the data (n) of list, otherwise 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *holder = head;

	if (head == NULL)
		return (0);

	while (holder != NULL)
	{
		sum += holder->n;
		holder = holder->next;
	}

	return (sum);
}