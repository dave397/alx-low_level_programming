#include "main.h"
#include <stdio.h>

/**
 * rot13 - rotate alphabet
 * @s: string to rotate
 * Return: rotated string
 */


char *rot13(char *s)
{
	int i;
	int count;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghicountklmnopqrstuvwxyz";
	char alpha_rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghicountklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (count = 0; count < 52; count++)
		{
			if (s[i] == alpha[count])
			{
				s[i] = alpha_rot[count];
				break;
			}
		}
	}
	return (s);
}
