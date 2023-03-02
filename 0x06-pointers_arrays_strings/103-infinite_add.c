#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int char_1 = 0, destr1, destr2, char_2 = 0, add = 0, op, bg;

	while (*(n1 + char_1) != '\0')
		char_1++;
	while (*(n2 + char_2) != '\0')
		char_2++;
	if (char_1 >= char_2)
		bg = char_1;
	else
		bg = char_2;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	char_1--, char_2--, size_r--;
	destr1 = *(n1 + char_1) - 48, destr2 = *(n2 + char_2) - 48;
	while (bg >= 0)
	{
		op = destr1 + destr2 + add;
		if (op >= 10)
			add = op / 10;
		else
			add = 0;
		if (op > 0)
		*(r + bg) = (op % 10) + 48;
		else
			*(r + bg) = '0';
		if (char_1 > 0)
			char_1--, destr1 = *(n1 + char_1) - 48;
		else
			destr1 = 0;
		if (char_2 > 0)
			char_2--, destr2 = *(n2 + char_2) - 48;
		else
			destr2 = 0;
		bg--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
