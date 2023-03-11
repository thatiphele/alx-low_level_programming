#include <stdio.h>

/**
 * main -  A function that prints its name.
 * @argc: The number of command line arguments.
 * @argv: The array that houses the program command line arguments.
 * Return: 0 (Always success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

