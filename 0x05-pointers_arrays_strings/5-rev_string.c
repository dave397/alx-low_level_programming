#include "main.h"
/**
 * rev_string - print string in reverse
 * @s: string to be printed in reverse
 * Return: void
 */

void rev_string(char *s)
{
	int count = 0;

	int i = 0;

	char hol;

	while (s[count])
	{
		count++;
	}

	while (i < count)
	{
		hol = s[i];
		s[i] = s[count - 1];
		s[count - 1] = hol;
		i++;
		count--;
	}
}
