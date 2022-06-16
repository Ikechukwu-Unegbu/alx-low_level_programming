#include "main.h"

/**
 * cap_string - this function capitalizes all words of a string
 * @n: input string variable
 * Return: caps on first letter of a separator
 */
char *cap_string(char *n)
{
	int a, x;
	int caps = 32;
	int septrs[] = {';', ',', '.', '"', '?',
		 '(', ')', '}', '{', ' ','\t','\n'};

	for (a = 0; n[a] != '\0'; a++)
	{
		if (n[a] >= 'a' && n[a] <= 'z')
		{
			n[a] = n[a] - caps;
		}

		caps = 0;

		for (x = 0; x <= 12; x++)
		{
			if (n[a] == septrs[x])
			{
				x = 12;
				caps = 32;
			}
		}
	}
	return (n);
}
