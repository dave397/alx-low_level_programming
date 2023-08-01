#include "lists.h"

/**
 * find_listint_loop - find loop
 * @head: list head
 * Return: address where loop starts, otherwise NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			return (slow);

	}

	return (NULL);
}
