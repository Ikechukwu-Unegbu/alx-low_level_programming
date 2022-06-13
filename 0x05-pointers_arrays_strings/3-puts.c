#include "main.h"

/**
 * _puts - this functin prints string followed by newline
 * @str: string input variable
 * Return: void
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}

	_putchar('\n');
}
