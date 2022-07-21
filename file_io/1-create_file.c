#include "main.h"

/**
 * create_file - is a function that create files
 * @filename: is the pointer to the file
 * @text_content: is the content of the file
 *
 * Return: 1 if succeded & -1 if not
 */

int create_file(const char *filename, char *text_content)
{
	int creat_, write_, len = 0;

	if (!filename)
		return (-1);

	creat_ = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (creat_ == -1)
		return (-1);

	if (text_content)
		len = strlen(text_content);

	write_ = write(creat_, text_content, len);
	if (write_ == -1)
		return (-1);

	close(creat_);

	return (1);
}
