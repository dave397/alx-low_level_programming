#include "main.h"
#include <stdlib.h>

/**
 * _realloc - relocates a memory block
 * @ptr: pointer to previous allocated memory block
 * @old_size: size of former
 * @new_size: current
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *c;

	unsigned int i = 0;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	c = malloc(sizeof(int) * new_size);

	if (c == NULL)
		return (NULL);

	while (i < new_size)
	{
		c[i] = ((int *)ptr)[i];
		i++;
	}
	free(ptr);

	return (c);
}
