#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of char
 * @size: size of array
 * @c: character
 * Return: NULL, otherwise pointer
 */

char *create_array(unsigned int size, char c)
{
	char *a;

	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);
}
