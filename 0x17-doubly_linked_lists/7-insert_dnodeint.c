#include "lists.h"

/**
 * add_dnodeint_end - inserts a new node at a given position.
 * @h: head of doubly linked list
 * @idx: index for insertion into doubly linked list
 * @n: number to be added to doubly linked list
 *
 * Return:  address of the new node, or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int track = 0;
	dlistint_t *start = *h;
	dlistint_t *last = NULL;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if (*h == NULL && idx == 0)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}

	while (start != NULL && track <= idx)
	{
		if (track == idx)
		{
			if (last != NULL)
				last->next = new;
			new->prev = last;
			start->prev = new;
			new->next = start;
			return (new);
		}
		last = start;
		start = start->next;
		track++;
	}

	return (NULL);
}