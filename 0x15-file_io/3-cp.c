#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER 1024

/**
 * exit_with_error - exit code with error
 * @code: error code
 * @message: error message
 * @...: additional arguments
*/

void exit_with_error(int code, char *message,  ...)
{
	va_list args;

	va_start(args, message);

	dprintf(2, message, args);

	exit(code);
}

/**
 * main - check the code
 * @ac: number of passed parameter
 * @av: pointer of passed parameter
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	char buffer[BUFFER];

	int file_from, file_to, bytes_w, bytes_r;

	if (ac != 3)
		exit_with_error(97, "Usage: cp %s %s\n", av[1], av[2]);

	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	file_from = open(av[1], O_RDONLY);

	if (file_to == -1)
		exit_with_error(98, "Error: Can't write to %s\n", av[2]);

	if (file_from == -1)
		exit_with_error(98, "Error: Can't read from file %s\n", av[1]);

	while ((bytes_r = read(file_from, buffer, BUFFER)) > 0)
	{
		bytes_w = write(file_to, buffer, bytes_r);

		if (bytes_w == -1 || bytes_r != bytes_w)
		{
			close(file_to);
			close(file_from);
			exit_with_error(99, "Error:Can't write to %s\n", av[2]);
		}
	}

	if (bytes_r == -1)
		exit_with_error(98, "Error: Can't read from file %s\n", av[1]);

	if (close(file_from) == -1)
		exit_with_error(100, "Error: Can't close fd %s\n", av[1]);

	if (close(file_to) == -1)
		exit_with_error(100, "Error: Can't close fd %s\n", av[2]);

	return (0);

}

