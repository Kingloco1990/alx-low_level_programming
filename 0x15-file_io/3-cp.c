#include "main.h"

/**
 * main - copies the content of a file to another file
 *
 * @argc: number of arguments passed
 * @argv: double pointer
 * Return: the actual number of letters it could read and print
 */

int main(int argc, char **argv)
{
	int k, j, a;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	k = open(argv[1], O_RDONLY);
	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	j = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	while ((a = read(k, buf, 1024)) > 0)
	{
		if (write(j, buf, a) != a || j == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(k) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", k);
		exit(100);
	}
	if (close(j) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", j);
		exit(100);
	}
	return (0);
}
