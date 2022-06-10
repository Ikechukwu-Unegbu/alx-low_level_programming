#include "main.h"

/**
 * print_square - draws a square on terminal
 * @dimension: dimensions of the squere
 *
 * Return: void
 */

void print_square(int dimension)
{
	int row;
	int col;

	if (dimension > 0)
	{
		for (row = 0; row < dimension; row++)
		{
			for (col = 0; col < dimension; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
