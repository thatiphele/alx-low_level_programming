#include "main.h"
/**
 * _strstr - A function that locates a substring
 * @haystack: Locate a substring
 * @needle: Substring to locate
 *
 * Return: Pointer to start of the located substring,
 * or NULL, if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
