#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function will return a pointer to a newly allocated
 * space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars or null.
 */
char *_strdup(char *str)
{
	char *stout;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;

	stout = (char *)malloc(sizeof(char) * (i + 1));

	if (stout == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		stout[j] = str[j];

	return (stout);
}
