#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file to be appended.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success or -1 if:
 *         If filename is NULL
 *         if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, fwrite;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_APPEND);
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
			return (-1);
		}
	}

	close(fd);

	return (1);
}
