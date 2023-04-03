#include "main.h"

/**
 * read_textfile - Reads a text file and prints it 
 *                 to the POSIX standard output.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function
 *           should read and print.
 *
 * Return: 0, if the file can not be opened or read
 *         0, if filename is NUL
 *         0, if write fails or does not write the
 *         expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t open_txt, read_txt, write_txt;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	open_txt = open(filename, O_RDONLY);
	if (open_txt == -1)
	{
		return (0);
	}

	read_txt = read(o, buffer, letters);
	if (read_txt == -1)
	{
		return (0);
	}

	write_txt = write(STDOUT_FILENO, buffer, r);
	if (write_txt == -1)
	{
		return (0);
	}

	free(buffer);
	close(open_txt);

	return (write_txt);
}
