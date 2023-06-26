#include "main.h"
#include <stdio.h>

/**
 * print_array - print numbers of an array
 * @a: the array
 * @n: number of character to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	int end = n - 1;

	while (i < n)
	{
		if (i != end)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
		i++;
	}
	printf("\n");
}
