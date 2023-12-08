#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a linked list
 * @head: head of doubly linked list
 * @index: number to be added to doubly linked list
 *
 * Return:  the nth node of a linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *start = head;
	unsigned int tracker = 0;
	if (head == NULL)
		return (NULL);

	while (start != NULL && tracker <= index)
	{
		if (index == tracker)
			return (start);

		start = start->next;
		tracker++;
	}

	return (NULL);
}