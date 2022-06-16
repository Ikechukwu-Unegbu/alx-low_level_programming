#include "main.h"
/**
 * rot13 - this code encodes a string using rot13
 * @s: input string variable
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int counter = 0, x;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + counter) != '\0')
	{
		for (x = 0; x < 52; x++)
		{
			if (*(s + counter) == alpha[x])
			{
				*(s + counter) = rot13[x];
				break;
			}
		}
		counter++;
	}

	return (s);
}
