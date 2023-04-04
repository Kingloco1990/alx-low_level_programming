#include "main.h"

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments passed to the function.
 * @argv: Pointer to a pointer that points to an array
 *        of strings which represent the arguments passed
 *        to the function.
 *
 * Return: The actual number of letters it could read and print.
 */
int main(int argc, char **argv)
{
	int file_from, file_to, bytes_read;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	while ((bytes_read = read(file_from, buffer, 1024)) > 0)
	{
		if (write(file_to, buffer, bytes_read) != bytes_read || file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(file_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
