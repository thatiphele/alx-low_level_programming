#include <stdio.h>

/**
 * main - A function that prints the number of arguments passed into it.
 * @argc: The argument count
 * @argv: The arguments
 *
 * Return: 0 (Always Success).
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
