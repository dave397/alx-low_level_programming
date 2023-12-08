#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list
 * @head: head of doubly linked list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *start = head;
	dlistint_t *next;

	while (start != NULL)
	{
		next = start->next;

		if (next != NULL)
		{
			next->prev = NULL;
		}

		free(start);
		start = next;
	}
}
