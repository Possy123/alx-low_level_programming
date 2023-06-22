#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - to print a name
 * @name: the name
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f = &print_name;

	if (name != NULL || f != NULL)
	f(name);
}
