#include "main.h"

int recursion_str_len(char *s);
int pal_checker(char *s, int i, int len);

/**
 * is_palindrome - Verifies if an inputed string is a palindrome or not.
 * @s: The string to reverse.
 * pal_ checker - Checks characters recursively for a palindrome.
 * Return: 1 if it is a palindrome,else 0 if it's not a palindrome.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pal_checker(s, 0, recursion_str_len(s)));
}

/**
 * recursion_str_len - A function that returns the length of a string.
 * @s: A string that calculates the length.
 * Return: The length of the string.
 */

int recursion_str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + recursion_str_len(s + 1));
}

/**
 * pal_checker - Checks characters recursively for a palindrome.
 * @length: Length of string.
 * @s: The recursive string checker.
 * @x: The iterator.
 * Return: Return 1 if it is a palindrome, else 0 if it's not.
 */

int pal_checker(char *s, int x, int length)

{
	if (*(s + x) != *(s + length - 1))
		return (0);
	if (x >= length)
		return (1);
	return (pal_checker(s, x + 1, length - 1));
}
