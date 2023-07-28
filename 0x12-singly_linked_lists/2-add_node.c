#include <stdio.h>
#include "lists.h"

/**
 * add_node - add new node at beginning
 * @head: head pointer
 * @str: string to add to head
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int nodes = 0;

	list_t *temp;

	while (str[nodes])
		nodes++;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = nodes;
	temp->next = (*head);

	(*head) = temp;

	return (*head);
}
