#include <stdio.h>
#include <stdlib.h>

/**
 * main - multplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int p, o, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	p = atoi(argv[1]);
	o = atoi(argv[2]);
	mul = p * o;

	printf("%d\n", mul);
	return (0);
}
