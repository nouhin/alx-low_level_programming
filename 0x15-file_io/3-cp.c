#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocate_buffer(char *file);
void close_file(int fd);

/**
 * allocate_buffer - description
 * @file: description
 * Return: description
 */
char *allocate_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - description
 * @fd: description
 */
void close_file(int fd)
{
	int status;

	status = close(fd);

	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - description
 * @argc: description
 * @argv: description
 *
 * Return: description
 */
int main(int argc, char *argv[])
{
	int src_file, dest_file, read_status, write_status;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = allocate_buffer(argv[2]);
	src_file = open(argv[1], O_RDONLY);
	read_status = read(src_file, buffer, 1024);
	dest_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src_file == -1 || read_status == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_status = write(dest_file, buffer, read_status);
		if (dest_file == -1 || write_status == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_status = read(src_file, buffer, 1024);
		dest_file = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_status > 0);

	free(buffer);
	close_file(src_file);
	close_file(dest_file);

	return (0);
}
