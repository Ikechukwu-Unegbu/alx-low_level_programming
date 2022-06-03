#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * Return: 0
 */
int main(void)
{
	int x;
	char al;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	for (al = 'a'; al <= 'f'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
