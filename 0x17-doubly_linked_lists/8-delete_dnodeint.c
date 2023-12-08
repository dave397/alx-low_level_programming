#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a new node at a given position.
 * @head: head of doubly linked list
 * @index: index for insertion into doubly linked list
 *
 * Return: 1 if it succeeded, otherwise -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int track = 0;
	dlistint_t *cur = *head;
	dlistint_t *slower = NULL;

	if ((*head) == NULL)
		return (-1);

	while (cur != NULL && track <= index)
	{
		if (track == index)
		{
			if (slower != NULL)
				slower->next = cur->next;
			if (cur->next != NULL)
				(cur->next)->prev = slower;
			if (index == 0)
				*head = cur->next;
			return (1);
		}
		slower = cur;
		cur = cur->next;
		track++;
	}

	return (-1);
}