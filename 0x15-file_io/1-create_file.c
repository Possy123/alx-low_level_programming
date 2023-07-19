#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - creates a new file
 * @filename: name of file
 * @text_content: text content
 * Return: 1 on sucess
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp = fopen(filename, "w");

	if (filename == NULL)
	{
		return (-1);
	}
	if (fp == NULL)
	{
		write(1, "fails", 6);
		return (-1);
	}
	if (text_content != NULL)
	{
		fputs(text_content, fp);
	}
	fclose(fp);
	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
	{
		return (-1);
	}
	return (1);
}
