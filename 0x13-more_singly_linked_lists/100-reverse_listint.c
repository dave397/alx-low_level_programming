#include "lists.h"

/**
 * reverse_listint - reverse list
 * @head: list head
 * Return: reverse linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;

	while (*head != NULL)
	{
		listint_t *next = (*head)->next;

		(*head)->next = prev;

		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
