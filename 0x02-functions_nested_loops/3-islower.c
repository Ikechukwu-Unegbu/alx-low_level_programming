#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: c is an ascii character
 *
 * Return: 1 if lowercase
 */

int _islower(int x)
{
	if (x >= 'a' && x <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
