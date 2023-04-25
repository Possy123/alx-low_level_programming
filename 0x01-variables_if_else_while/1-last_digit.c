#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of code
 * Decription: This program will assign a random
 * number to the variable n each time it is executed
 * Return: Always 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("Last digit of %i is %i and is ", n, m);
	if (m > 5)
		printf("greater than 5\n");
	else if (m == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
