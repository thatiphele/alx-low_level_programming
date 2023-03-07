#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals of a
*square matrix of integers
* @a: the array
* @size: the size of array
**/

void print_diagsums(int *a, int size)
{
	int x;
	int y;
	int sum_zero = 0;
	int sum_1 = 0;

	for (x = 0; x < size * size; x += (size + 1))
	{
		sum_zero += a[x];
	}
	for (y = size - 1; y < size * size - (size - 1); y += (size - 1))
	{
		sum_1 += a[y];
	}
	printf("%d, %d\n", sum_zero, sum_1);
}
