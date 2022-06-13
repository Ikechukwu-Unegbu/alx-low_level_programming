#include "main.h"

/**
 * print_rev - this function prints a string in reverse order
 * @s: string variable
 * Return: void
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	x--;
	while (x >= 0)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}
