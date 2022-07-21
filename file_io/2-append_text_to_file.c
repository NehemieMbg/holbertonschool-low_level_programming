#include "main.h"

/**
 * append_text_to_file - is a function that append a text
 * at the end of a file
 *
 * @filename: is the name of the file
 * @text_content: is the content of the file
 *
 * Return: 1 if succeded and -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int create_, write_, len = 0;

	if (!filename)
		return (-1);

	create_ = open(filename, O_RDWR | O_APPEND);
	if (create_ == -1)
		return (-1);

	if (text_content)
		len = strlen(text_content);

	if (!text_content)
		return (-1);

	write_ = write(create_, text_content, len);
	if (!write_)
		return (-1);

	close(create_);

	return (1);
}
