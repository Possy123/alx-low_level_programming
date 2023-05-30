#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - to print out numbers
 * @separator: to separate numbers
 * @n: number
 * Return: number
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list sti;

	va_start(sti, n);

	while (i < n)
	{
		char *str = va_arg(sti, char*);

	if (str == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", str);
	}
	if (separator != NULL && i < n - 1)
	{
		printf("%s", separator);
	}
	i++;
	}
	printf("\n");

	va_end(sti);
}
