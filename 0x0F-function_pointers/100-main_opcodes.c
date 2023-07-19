#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode
 * @argc: argument number
 * @rgv: array of arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int holder = atoi(argv[1]);

	if (argc != 2)
	{
		printf("%s\n", "Error");
		exit(1);
	}

	if (holder < 0)
	{
		printf("%s\n", "Error");
		exit(2);
	}
	char *k = (char *)main;
	while(i < holder)
	{
		if (i == (holder - 1))
		{
			printf("%02hhx\n", k[i]);
			break;
		}

		printf("%02hhx ", k[i]);
		i++;
	}
	return (0);
}
