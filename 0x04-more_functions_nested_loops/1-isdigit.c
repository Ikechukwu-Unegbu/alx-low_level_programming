#include "main.h"

/**
 * _isdigit - this functiion check if given varaible c is a number between 0 to 9.
 * @c: supplied variable
 * Return: 1 if is a number btween 0 to 9, 0 if not.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
