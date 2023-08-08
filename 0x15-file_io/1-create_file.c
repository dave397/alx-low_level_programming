#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file -read the content of text file
 * @filename: name of file
 * @text_content: length to read
 * Return: 1 (Success) otherwise -1 (fail)
 */

int create_file(const char *filename, char *text_content) {

	int count = 0;

	int reader, writer;

	if (filename == NULL)
		return (-1);

	reader = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (reader == -1)
		return (-1);

	if (text_content == NULL) {
		close(reader);
		return (1);
	}

	while (text_content[count])
		count++;

	writer = write(reader, text_content, count);

	if (writer == -1) {
		close(reader);
		return (-1);
	}

	return (1);
}
