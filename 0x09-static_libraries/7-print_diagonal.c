#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: input which is an integer
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int x = 0, y;

	if (n > 0)
	{
		for (; x < n; x++)
		{
			for (y = 0; y < x; y++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
