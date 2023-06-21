#include <stdio.h>
#include "main.h"
/**
 * main - Entry Point
 * Description - Print the sum of multiples
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0;

	int count = 1;

	while (count < 1024)
	{
		if (count % 3 == 0 || count % 5 == 0)
		{
			sum = sum + count;
		}
		count++;
	}

	printf("%d\n", sum);
	return (0);
}
