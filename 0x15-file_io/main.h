#ifndef MAIN_H
#define MAIN_H

ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
void copy_file(const char *file_from, const char *file_to);
/*void display_elf_header_info(const char *elf_filename);*/
/*void print_elf_header_info(Elf64_Ehdr *header);*/
#endif
