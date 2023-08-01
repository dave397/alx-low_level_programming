#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free list
 * @head: list head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
