#include "main.h"

/**
* _memcpy - a function that copies memory area
* @dest: char
* @src: char
* @n: int
* Return: a pointer to dest
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n ; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
