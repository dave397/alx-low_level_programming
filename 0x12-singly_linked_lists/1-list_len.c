#include <stdio.h>
#include "lists.h"

/**
 * list_len - count list
 * @h: node
 * Return: no of nodes
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	const list_t *temp;

	temp = h;

	while (temp)
	{
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
