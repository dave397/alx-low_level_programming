#include "main.h"

/**
 * swap_int - swap integers
 * @a: first character to swap
 * @b: second character to swap
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int h = *a;
	*a = *b;
	*b = h;
}
