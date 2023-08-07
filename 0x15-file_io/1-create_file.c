#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file with the specified content.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int fd, len = 0, res;
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

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
res = write(fd, text_content, len);
if (res == -1 || res != len)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
