#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - af function that prints sums
 * @a: a pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int x, sum0 = 0, sum1 = 0;

	for (x = 0; x < size; x++)
	{
		sum0 += *(a + (size * x + x));
		sum1 += *(a + (size * x + size - 1 - x));
	}
	printf("%d, ", sum0);
	printf("%d\n", sum1);
}
