#include "main.h"
#include <elf.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * error_msg - return error message
 * @code: error code
 * @msg: error message
 * @...: rest arguments
 */

void error_msg(int code, char *msg, ...)
{
	va_list args;

	va_start(args, msg);

	vfprintf(stderr, msg, args);

	va_end(args);

	exit(code);
}

/**
 * print_magic - print content of elf file
 * @magic: file magic info
 * Return: void
 */

void print_magic(unsigned char *magic)
{
	int i = 0;

	printf("  Magic:                           ");

	while (i < EI_NIDENT)
	{
		printf("%02x ", magic[i]);
		i++;
	}
	printf("\n");
}

/**
 * print_class - print content of elf file
 * @h_class: file class info
 * Return: void
 */

void print_class(unsigned char h_class)
{
	const char *class = "Invalid";

	if (h_class == ELFCLASS32)
		class = "ELF32";
	else if (h_class == ELFCLASS64)
		class = "ELF64";

	printf("  Class:                           %s\n", class);
}

/**
 * print_data - print content of elf file
 * @h_data: file data info
 * Return: void
 */

void print_data(unsigned char h_data)
{
	const char *data = "Invalid";

	if (h_data == ELFDATA2LSB)
		data = "2's complement, little-endian";
	else if (h_data == ELFDATA2MSB)
		data = "2's complement, big-endian";

	printf("  Data:                           %s\n", data);
}

/**
 * print_osabi - print content of elf file
 * @h_osabi: file osabi info
 * Return: void
 */

void print_osabi(unsigned char h_osabi)
{
	char *osabi = "UNKNOWN";

	if (h_osabi == ELFOSABI_SYSV)
		osabi = "UNIX - SYSTEM V";
	else if (h_osabi == ELFOSABI_LINUX)
		osabi = "UNIX - Linux";

	printf("  OS/ABI:                           %s\n", osabi);
}

/**
 * print_elf - print content of elf file
 * @header: header of file
 * Return: void
 */

void print_elf(Elf64_Ehdr *header)
{
	print_magic(header->e_ident);
	print_class(header->e_ident[EI_CLASS]);
	print_data(header->e_ident[EI_DATA]);
	printf("  Version:                           %d (current)\n",
	       header->e_ident[EI_VERSION]);
	print_osabi(header->e_ident[EI_OSABI]);
	printf("  ABI Version:                           %d\n",
	       header->e_ident[EI_ABIVERSION]);
}

/**
 * main - entry point
 * @ac: number of arguments
 * @av: list of arguments
 *
 * Return: 0 (success)
 */

int main(int ag, char **av)
{
	int file_desc;

	Elf64_Ehdr header;

	if (ag != 2)
		error_msg(98, "Usage: elf_header elf_filename");

	file_desc = open(av[1], O_RDONLY);
	if (file_desc == -1)
		error_msg(98, "Error: Can't open file %s\n", av[1]);

	if ((read(file_desc, &header, sizeof(header))) != sizeof(header))
		error_msg(98, "Error: Cannot read ELF header\n");

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	    header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG3] != ELFMAG2 ||
	    header.e_ident[EI_MAG3] != ELFMAG3) {
		error_msg(98, "Error: %s file is not an ELF file",
				 av[1]);
	}

	print_elf(&header);

	close(file_desc);

	return (0);
}
