#include "lists.h"

/**
 * add_dnodein - add node to a start of doubly linked list
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

	new->prev = NULL;
	new->next = *head;
	(*head)->prev = new;
	*head = new;

	return (new);
}