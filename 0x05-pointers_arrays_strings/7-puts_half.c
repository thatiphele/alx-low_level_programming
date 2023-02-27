#include "main.h"
#include <stdio.h>

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
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}

	str -= (i / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
