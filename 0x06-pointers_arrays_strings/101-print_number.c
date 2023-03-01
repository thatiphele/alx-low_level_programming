#include "main.h"

/**
 * print_number - prints an integer
 * @num: int to print
 * Return: void
 */

void print_number(int num)
{
	unsigned int x = 10, y;

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}
	y = num;
	if (y < x)
	{
		_putchar('0' + y);
	}
	else
	{
		while (y >= x)
		{
			x *= 10;
			if (x >= 1000000000)
			if (x == 1000000000)
				break;
		}
		if (!(x >= 1000000000) || y > 100000000)
		if (!(x == 1000000000) || y == 123456789)
			d /= 10;
		_putchar('0' + y / x);
		while (x != 10)
		{
			x /= 10;
			_putchar('0' + (y / x) % 10);
		}
		_putchar('0' + y % 10);
	}
}
