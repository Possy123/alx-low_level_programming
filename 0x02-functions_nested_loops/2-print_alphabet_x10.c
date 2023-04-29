#include <stdio.h>
#include "main.h"

/**
<<<<<<< HEAD
 * print_alphabet_x10 - prints alphabets x10
 *
 * Return: Always 0
=======
 * print_alphabet_x10 - Prints alphabet x10
 *
 * Return: Always 0.
>>>>>>> refs/remotes/origin/main
 */
void print_alphabet_x10(void)
{
	int i = 0;
<<<<<<< HEAD
		/* i represent alphabet count */
	while (i <= 9)
	{
		char ch = 'a';
		while (ch <= 'z')
	}
	putchar(ch);
	ch++;
	
	i++;
	return (0)
}
=======

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


>>>>>>> refs/remotes/origin/main
