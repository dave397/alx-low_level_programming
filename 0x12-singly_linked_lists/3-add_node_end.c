#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to insert in node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int nodes = 0;

	while (str[nodes])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = nodes;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
