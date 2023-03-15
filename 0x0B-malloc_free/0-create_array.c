#include "main.h"

/**
 * *create_array - Creates an array of char & initializes it with a spec char.
 * @size: The size type required.
 * @c: The array of char.
 * Return:c as an array of chars
 * else return NULL if size = 0.
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int x;

	buffer = malloc(sizeof(char) * size);
	if (size == 0 || buffer == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		buffer[x] = c;
	return (buffer);
}
