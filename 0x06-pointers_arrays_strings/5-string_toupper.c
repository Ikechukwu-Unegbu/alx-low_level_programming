#include "main.h"
/**
 * string_toupper - this code will change all lowercase letters 
 * of a string to uppercase letters
 * @s: input string.
 * Return: pointer
 */

char *string_toupper(char *s)
{
	int counter = 0;

	while (*(s + counter) != '\0')
	{
		if ((*(s + counter) >= 97) && (*(s + counter) <= 122))
			*(s + counter) = *(s + counter) - 32;
		counter++;
	}

	return (s);
}
