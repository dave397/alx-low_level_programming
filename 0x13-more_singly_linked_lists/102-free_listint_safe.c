#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: head of list
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int difference;
	listint_t *temp;

	if (*h == NULL)
		return (0);

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}

