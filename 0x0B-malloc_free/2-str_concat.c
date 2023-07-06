#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - concates two strings
 * @s1: first strings
 * @s2: second string
 * Return: newly allocated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);

	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL);

	strcpy(concat, s1);
	strcpy(concat, s2);

	return (concat);
}
