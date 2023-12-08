#include "lists.h"
/**
 * dlistint_len - finds length of a doubly linked list
 * @h: head of doubly linked list
 * Return: length of double linked lists
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *start = h;

	if (h == NULL || h->next == NULL)
		return (0);
	while (start != NULL)
	{
		count++;
		start = start->next;
	}

	return (count);
}