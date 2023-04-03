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
	ssize_t file, fread, fwrite;
	char *num_lets;

	if (filename == NULL)
	{
		return (0);
	}

	num_lets = malloc(sizeof(char) * letters);
	if (num_lets == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(num_lets);
		return (0);
	}
	fread = read(file, num_lets, letters);
	if (fread == -1)
	{
		free(num_lets);
		return (0);
	}
	fwrite = write(STDOUT_FILENO, num_lets, fread);
	if (fwrite == -1)
	{
		free(num_lets);
		return (0);
	}
	
	close(file);
	free(num_lets);
	return (fwrite);
}
