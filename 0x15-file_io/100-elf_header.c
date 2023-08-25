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
	int fd, i;
	unsigned char e_ident[16];
	unsigned short e_type;
	unsigned long int e_entry;

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

	if (e_ident[0] != 0x7f || e_ident[1] != 'E' || e_ident[2] != 'L' || e_ident[3] != 'F')
	{
		fprintf(stderr, "%s is not an ELF file.\n", argv[1]);
		close(fd);
		exit(98);
	}
	lseek(fd, 16, SEEK_SET);
	read(fd, &e_type, sizeof(e_type));
	lseek(fd, 24, SEEK_SET);
	read(fd, &e_entry, sizeof(e_entry));

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
		printf("%02x ", e_ident[i]);
	printf("\n");

	printf("  Type:                              ");
	switch (e_type)
	{
		case 2:
			printf("EXEC (Executable file)\n");
			break;
		case 3:
			printf("DYN (Shared object file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
			break;
	}
	printf("  Entry point address:               %lx\n", e_entry);
	close(fd);
	return (0);
}
