#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of passed parameter
 * @argv: array of passed arguments
 * Return: Success 0, otherwise 1
 */

int main(int argc, char *argv[])
{
	int i = 1;

	int mul = 1;

	if (argc < 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	while (i < argc)
	{
		mul *= atoi(argv[i]);
		i++;
	}

	printf("%d\n", mul);

	return (0);
}
