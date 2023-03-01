#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *@s1: 1st string
 *@s2: 2nd string
 * Return: 0 if match, and ns1 - ns2 if no match
 */
{
	while (*s && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);

}
