#include "main.h"
/**
 * _strcmp - this code will compare two strings
 * @s1: first string to be compared
 * @s2: second string to be compared.
 * Return: 0 
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0, a = 0;

	while (a == 0)
	{
		if ((*(s1 + x) == '\0') && (*(s2 + x) == '\0'))
			break;
		a = *(s1 + x) - *(s2 + x);
		x++;
	}

	return (a);
}
