#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of list
 * @h: node
 * Return: no of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	const list_t *temp;

	temp = h;

	while (temp->next != NULL)
	{
		if(temp->str != NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		nodes++;
		temp = temp->next;
	}

	printf("[%u] %s\n", temp->len, temp->str);
	nodes++;

	return (nodes);
}
