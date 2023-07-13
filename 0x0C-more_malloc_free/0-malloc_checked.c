#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: value to assign to memory
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);

	if (c == NULL)
		exit(98);
	else
		return (c);
}
