#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it to
 * the POSIX standard output.
 *
 * @filename: is the file to read
 * @letters: is the number of letters to read
 *
 * Return: The actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_, lbf;
	char *buf;


	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		return (0);
	}

	read_ = read(fd, buf, letters);
	if (read_ == -1)
	{
		return (0);
	}

	lbf = write(STDOUT_FILENO, buf, read_);
	if (lbf == -1)
	{
		return (0);
	}

	close(fd);

	return (lbf);

}
