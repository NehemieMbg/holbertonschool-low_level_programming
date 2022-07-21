#include "main.h"

/**
 * @brief Create a file object
 * 
 * @param filename 
 * @param text_content 
 * @return int 
 */

int create_file(const char *filename, char *text_content)
{
	int creat_, write_;

	if (!filename)
		return (-1);

	creat_ = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (creat_ == -1)
		return (-1);

	write_ = write(creat_, text_content, strlen(text_content));
	if (write_ == -1)
		return (-1);

	close(creat_);

	return (1);
}
