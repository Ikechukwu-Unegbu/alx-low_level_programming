#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 28; x < 38; x++)
	{
		putchar(x);
		if (x != 27)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}