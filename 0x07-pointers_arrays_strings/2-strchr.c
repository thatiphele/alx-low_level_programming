#include "main.h"
/**
 *_strchr - locates a character in a string
 *@s: string
 *@c: string
 *Return: a pointer to the first occurrence of character c in the string s
 *or NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	if (s[x] == c)
		return (s + x);
	return (0);
}
