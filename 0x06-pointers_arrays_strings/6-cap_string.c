#include "main.h"

/**
 *cap_string - capitalize every first letter of a word in a string.
 *separators of words are:  space, tabulation,
 * new line, (, ), {, and }.
 *@s: pointer to string.
 *
 *Return: pointer to s.
 */

char *cap_string(char *s)
{
	int x;

	x = 0;
	while (s[x])
	{
		while (!(s[x] >= 'a' && s[x] <= 'z'))
			x++;

		if (s[x - 1] == ' ' ||
		    s[x - 1] == '\t' ||
		    s[x - 1] == '\n' ||
		    s[x - 1] == ',' ||
		    s[x - 1] == ';' ||
		    s[x - 1] == '.' ||
		    s[x - 1] == '!' ||
		    s[x - 1] == '?' ||
		    s[x - 1] == '"' ||
		    s[x - 1] == '(' ||
		    s[x - 1] == ')' ||
		    s[x - 1] == '{' ||
		    s[x - 1] == '}' ||
		    x == 0)
			s[x] -= 32;

		x++;
	}

	return (s);
}

