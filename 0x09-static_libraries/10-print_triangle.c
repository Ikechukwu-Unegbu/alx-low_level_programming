#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @dimension: input variable
 * Return: Always 0
 */
void print_triangle(int dimension)
{
	int i = 0, j, n = dimension - 1;

	if (dimension > 0)
	{
		for (; i < dimension; i++)
		{
			for (j = 0; j < dimension; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

