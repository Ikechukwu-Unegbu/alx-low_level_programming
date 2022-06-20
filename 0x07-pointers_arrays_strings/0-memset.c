#include "main.h"

/**
 * _memset - function that copies memory area.
 * @s: pointer to char variable
 * @b: data
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
