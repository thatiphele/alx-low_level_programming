#include "main.h"

/**
 *puts_half - prints half the characters of a string
 *@str:input
 *Return:void
 */

void puts_half(char *str)
{
	int x = 0;

	for (x = 0; str[x] != '\0'; x++)
	{
	}
	x++;
	for (x = x / 2; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
