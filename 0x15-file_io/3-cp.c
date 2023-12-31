#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
 * error_exit - Display an error message and exit with the given status code.
 * @msg: The base error message to display.
 * @extra: The extra info (e.g. filename or fd) to display.
 * @exit_code: The exit status code.
 */
void error_exit(const char *msg, const char *extra, int exit_code)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, extra);
	exit(exit_code);
}

/**
 * main - Entry point of the program.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success, or the appropriate exit status code on failure.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUF_SIZE];

	if (argc != 3)
		error_exit("Usage: cp", "file_from file_to", 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit("Error: Can't read from file", argv[1], 98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit("Error: Can't write to", argv[2], 99);
	}

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			error_exit("Error: Can't write to", argv[2], 99);
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit("Error: Can't read from file", argv[1], 98);
	}

	if (close(fd_from) == -1)
		error_exit("Error: Can't close fd", argv[1], 100);
	if (close(fd_to) == -1)
		error_exit("Error: Can't close fd", argv[2], 100);
	return (0);
}


