#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of integers
 * @min: minumum value
 * @max: maximum value
 * Return: pointer, otherwise NULL
 */

int *array_range(int min, int max)
{
	int *c;

	int a = 0;

	if (min > max)
		return (NULL);

	c = malloc(sizeof(int) * (max - min + 1));

	if (c == NULL)
		return (NULL);

	while (min <= max)
	{
		c[a] = min++;
		a++;
	}

	return (c);
}
