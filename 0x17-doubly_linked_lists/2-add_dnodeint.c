#include "lists.h"

/**
 * add_dnodeint - add node to a start of doubly linked list
 * @head: head of doubly linked list
 * @n: number to be added to doubly linked list
 * Return: ddress of the new element, or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if ((*head) != NULL)
	{
		(*head)->prev = new;
	}

	*head = new;

	return (new);
}
