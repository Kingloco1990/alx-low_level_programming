#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: pointer to the string
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int k, fwrite, b;

	if (filename == NULL)
		return (-1);
	k = open(filename, O_APPEND | O_RDWR, 0664);
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
