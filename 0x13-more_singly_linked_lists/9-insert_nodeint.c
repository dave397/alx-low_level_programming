#include <stdlib.h>
#include "lists.h"

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
	{
		new->n = n;
		new->next = NULL;
		*head = new;
		return (*head);
	}

	return (NULL);
}
