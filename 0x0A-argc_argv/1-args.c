#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - the name of the function
 * @argc: it is used to count command line argument
 * @argv: the variables in a command line argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
