#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - print reverse recursion
 * @s: string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
		putchar(*s);
}
