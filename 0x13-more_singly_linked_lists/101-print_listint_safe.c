#include "lists.h"
#include <stdio.h>

size_t count_unique_nodes(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * count_unique_nodes - Counts the number of unique nodes
 * @head: list head.
 * Return: 0 (no loop), otherwise unique loop length.
 */

size_t count_unique_nodes(const listint_t *head)
{
	const listint_t *slow, *fast;

	size_t nodes = 1;
	
	slow = head;
	fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next; 
		fast = fast->next->next;
		nodes++;

		if (slow == fast)
			return (nodes);
	}

	return (0);
}

/**
 * print_listint_safe - Prints a list  safely.
 * @head: head of the list.
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = count_unique_nodes(head);

	if (nodes == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodes++;
		}
	}

	else
	{
		while (index < nodes)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			index++;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
