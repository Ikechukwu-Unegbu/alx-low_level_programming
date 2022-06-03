#include <stdio.h>

/**
 * main - code body
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 28; x < 38; x++)
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
