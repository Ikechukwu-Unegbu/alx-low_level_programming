#include "main.h"

/**
 * _isupper - this functin checks for upper case
 * @c: parameter the function needs to work
 * Return: 1 if c is upper or 0 if not
 */
int _isupper(int c)
{
	char upper = 'A';
	int isupper = 0;

	for (; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
