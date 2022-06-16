#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int x, y, cnter;

	if (n < 0)
	{
		_putchar(45);
		x = n * -1;
	}
	else
	{
		x = n;
	}

	y = x;
	cnter = 1;

	while (y > 9)
	{
		y /= 10;
		cnter *= 10;
	}

	for (; cnter >= 1; cnter /= 10)
	{
		_putchar(((x / cnter) % 10) + 48);
	}
}
