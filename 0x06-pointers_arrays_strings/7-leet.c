#include "main.h"

/**
 *leet - encodes a string into 1337
 *@s: pointer to string
 *
 *Return: pointer to s.
 */
char *leet(char *s)
{
	int strCount, leet_Cnt;
	char letter_char[] = "aAeEoOtTlL";
	char number_char[] = "4433007711";

	strCount = 0;
	while (s[strCount] != '\0')
	{
		leet_Cnt = 0;
		while (leet_Cnt < 10)
		{
			if (letters[leet_Cnt] == s[strCount])
			{
				s[strCount] = number_char[leet_Cnt];
			}
			leet_Cnt++;
		}
		strCount++;
	}
	return (s);
}
