#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size0 = 0, size1 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size0] != '\0')
	{
		size0++;
	}

	while (s2[size1] != '\0')
	{
		size1++;
	}

	if (n > size1)
	n = size1;
	p = malloc((size0 + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (i = 0; i < size0; i++)
	{
		p[i] = s1[i];
	}

	for (; i < (size0 + n); i++)
	{
		p[i] = s2[i - size0];
	}
	p[i] = '\0';

return (p);
}
