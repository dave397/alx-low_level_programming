#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees linked list
 * @head: head of list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head != NULL)
	{

		while (*head)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
		*head = NULL;
	}
}
