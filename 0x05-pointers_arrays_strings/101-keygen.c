#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point to generate keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int  x= 0, a = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (a < 2772)
	{
		x = rand() % 128;
		if ((a + x) > 2772)
			break;
		a = a + x;
		printf("%a", x);
	}
	printf("%a\n", (2772 - a));
	return (0);
}
