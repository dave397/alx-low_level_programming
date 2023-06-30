#include "main.h"

/**
 * leet - change text character aeotl to 43071
 * @s: string to replace
 * Return: character
 */

char *leet(char *s)
{
	int c = 0;

	int y = 0;

	char alpha_lower[5] = "aeotl";

	char alpha_upper[5] = "AEOTL";

	char num[5] = "43071";

	while (s[c] != '\0')
	{
		while (y < 5)
		{
			if ((alpha_lower[y] == s[c]) || (alpha_upper[y] == s[c]))
				s[c] = num[y];
			y++;
		}
		y = 0;
		c++;
	}
	return (s);
}
