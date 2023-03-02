#include "main.h"

/**
 *leet - encodes a string into 1337
 *@s: pointer to string
 *
 *Return: pointer to s.
 */
char *leet(char *s)
{
	int j, k;
	char letter_char[] = "aAeEoOtTlL";
	char number_char[] = "4433007711";

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; k < 10; k++)
		{
			if (s[j] == letter_char[k])
			{
				s[j] = number_char[k];
			}
		}
	}
	return (s);
}
