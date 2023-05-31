#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void printchar(char *sep, va_list func)
{
	char ch = (char)va_arg(func, int);
	printf("%s%c", sep, ch);
}

void printint(char *sep, va_list func)
{
	 int in = va_arg(func, int);
	 printf("%s%d", sep, in);
}

void printfloat(char *sep, va_list func)
{
	float fl = (float)va_arg(func, double);
	printf("%s%f", sep, fl);
}
void printstring(char *sep, va_list func)
{
       char *st = va_arg(func, char*);
	 if (st == NULL)
		 printf("(nil)");
	 else
	 {
		 printf("%s%s", sep, st);
	 }
}
