#include "lists.h"
/**
 * print_dlistint - prints all elements in a doubly linked list
 * @h: head of doubly linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *start = h;

	if (h == NULL || h->next == NULL)
		return (0);
	while (start != NULL)
	{
		printf("%d\n", start->n);
		count++;
		start = start->next;
	}

	return (count);
}