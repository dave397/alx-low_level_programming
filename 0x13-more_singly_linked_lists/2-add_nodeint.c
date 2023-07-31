#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add node
 * @head: list head
 * @n: integer to insert
 * Return: address, otherwise NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = (listint_t *)malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if (*head == NULL)
	{
		temp->next = NULL;
	}
	else
	{
		temp->next = *head;
	}

	*head = temp;
	return (*head);
}
