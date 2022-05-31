#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: the name of the file created
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int k, fwrite, b;

	if (filename == NULL)
		return (-1);
	k = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (k == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (b = 0; text_content[b]; b++)
			;
		fwrite = write(k, text_content, b);
		if (fwrite == -1)
		return (-1);
	}
	close(k);
	return (1);
}
