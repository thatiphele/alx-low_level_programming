#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare 2 strings
 *@s1: 1st string
 *@s2: 2nd string
 * Return: 0 if match, and ns1 - ns2 if no match
 */
int _strcmp(char *s1, char *s2)
{
	while (*s && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);

}
