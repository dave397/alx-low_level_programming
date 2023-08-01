#include "lists.h"

/**
 * sum_listint - add list integers
 * @head: list head
 * Return: sum of list integer, otherwise 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
