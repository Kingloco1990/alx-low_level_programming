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
	int len = 0, file, fwrite;

	if (filename == NULL)
	{
		return (0);
	}

	while (*text_content)
	{
		text_content++;
		len++;
	}

	file = open(filenanme, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}

	fwrite = write(file, text_content, len);
	if (fwrite == -1)
	{
		return (-1);
	}

	close(file);

	return (1);
}
