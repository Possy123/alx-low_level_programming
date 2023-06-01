#include <stdio.h>
#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
		int i,j;
		for (i = 0; s[i] != '\0'; i++)
