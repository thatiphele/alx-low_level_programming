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
	int count;
	x = 0;
	while (s[x] != '\0')
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[x] == ' ' || s[x] == '\t' || s[x] == '\n'
		    || s[x] == ',' || s[x] == ';' || s[x] == '.'
		    || s[x] == '.' || s[x] == '!' || s[x] == '?'
		    || s[x] == '"' || s[x] == '(' || s[x] == ')'
		    || s[x] == '{' || s[x] == '}')
		{
			if (s[x + 1] >= 97 && s[x + 1] <= 122)
			{
				s[x + 1] = s[x + 1] - 32;
			}
		}
		x++;
	}
	return (s);
}

