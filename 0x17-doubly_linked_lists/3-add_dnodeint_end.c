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

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if ((*head) == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (start->next != NULL)
	{
		start = start->next;
	}

	start->next = new;
	new->prev = start;

	return (new);
}
