#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - read the content of text file
 * @filename: name of file
 * @text_content: length to read
 * Return: 1 (Success) otherwise -1 (fail)
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int count = 0;

	int reader, writer;

	if (filename == NULL)
		return (-1);

	reader = open(filename, O_WRONLY | O_APPEND);

	if (reader == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(reader);
		return (1);
	}

	while (text_content[count])
		count++;

	writer = write(reader, text_content, count);

	if (writer == -1)
	{
		close(reader);
		return (-1);
	}

    close(reader);
	return (1);
}
