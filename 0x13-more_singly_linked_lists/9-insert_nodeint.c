#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add node
 * @head: list head
 * @n: integer to insert
 * Return: address, otherwise NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = (listint_t *)malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if (*head == NULL)
	{
		temp->next = NULL;
	}
	else
	{
		temp->next = *head;
	}

	*head = temp;
	return (*head);
}

/**
 * insert_nodeint_at_index - insert node at position
 * @head: list head
 * @idx: position for insertion
 * @n: value to be inserted
 * Return: pointer, otherwise NULL
 */

listint_t *insert_nodeint_at_index(
	listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new;

	unsigned int count = 0;

	new = (listint_t *) malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	temp = *head;

	while (temp)
	{
		if ((count + 1) == idx)
		{
			new->n = n;
			new->next = temp->next;
			temp->next = new;
			return (*head);
		}

		temp = temp->next;
		count++;
	}

	if (idx == 0)
		add_nodeint(head, n);

	return (NULL);
}
