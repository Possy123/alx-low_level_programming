#include <stdio.h>

/**
 * main - main function
 * @argc: to count
 * @argv: to print out variable
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	(void)argc;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
