#include "main.h"

/**
 * check_if_elf - confirms if file is an ELF by its magic numbers
 * @e_ident: pointer to an array of bytes to interpret the file
 */
void check_if_elf(unsigned char *e_ident)
{
	int index = 0;

	while (index < 4)
	{
		if (e_ident[index] != 127 &&
				e_ident[index] != 'E' &&
				e_ident[index] != 'L' &&
				e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
		index++;
	}
}

/**
 * print_magic - prints ELF magic numbers
 * @e_ident: pointer to an array of bytes to interpret the file
 */
void print_magic(unsigned char *e_ident)
{
	int index = 0;

	printf("  Magic    ");
	while (index < EI_NIDENT)
	{
		printf("%02x", e_ident[index]);
		printf(index == EI_NIDENT - 1 ? "\n" : " ");
		index++;
	}
}

/**
 * print_class - prints the class of the ELF file
 * @e_ident: pointer to an array of bytes to interpret the file
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - prints the data encoding of the ELF file
 * @e_ident: pointer to an array of bytes to interpret the file
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}

/**
 * print_version - print the version of the ELF file
 * @e_ident: pointer to an array of bytes to interpret the file
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           ");
	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf("%d (current)\n", e_ident[EI_VERSION]);
	else
		printf("%i\n", e_ident[EI_VERSION]);
}

/**
 * print_osabi - prints the OS/ABI of the ELF file
 * @e_ident: pointer to an array of bytes to interpret the file
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi - prints the ABI of the ELF file
 * @e_ident: pointer to an array of bytes to interpret the file
 */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints the type of the ELF file
 * @e_type: object file type
 * @e_ident: pointer to an array of bytes to interpret the file
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (Unknown type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x\n", e_type);
	}
}

/**
 * print_entry - prints the entry point of the ELF file
 * @e_entry: virtual address to which the system first transfers control
 * @e_ident: pointer to an array of bytes to interpret the file
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("0x%x\n", (unsigned int)e_entry);
	else
		printf("0x%lx\n", e_entry);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *elf;
	int elf_file, read_file;

	elf_file = open(argv[1], O_RDONLY);
	if (elf_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	elf = malloc(sizeof(Elf64_Ehdr));
	if (!elf)
	{
		close(elf_file);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	read_file = read(elf_file, elf, sizeof(Elf64_Ehdr));
	if (read_file == -1)
	{
		free(elf);
		close(elf_file);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_if_elf(elf->e_ident);
	printf("ELF Header:\n");
	print_magic(elf->e_ident);
	print_class(elf->e_ident);
	print_data(elf->e_ident);
	print_version(elf->e_ident);
	print_osabi(elf->e_ident);
	print_abi(elf->e_ident);
	print_type(elf->e_type, elf->e_ident);
	print_entry(elf->e_entry, elf->e_ident);
	free(elf);
	close(elf_file);
	return (0);
}


