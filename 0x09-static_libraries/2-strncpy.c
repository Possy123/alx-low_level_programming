#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copy string
 * @dest: still learning
 * @src: still learning
 * @n: still learning
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len1; 
	int len2;
	int i;

	len1 = 0;
	len2 = 0;

	while (src[len1] != '\0')
		len1++;

	while (dest[len2] != '\0')
		len2++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
