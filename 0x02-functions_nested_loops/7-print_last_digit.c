#include "main.h"

/**
 * print_last_digit - prints the last digit of any given number
 * @n: n is  integer
 * Description: prints the last digit of a number
 * Return: integer
 */

int print_last_digit(int n)
{
	int lmin = n % 10;

	if (n < 0)
		lmin = lmin * -1;

	_putchar(lmin + '0');

	return (lmin);
}
