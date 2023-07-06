#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 * main - main function
 * @argc: counts argument
 * @argv: prints variables
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int j = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
		for (; i < argc; i++)
		{
			for (; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
}
