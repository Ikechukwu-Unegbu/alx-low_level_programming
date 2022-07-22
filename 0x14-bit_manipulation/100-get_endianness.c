#include "main.h"

/**
 * get_endianness - check endianness
 *
 * Return: 0 if big endian esle 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *y;

	x = 1;
	y = (char *) &x;

	return ((int)*y);
}
