#include "main.h"

/**
 * _strspn - get length of prefix substring
 * @s: string
 * @accept: prefix
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int c = 0;

	while (*s)
	{
		while (accept[c])
		{
			if (*s == accept[c])
			{
				i++;
				break;
			}
			else if (accept[c + 1] == '\0')
				return (i);
			c++;
		}
		c = 0;
		s++;
	}
	return (i);
}
