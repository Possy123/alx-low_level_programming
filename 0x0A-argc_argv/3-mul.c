#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: counts argument
 * @argv: prints variables
 * atoi: ASCII to interger
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int mul = a * b;

			printf("%d\n", mul);
	}
	return (0);
}
