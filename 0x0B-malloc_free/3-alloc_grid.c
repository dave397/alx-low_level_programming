#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to two dimensional array
 * @width: width
 * @height: height
 * Return: NULL, otherwise pointer
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i, c;

	i = 0;
	c = 0;
	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);

	while (i < height)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (; i >= 0; i--)
				free(a[i]);

			free(a);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		while (c < width)
		{
			a[i][c] = 0;
			c++;
		}
		c = 0;
		i++;
	}
	return (a);
}
