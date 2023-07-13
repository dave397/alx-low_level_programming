#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two string
 * @s1: string one
 * @s2: string two
 * @n: number of bytes of S2
 * Return: pointer, otherwise NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, total, a;

	unsigned int c, b;

	char *k;

	c = 0;
	i = 0;
	total = 0;
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}

	if (s2 != NULL)
	{
		while (s2[c] != '\0' && c < n)
			c++;
	}
	total = i + c;
	k = malloc(sizeof(char) * (total + 1));

	if (k == NULL)
		return (NULL);

	for (a = 0; a < i; a++)
		k[a] = s1[a];

	for (b = 0; b < c; b++)
		k[a + b] = s2[b];

	k[total] = '\0';
	return (k);
}
