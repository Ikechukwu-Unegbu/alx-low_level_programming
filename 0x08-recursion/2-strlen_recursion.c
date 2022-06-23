#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string
 * Return: recursion or self
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
