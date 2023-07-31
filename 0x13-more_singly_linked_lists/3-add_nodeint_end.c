#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add node to end of list
 * @head: list head
 * @n: integer to be added
 * Return: address, otherwise NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		new->n = n;
		new->next = NULL;
		temp->next = new;

	}


	return (*head);
}
