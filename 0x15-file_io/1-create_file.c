#include "main.h"

/**
 * create_file - description
 * @filename: description
 * @content: description
 * Return: description
 */
int create_file(const char *filename, char *content)
{
	int file_descriptor, bytes_written, length = 0;

	if (filename == NULL)
		return (-1);

	if (content != NULL)
	{
		for (length = 0; content[length];)
			length++;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes_written = write(file_descriptor, content, length);

	if (file_descriptor == -1 || bytes_written == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
