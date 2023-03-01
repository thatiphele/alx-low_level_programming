#include"main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int j, k, temp;

	k = n - 1;

	for (j = 0; j < n / 2; j++)
	{
		temp = a[j];
		a[j] = a[k];
		a[k--] = temp;
	}
}
