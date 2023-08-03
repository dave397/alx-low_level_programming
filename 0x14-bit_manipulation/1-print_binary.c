#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary
 * @n: number to print as binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		printf("0");
	else
	{
		int bitC = 1 << 12; 

		while (!(n & bitC))
			bitC >>= 1;

		while (bitC)
		{
			printf("%d", !!(n & bitC)); 
			bitC >>= 1;
		}
	}
}
