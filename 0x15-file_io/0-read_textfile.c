#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile -read the content of text file
 * @filename: name of file
 * @letters: length to read
 * Return: letter length, otherwise 0 (fail)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_bytes;

	int reader = open(filename, O_RDONLY);

	char buffer[1024];

	size_t total = 0;

	if (filename == NULL)
		return (0);

	if (reader == -1)
		return (0);

	while (total < letters && (read_bytes = read(reader, buffer, sizeof(buffer))) > 0)
	{
		if (total +read_bytes > letters)
			read_bytes = letters - total;

		ssize_t written = write(STDOUT_FILENO, buffer, read_bytes);
		
		if (read_bytes != written)
		{
			close(reader);
			return (0);
		}

		total += written;
	}

	close(reader);

	return (total);
}
