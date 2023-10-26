#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include "main.h"

#define BUF_SIZE 64
/**
 * display_elf_header_info - display info
 * @elf_filename: file name
 */
void display_elf_header_info(const char *elf_filename)
{
	int fd, i;
	Elf64_Ehdr elf_header;

	fd = open(elf_filename, O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Cannot open file %s\n", elf_filename);
		exit(98);
	}
	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Error: Cannot read ELF header from file %s\n",
				elf_filename);
		close(fd);
		exit(98);
	}
	if (lseek(fd, (off_t)0, SEEK_SET) == (off_t)-1)
	{
		fprintf(stderr, "Error: Cannot seek to the beginning of file %s\n",
				elf_filename);
		close(fd);
		exit(98);
	}
	printf("ELF Header:\n");
	printf("  Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header.e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n",
			(elf_header.e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "Unknown");
	printf("  Data:                              %s\n", (elf_header.e_ident[EI_DATA] == ELFDATA2LSB)
			? "2's complement, little endian" : "Unknown");
	printf("  Version:                           %d (current)\n",
			elf_header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n",
			elf_header.e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n",
			elf_header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              0x%04x\n", elf_header.e_type);
	printf("  Entry point address:               0x%lx\n",
			(unsigned long)elf_header.e_entry);

	close(fd);
}

