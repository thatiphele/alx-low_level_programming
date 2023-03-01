#include "main.h"

/**
 *puts_half - prints half the characters of a string
 *
 *@str:input
 *
 *Return:void
 *
 */

void puts_half(char *str)
{
	int count, string = 0;

	while (str[string] != '\0')
		string++;
	if (string + 1 % 2 != '0')
		count = (string - 1) / 2;
	else
		count = (string / 2);
	count++;

for (string = count; str[string] != '\0'; string++)
	_putchar(str[string]);
	_putchar('\n');
}
