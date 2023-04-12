#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed,
 *         or 0 if the file could not be opened or read,
 *         or if filename is NULL,
 *         or if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t nread = 0, nwritten = 0;
char *buffer = NULL;
int fd;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (0);
}
nread = read(fd, buffer, letters);
if (nread == -1)
{
close(fd);
free(buffer);
return (0);
}
nwritten = write(STDOUT_FILENO, buffer, nread);
if (nwritten == -1 || nwritten != nread)
{
close(fd);
free(buffer);
return (0);
}
close(fd);
free(buffer);
return (nwritten);
}
