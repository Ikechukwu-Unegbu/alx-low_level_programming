#include <stdio.h>

/**
 * main - Prints numbers between 0 to 89.
 * Return:  0 
 */
int main(void)
{
	int x, e;

	x = 48;
	y = 48;

	while (e < 58)
	{
		x = 48;
		while (x < 58)
		{
			if (e != x && y < x)
			{
				putchar(e);
				putchar(x);
				if (x == 57 && y == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			x++;
		}
		y++;
	}
	putchar('\n');
	return (0);
}
