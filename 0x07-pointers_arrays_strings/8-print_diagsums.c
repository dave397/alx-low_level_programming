#include "main.h"
#include <stdio.h>

/**
 * print_diagsum - prints sum of diagonal
 * @a: diagonal
 * @size: siz of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int start = 0;
	int sum = 0;
	int sum2 = 0;
	int end = size - 1;

	while (start < size)
	{
		sum += *(a + (start * size) + start);
		sum2 += *(a + (start * size) + end - start);
		start++;
	}

	printf("%d, %d\n", sum, sum2);
}
