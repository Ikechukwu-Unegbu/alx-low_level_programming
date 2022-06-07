#include "main.h"

/**
 * print_alphabet_x10 - this function will print alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int num = 0;
	char alphabet = 'a';

	while (num < 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');

		num++;
	}
}
