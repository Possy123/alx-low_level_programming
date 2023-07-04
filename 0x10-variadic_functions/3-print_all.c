#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all -  prints all
 * @format: prints data type
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *str;

	va_list(all);
	va_start(all, format);
	while (format && format[a])
	{
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(all, int));
				break;
			case 'i':
				printf("%i", va_arg(all, int));
				break;
			case 'f':
				printf("%f", va_arg(all, double));
				break;
			case 's':
				str = va_arg(all, char *);

				if (str == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", str);
				}
				break;
			default:
				a++;
				continue;
		}
		if (format[a + 1])
		{
			printf(", ");
		}
		a++;
	}
	va_end(all);
	printf("\n");
}
