#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints its content to standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd, n_read, n_written;
char *buffer;
buffer = malloc(letters);
fd = open(filename, O_RDONLY);
n_read = read(fd, buffer, letters);
n_written = write(STDOUT_FILENO, buffer, n_read);

if (filename == NULL)
{
return (0);
}
if (buffer == NULL)
{
return (0);
}
if (fd == -1)
{
free(buffer);
return (0);
}
if (n_read == -1)
{
free(buffer);
close(fd);
return (0);
}
if (n_written == -1 || n_written != n_read)
{
free(buffer);
close(fd);
return (0);
}
free(buffer);
close(fd);
return (n_written);
}
