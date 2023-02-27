#include "main.h"
#include <stdio.h>

/**
 * print_array - print 'n' elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers must be seperated by comma and space.
 * I can only use _putchar to print.
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");

}
