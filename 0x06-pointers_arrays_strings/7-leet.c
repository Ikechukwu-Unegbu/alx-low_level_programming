#include "main.h"

/**
 * leet - Entry point, encodes a string to 1337
 * @n: input 
 * Return: Always 0 (Success)
 */
char *leet(char *n)
{
	int i, x;
	int fnd[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int rplcer[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (n[i] == fnd[x])
			{
				n[i] = rplcer[x / 2];
				x = 9;
			}
		}
	}

	return (n);
}