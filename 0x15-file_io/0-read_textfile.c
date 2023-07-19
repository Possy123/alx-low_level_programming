#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - read text file
 * @filename: name of file
 * @letters: number of bytes
 * Return: contect of file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	ssize_t i;
	ssize_t t;
	char *str = malloc(sizeof(char) * (letters + 1));

	if (filename == NULL || str == NULL || fd == -1)
	{
		free(str);
		return (0);
	}
	i = read(fd, str, letters);

	t = write(1, str, i);

	free(str);
	close(fd);
	return (t);
}
