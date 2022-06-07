#include "main.h"

/**
 * _islower - function body, checks for lower case
 * @x: x is ascii character
 * Return: 1 on lowercase
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
