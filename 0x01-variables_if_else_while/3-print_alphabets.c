#include <stdio.h>

/**
 * main - prints the alphabet in upper and lower case followed by new line
 * Return: 0
 */
int main(void)
{
	int al;

	for (al = 'a'; al <= 'z'; al++)
		putchar(al);
	for (al = 'A'; al <= 'Z'; al++)
		putchar(al);
	putchar('\n');
	return (0);
}
