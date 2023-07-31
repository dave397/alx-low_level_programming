#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all element in list
 * @h: head of list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;

	int count = 0;

	temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}

	return (count);
}
