#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

#define BUF_SIZE 1024

/**
 * exit_error - Helper function to exit with an error message.
 * @exit_code: The exit code to use.
 * @message: The error message to print.
 */
void exit_error(int exit_code, const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(exit_code);
}

/**
 * main - The main function.
 * @argc: The number of arguments.
 * @argv: An array of arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to, res;
char buffer[BUF_SIZE];
ssize_t bytes_read, bytes_written;
fd_from = open(argv[1], O_RDONLY);
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

if (argc != 3)
{
exit_error(97, "Usage: cp file_from file_to");
}

if (fd_from == -1)
{
exit_error(98, "Error: Can't read from file");
}

if (fd_to == -1)
{
exit_error(99, "Error: Can't write to file");
}
while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read || bytes_written == -1)
{
exit_error(99, "Error: Can't write to file");
}
}
if (bytes_read == -1)
{
exit_error(98, "Error: Can't read from file");
}
res = close(fd_from);
if (res == -1)
{
exit_error(100, "Error: Can't close fd");
}
res = close(fd_to);
if (res == -1)
{
exit_error(100, "Error: Can't close fd");
}
return (0);
}
