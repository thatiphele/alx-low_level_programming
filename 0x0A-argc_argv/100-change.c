#include <stdlib.h>
#include <stdio.h>

/**
 * main - A function that prints the minimum number of coins to make change
 * for an amount of money
 * @argc: The argument counter
 * @argv: The arguments
 * Return: 0 (Always Success)
 */

int main(int argc, char **argv)
{
	int result, x;
	unsigned int y;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	result = strtol(argv[1], &p, 10);
	x = 0;

	if (!*p)
	{
		while (result > 1)
		{
			for (y = 0; y < sizeof(cents[y]); y++)
			{
				if (result >= cents[y])
				{
					x += result / cents[y];
					result %= cents[y];
				}
			}
		}
		if (result == 1)
			x++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", x);
	return (0);
}
