#include "main.h"

/**
 * puts2 - this function prints alternating chars of string with the first one
 * @str: string input variable
 * Return: void
 */

void puts2(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (x % 2 == 0)
			_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
