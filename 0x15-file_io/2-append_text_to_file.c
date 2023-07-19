#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - append
 * @filename: filename
 * @text_content: text
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *ptr = NULL;

	ptr = fopen(filename, "a");

	if (filename == NULL)
		return (-1);
	if (ptr == NULL || text_content == NULL)
		return (-1);
	if (text_content != NULL)
	{
		fputs(text_content, ptr);
	}
	fclose(ptr);
	return (1);
}
