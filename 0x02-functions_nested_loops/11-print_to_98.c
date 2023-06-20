#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural number from n to 98
 * @n: starting number
 * Return: void
 */

void print_to_98(int n)
{
	int count;

	if (n > 98)
	{
		for (count = n; count >= 98; count--)
		{
			printf("%d", count);
			if (count != 98)
			{
				printf("%s", ", ");
			}
		}
	}
	else
	{
		for (count = n; count <= 98; count++)
		{
			printf("%d", count);
			if (count != 98)
			{
				printf("%s", ", ");
			}
		}
	}
	printf("%s", "\n");
}
