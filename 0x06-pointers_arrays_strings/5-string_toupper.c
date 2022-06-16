#include "main.h"
/**
 * string_toupper - function change all lowercase letters of a string
 * to uppercase letters
 * @s: input string.
 * Return: pointer to dest
 */

char *string_toupper(char *s)
{
	int cnter = 0;

	while (*(s + cnter) != '\0')
	{
		if ((*(s + cnter) >= 97) && (*(s + cnter) <= 122))
			*(s + cnter) = *(s + cnter) - 32;
		cnter++;
	}

	return (s);
}
