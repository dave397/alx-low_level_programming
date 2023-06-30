#include "main.h"

/**
 * cap_string - capitalize first character of string
 * @n: string to convert
 * Return: converted string
 */

char *cap_string(char *n)
{
	int c = 0;

	while (n[c])
	{
		if (n[c] == '\0')
			break;
		if (
		(c > 0 && n[c - 1] == ' ') ||
		(c > 0 && n[c - 1] == '\n') ||
		(c > 0 && n[c - 1] == '"') ||
		(c > 0 && n[c - 1] == '\t') ||
		(c > 0 && n[c - 1] == ',') ||
		(c > 0 && n[c - 1] == '.') ||
		(c > 0 && n[c - 1] == ';') ||
		(c > 0 && n[c - 1] == '!') ||
		(c > 0 && n[c - 1] == '?') ||
		(c > 0 && n[c - 1] == '(') ||
		(c > 0 && n[c - 1] == ')') ||
		(c > 0 && n[c - 1] == '{') ||
		(c > 0 && n[c - 1] == '}')
		)
		{
			if (n[c] >= 'a' && n[c] <= 'z')
				n[c] = n[c] - 32;
		}
		c++;
	}
	return (n);
}
