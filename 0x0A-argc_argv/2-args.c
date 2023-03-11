
#include <stdio.h>

/**
 * main - A function that prints all arguments it receives.
 * @argc: The number of command line arguments.
 * @argv: The array that contains the program command line arguments.
 * Return: 0 (Always success)
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
