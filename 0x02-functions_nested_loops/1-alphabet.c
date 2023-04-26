#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - function to print alphabet
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
