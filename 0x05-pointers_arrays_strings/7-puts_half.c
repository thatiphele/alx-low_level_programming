#include "main.h"

/**
 *puts2 - prints even characters of a string
 *
 *@str:input
 *
 *Return:void
 *
 */

void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		count++;
		str++;
	}

	str -= (count / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
