#include "main.h"

/**
 * get_bit - returns the value of a bit at an index
 * @n: unsigned long int given as input
 * @index: index of the bit
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (x == 0 && index < 64)
		return (0);

	for (x = 0; x <= 63; x >>= x, x++)
	{
		if (index == x)
		{
			return (n & 1);
		}
	}

	return (-1);
}
