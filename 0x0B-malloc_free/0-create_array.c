#include "main.h"
#include <stdlib.h>
/**
 * create_array - this function creates an array of chars.
 * @size: size of the array.
 * @c: char
 *
 * Return: pointer of an array of characters or null
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int x;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		cr[x] = c;

	return (cr);
}
