#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of passed parameter
 * @argv: strings passed
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc < 1 || argc > 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	if (
		(*argv[2] == '+') ||
		(*argv[2] == '-') ||
		(*argv[2] == '*') ||
		(*argv[2] == '/') ||
		(*argv[2] == '%')
	   )
	{
		if (
			((*argv[2] == '/') && (atoi(argv[3]) == 0)) ||
			((*argv[2] == '%') && (atoi(argv[3]) == 0))
	   	)
		{
			printf("%s\n", "Error");
			exit(100);
		}

		printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
		return (0);
	}
	
	printf("%s\n", "Error");
	exit(99);
	return (0);
}
