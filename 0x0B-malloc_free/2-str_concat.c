#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates string
 * @s1: string one
 * @s2: string two
 * Return: Null, otherwise pointer
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, k;

	char *c;

	a = 0;
	b = 0;
	k = 0;
	while (s1[a] != '\0')
		a++;

	while (s2[b] != '\0')
		b++;

	c = malloc(sizeof(char) * (a + b + 1));

	if (c == NULL)
		return (NULL);

	while (k < a)
	{
		c[k] = s1[k];
		k++;
	}
	k = 0;
	while (k < b)
	{
		c[a + k] = s2[k];
		k++;
	}
	return (c);
}

