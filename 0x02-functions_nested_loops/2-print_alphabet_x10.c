#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet x10
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		int ch = 'a';

		while (ch <= 'z')

		{
		_putchar(ch);
		ch++;
		}
	i++;
	_putchar('\n');
	}
}


