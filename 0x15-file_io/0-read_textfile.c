#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads a text file and prints
 * its contents to Standard Output (STDOUT).
 * @filename: The name of the text file to be read.
 * @letters: The number of letters to be read and printed.
 * Return: The actual number of bytes read and printed.
 *        0 when the function fails or when 'filename' is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
