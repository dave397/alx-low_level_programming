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

	while (temp)
	{
		if(!temp->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
