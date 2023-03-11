#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the sum of positive numbers,
 *        followed by a new line.
 * @argc: The number of argument items passed to the program.
 * @argv: An array of pointers that point to the arguments.
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Else - 0.
 */

int main(int argc, char *argv[])
{
	int x, digit, sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (digit = 0; argv[x][digit]; digit++)
		{
			if (argv[x][digit] < '0' || argv[x][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[x]);
	}

	printf("%d\n", sum);

	return (0);
}
