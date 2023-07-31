#include "lists.h"

/**
 * listint_len - counts element in list
 * @h: list head
 * Return: number of element in list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;

	unsigned int count = 0;

	temp = h;

	while (temp)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}
