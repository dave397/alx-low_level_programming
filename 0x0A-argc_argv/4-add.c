#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: number of passed parameter
 * @argv: array of passed arguments
 * Return: Success 0, otherwise 1
 */

int main(int argc, char *argv[])
{
	int i = 1;

	int sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (1);
	}

	while (i < argc)
	{
		if (isdigit(*argv[i]))
		{
			sum += atoi(argv[i]);
			i++;
		}
		else
		{
			printf("%s\n", "Error");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
