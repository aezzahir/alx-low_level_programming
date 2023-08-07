#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The text content to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, len = 0, res;
fd = open(filename, O_WRONLY | O_APPEND);

if (filename == NULL)
{
return (-1);
}

if (fd == -1)
{
return (-1);
}
if (text_content != NULL)
{
while (text_content[len])
{
len++;
}
if (res == -1 || res != len)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
