#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: The name of the file to be created.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 on success,
 *         1 on failure if file can not be created,
 *         file can not be written, write “fails”, etc…
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, fwrite;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[len])
		{
			len++;
		}

		fwrite = write(fd, text_content, len);

		if (fwrite == -1)
		{
			return (0);
		}
	}

	close(fd);

	return (1);
}
