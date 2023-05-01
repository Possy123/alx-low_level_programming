#include <stdio.h>
#include "main.h"

/**
 * print_line - prints line
 * @n: interger
 * Return: none
 */
void print_line(int n)
{

	if (n <= 0)
		putchar ('\n');
	{
		int i = 0;

		while (i < n)
		{
			putchar('_');
			i++;
		}
	putchar('\n');
	}
}
