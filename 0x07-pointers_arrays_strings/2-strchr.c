#include "main.h"

/**
 * _strchr - function to find a char in a string
 * @s: pointer to character to search
 * @c: character to be found
 * Return: *S
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
