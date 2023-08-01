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

	int number;

	temp = *head;

	if (*head == NULL)
		return (0);

	number = temp->n;
	temp = temp->next;
	free(*head);
	*head = temp;
	return (number);
}
