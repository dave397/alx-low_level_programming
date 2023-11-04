#include "main.h"

/**
 * error_exit - exit with error
 * @msg: exit message
 * Return - void
 */

void error_exit(char *msg)
{
	perror(msg);
	exit(EXIT_FAILURE);
}

/**
 * main - entry point
 * @ac: arg count
 * @av: arg vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int ac, char **av)
{
	global_t global[] = { INIT };
	int fd = 2;

	fd += 3;
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
		{
			error_exit("Error: failed to read");
		}
		global->readfd = fd;
	}
	simple_shell(global, av);
	return (0);
}
