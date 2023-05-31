#include <stdarg.h>
#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

void printchar(char *sep, va_list func);

void printint(char *sep, va_list func);

void printfloat(char *sep, va_list func);

void printstring(char *sep, va_list func);
#endif /* VARIADIC_FUNCTIONS_H */

