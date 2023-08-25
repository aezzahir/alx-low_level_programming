/* 100-elf_header.c */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - entry point for the ELF header program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int fd;
	unsigned char e_ident[16];

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		exit(98);
	}

	if (read(fd, e_ident, 16) != 16)
	{
		perror("Error reading file");
		close(fd);
		exit(98);
	}

	if (e_ident[0] != 0x7f || e_ident[1] != 'E')
	{
		if (e_ident[2] != 'L' || e_ident[3] != 'F')
		{
			fprintf(stderr, "%s is not an ELF file.\n", argv[1]);
			close(fd);
			xit(98);
		}
	}

	printf("ELF Header:\n");
	printf("  Magic:   ");
	printf("%02x %02x", e_ident[0], e_ident[1]);
	printf(" %02x %02x\n", e_ident[2], e_ident[3]);
	/* Further fields can be added similarly */
	close(fd);
	return (0);
}

