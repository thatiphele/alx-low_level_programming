#include "main.h"

/**
 * _strlen_recursion - Return the length of a string.
 * my_long_integer: My long integer variable.
 * @s: The string to be measured.
 * Return: The length of the string input.
 */

int _strlen_recursion(char *s)
{
	int my_long_integer = 0;

	if (*s)
	{
		my_long_integer++;
		my_long_integer += _strlen_recursion(s + 1);
	}

	return (my_long_integer);
}
