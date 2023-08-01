#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deleting at index
 * @head: list head
 * @index: index to remove
 * Return: 1 (success), othwewise -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *new;

	unsigned int count = 0;

	temp = *head;

	if (*head == NULL)
		return (-1);

	while (temp)
	{
		if ((count + 1) == index)
		{
			new = temp->next;
			temp->next = new->next;
			free(new);
			return (1);
		}
		count++;
		temp = temp->next;
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	return (-1);
}
