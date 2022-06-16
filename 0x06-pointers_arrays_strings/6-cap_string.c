#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @n: input string
 * Return: caps on first letter of a separator
 */
char *cap_string(char *n)
{
	int a, x;
	int cap = 32;
	int septrs[] = {';', ',', '.', '"', '?',
		 '(', ')', '{', '}', ' ', '\n', '\t'};

	for (a = 0; n[a] != '\0'; a++)
	{
		if (n[a] >= 'a' && n[a] <= 'z')
		{
			n[a] = n[a] - cap;
		}

		cap = 0;

		for (x = 0; x <= 12; x++)
		{
			if (n[a] == septrs[x])
			{
				x = 12;
				cap = 32;
			}
		}
	}
	return (n);
}
