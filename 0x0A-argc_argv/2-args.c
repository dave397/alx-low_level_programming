#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of passed parameter
 * @argv: array of passed arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
