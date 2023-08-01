#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes head node
 * @head: head node
 * Return: head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	temp = *head;

	if (*head == NULL)
		return (0);

	*head = temp->next;

	return (temp->n);
}
