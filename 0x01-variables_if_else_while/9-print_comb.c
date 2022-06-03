#include <stdio.h>

/**
 * main - code body
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 38; x < 48; x++)
	{
		putchar(x);
		if (x != 37)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
