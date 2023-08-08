#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <string.h>

/**
 * print_error - prints error
 * @msg: error message container
 */

void print_error(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

/**
 * main - handles the elf functions
 * @argc: Argument count
 * @argv: Argument variable
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	unsigned char mgc1, mgc2, mgc3;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}
	const char *filename = argv[1];

	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		print_error("Error opening file");
	}
	Elf32_Ehdr header;

	ssize_t n = read(fd, &header, sizeof(header));

	mg1 = header.e_ident[1];
	mg2 = header.e_ident[2];
	mg3 = header.e_ident[3];

	if (n != sizeof(header))
		print_error("Error reading ELF header");
	if (header.e_ident[0] != 0x7F || strncmp((char *)&mg1, "ELF", 3) != 0)
		print_error("Not an ELF file");

	printf("Magic: %02x %02x %02x %02x\n", header.e_ident[0], mg1, mg2, mg3);
	printf("Class: %d-bit\n", header.e_ident[4] == 1 ? 32 : 64);
	printf("Data: %s\n", header.e_ident[5] == 1 ? "little-endian" : "big-endian");
	printf("Version: %d\n", header.e_ident[6]);
	printf("OS/ABI: %d\n", header.e_ident[7]);
	printf("ABI Version: %d\n", header.e_ident[8]);
	printf("Type: %u\n", header.e_type);
	printf("Entry point address: 0x%08x\n", header.e_entry);
	close(fd);
	return (0);
}

