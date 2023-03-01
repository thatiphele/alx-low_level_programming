#include "main.h"
#include <stdio.h>

/**
 * rot13 - Function that encodes a string with rot13
 *
 * @s: String that will be encoded
 *
 * Return: string that was encoded with rot13
 */

char *rot13(char *s)
{
	int x, y;
	char a_1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char a_2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; a_1[y] != '\0'; y++)
		{

			if (s[x] == a_1[y])
			{
				s[x] = a_2[y];
				break;
			}
		}
	}
	return (s);
}
