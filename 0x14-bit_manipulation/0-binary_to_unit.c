#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unsigned_int;
	int length, base_2;

	if (!b)
		return (0);

	unsigned_int = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, base_2 = 1; length >= 0; length--, base_2 *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			unsigned_int += base_2;
		}
	}

	return (unsigned_int);
}
