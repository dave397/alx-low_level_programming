#include "lists.h"

/**
 * add_dnodeint_end - add node to a end of doubly linked list
 * @head: head of doubly linked list
 * @n: number to be added to doubly linked list
 *
 * Return:  address of the new element, or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *start = *head;
	dlistint_t *last;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}

	new->n = n;

	if ((*head) == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}

	while (start != NULL)
	{
		last = start;
		start = start->next;
	}

	last->next = new;
	new->prev = last;
	new->next = NULL;

	return (new);
}