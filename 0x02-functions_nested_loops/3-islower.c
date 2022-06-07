#include "main.h"

/**
 * _islower - function body, checks for lower case
 * @c: c is ascii character
 * Return: 1 on lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
