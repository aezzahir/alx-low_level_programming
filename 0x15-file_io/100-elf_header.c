#include "elf_headers.h"

/**
 * verifyElfSignature - Verifies the ELF file signature.
 * @signature: ELF signature.
 */
void verifyElfSignature(const unsigned char *signature)
{
    static const unsigned char ELF_MAGIC[] = {0x7F, 'E', 'L', 'F'};

    for (size_t i = 0; i < sizeof(ELF_MAGIC); i++)
        if (signature[i] != ELF_MAGIC[i])
            fprintf(stderr, "Error: Not an ELF file\n"), exit(98);
}

/**
 * main - Main function.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, 98 otherwise.
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
        fprintf(stderr, "Usage: %s <ELF filename>\n", argv[0]), exit(98);

    Elf64_Ehdr *header;
    int fd;

    fd = open(argv[1], O_RDONLY);
    handleErrors(fd, argv[1]);

    header = malloc(sizeof(Elf64_Ehdr));
    if (!header)
        closeElfFile(fd), fprintf(stderr, "Memory allocation failed\n"), exit(98);

    ssize_t bytesRead = read(fd, header, sizeof(Elf64_Ehdr));
    if (bytesRead == -1)
        free(header), closeElfFile(fd), fprintf(stderr, "Error reading %s\n", argv[1]), exit(98);

    verifyElfSignature(header->e_ident);
    printf("ELF Header:\n");
    displayMagic(header->e_ident);
    /*... Call the other display functions ... */

    free(header);
    closeElfFile(fd);
    return (0);
}
