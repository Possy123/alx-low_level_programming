#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - to print all functions
 * @format: format
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	char *sep = ", ";
	const char *fmt = format;

	va_list func;

	va_start(func, format);

	while (*fmt != '\0' && *fmt)
	{
		if (*fmt == 'c')
		{
			printchar(sep, func);
		}
		else if (*fmt == 'i')
		{
			printint(sep, func);
		}
		else if (*fmt == 'f')
		{
			printfloat(sep, func);
		}
		else if (*fmt == 's')
		{
			printstring(sep, func);
		}
		fmt++;
	}
	printf("\n");

	va_end(func);
}
