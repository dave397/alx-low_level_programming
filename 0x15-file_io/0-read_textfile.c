#include <fcntl.h>
#include <unistd.h>
#include "main.h"

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
    
    while ((read_bytes = read(reader, buffer, sizeof(buffer))) > 0)
    {
        ssize_t written = write(STDOUT_FILENO, buffer, read_bytes);

        if (read_bytes != written)
        {
            close(reader);
            return (0);
        }

        total += written;
        if (total >= letters)
            break;
    }

    close(reader);

    return (total);
}