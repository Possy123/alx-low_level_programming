#include <stdio.h>

/**
 * _puts_recursion - prints out recursion
 * @s: string
 * Return: string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')/* string is null characte i.e end*/
	{
		putchar('\n');/* print a new line*/
	}
	else
	{
		putchar(*s);/* print the first letter of the string*/
		_puts_recursion(s + 1);/* keep printing the next letter*/
	}
}

