#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated
 * space in memory
 * @str: string
 * Return: pointer, otherwise NULL
 */

char *_strdup(char *str)
{
	int i = 0;

	int k = 0;

	char *a;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	a = malloc(sizeof(char) * i);

	if (a == NULL)
		return (NULL);

	while (k < i)
	{
		a[k] = str[k];
		k++;
	}

	return (a);
}
