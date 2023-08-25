#ifndef ELF_HEADERS_H
#define ELF_HEADERS_H

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* Function Prototypes */
void verifyElfSignature(const unsigned char *signature);
void displayMagic(const unsigned char *e_ident);
void displayClass(const unsigned char *e_ident);
void displayData(const unsigned char *e_ident);
void displayVersion(const unsigned char *e_ident);
void displayOsAbi(const unsigned char *e_ident);
void displayAbiVersion(const unsigned char *e_ident);
void displayType(unsigned int e_type, const unsigned char *e_ident);
void displayEntryPoint(unsigned long int e_entry, const unsigned char *e_ident);
void handleErrors(int fd, char *filename);
void closeElfFile(int fd);

#endif /* ELF_HEADERS_H */
