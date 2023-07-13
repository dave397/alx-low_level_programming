#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: array
 * @size: length
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;

	unsigned int i = 0;
	
	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(nmemb * size);

	if (c == NULL)
	{
		return (NULL);
	}

	while (i < (size * nmemb))
	{
		c[i] = 0;
		i++;
	}
	return (c);
}
