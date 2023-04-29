#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Return: 0
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
