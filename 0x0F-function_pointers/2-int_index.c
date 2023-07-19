#include "function_pointers.h"

/**
 * int_index - search for integer
 * @array: list
 * @size: length of list
 * @cmp: function
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count = 0;

	if (size <= 0)
	{
		return -(1);
	}

	while (count < size)
	{
		if (cmp(array[count]) > 0)
			return (count);

		count++;
	}

	return -(1);
}
