#include "main.h"

/**
 * reverse_array - reverse the content of array
 * @a: array
 * @n: length of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int h;

	int c;

	int end = n - 1;

	c = 0;
	while (c < end)
	{
		h = a[c];
		a[c] = a[end];
		a[end] = h;
		c++;
		end--;
	}
}

