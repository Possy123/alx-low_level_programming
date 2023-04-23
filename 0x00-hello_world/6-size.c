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
	printf("the size of a char %lu bytes\n", sizeof(char));
	printf("the size of an int %lu bytes\n", sizeof(int));
	printf("the size of a long int %lu bytes\n", sizeof(long int));
	printf("the size of a long long int %lu bytes\n", sizeof(long long int));
	printf("the size of a float %lu bytes\n", sizeof(float));

	return (0);
}
