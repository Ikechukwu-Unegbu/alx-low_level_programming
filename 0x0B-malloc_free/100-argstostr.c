#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all the variables of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char or null
 */
char *argstostr(int ac, char **av)
{
	char *newstring;
	int c, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	newstring = malloc((c + 1) * sizeof(char));

	if (newstring == NULL)
	{
		free(newstring);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			newstring[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			newstring[ia] = av[i][j];
	}
	newstring[ia] = '\0';

	return (newstring);
}
