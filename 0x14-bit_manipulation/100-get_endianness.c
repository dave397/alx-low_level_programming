#include "main.h"
/**
 * get_endianness - checks machine type
 * Return: 0 for big otherwise 1 for little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
