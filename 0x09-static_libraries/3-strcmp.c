#include "main.h"

/**
 * _strcmp - compare two string
 * @s1: input value
 * @s2: input value
 * Return: difference
 */

int _strcmp(char *s1, char *s2)
{
	int i, holder;

	i = 0;
	holder = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			holder = s1[i] - s2[i];
			return (holder);
		}
		i++;
	}
	return (holder);
}
