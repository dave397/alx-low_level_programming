#include "lists.h"

/**
 * get_nodeint_at_index - et node
 * @head: list head
 * @index: node to return
 * Return: index.otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *temp;

	temp = head;

	while (temp)
	{
		if (i == index)
			return (temp);

		temp = temp->next;
		i++;
	}

	return (NULL);
}
