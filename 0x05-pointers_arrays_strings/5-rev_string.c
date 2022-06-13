#include "main.h"

/**
 * rev_string - this function reverses a string
 * @s: string input variable
 * Return: void
 */

void rev_string(char *s)
{
	int i, mx, hf;
	char fst, lt;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	mx = i - 1;
	hf = mx / 2;
	while (hf >= 0)
	{
		fst = s[mx - hf];
		lt = s[hf];
		s[hf] = fst;
		s[mx - hf] = lt;
		hf--;
	}
}
