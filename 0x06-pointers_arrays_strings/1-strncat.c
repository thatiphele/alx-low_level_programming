#include "main.h"
#include <string.h>

/**
 * _strncat - A function that concatenates two strings.
 * @dest: 1st parameters
 * @src: 2nd parameter
 *@n: 3rd parameter
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, length = 0;

	while (dest[index++])
	length++;
	for (index = 0; src[index] && index < n; index++)
	dest[length++] = src[index];

	return (dest);
}
