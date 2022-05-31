#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: pointer to text in a file
 * @letters: number of letters
 * Return: actual number of letters  or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t file, fread, fwrite;
    char *num_lets;

    num_lets = malloc(sizeof(char) * letters);
    if (num_lets == NULL)
        return (0);
    if (filename == NULL)
        return (0);

    file = open(filename, O_RDONLY);
    if (file == -1)
        return (0);
    fread = read(file, num_lets, letters);
    if (fread == -1)
        return (0);
    fwrite = write(STDOUT_FILENO, num_lets, fread);
    if (fwrite == -1)
        return (0);
    close(file);
    free(num_lets);
    return (fwrite);
}
