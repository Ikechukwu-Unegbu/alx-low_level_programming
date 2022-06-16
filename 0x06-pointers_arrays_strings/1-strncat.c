#include "main.h"
/**
 * _strncat - this code concatenates two strings,
 * @dest: destination string.
 * @src: source string.
 * @n: amount of bytes
 * Return: will return the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count0 = 0, count1 = 0;

	while (*(dest + count0) != '\0')
	{
		count0++;
	}

	while (count1 < n)
	{
		*(dest + count0) = *(src + count1);
		if (*(src + count1) == '\0')
			break;
		count0++;
		count1++;
	}
	return (dest);
}
