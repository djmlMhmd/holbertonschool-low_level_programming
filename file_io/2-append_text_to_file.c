#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append to
 * @text_content: text to add to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, bytes_written, length = 0;

if (filename == NULL)
return (-1);

if (text_content == NULL)
return (1);

while (text_content[length])
length++;

fd = open(filename, O_WRONLY | O_APPEND);

if (fd == -1)
return (-1);

bytes_written = write(fd, text_content, length);

if (bytes_written == -1)
{
close(fd);
return (-1);
}

close(fd);
return (1);
}
