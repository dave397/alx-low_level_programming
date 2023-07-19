#include "function_pointers.h"

/**
 * array_iterator - execute function on member of array
 * @array: list
 * @size: length of array
 * @action: function to execute
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count = 0;

	while (count < size)
	{
		action(array[count]);
		count++;
	}
}
