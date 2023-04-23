/*
 * This code is to print out sizes
 * Done by Posi
 */

#include <stdio.h>

/**
 * main - entry point
 * Description: to print out differnt sizes
 *
 * main - prints "sizes of various types on the computer"
 * Return: Always 0.
 */
int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float e;

	printf("the size of a char: %lu byte(s)\n", sizeof(b));
	printf("the size of an int: %lu byte(s)\n", sizeof(a));
	printf("the size of a long int: %lu byte(s)\n", sizeof(c));
	printf("the size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("the size of a float: %lu byte(s)\n", sizeof(e));

	return (0);
}
