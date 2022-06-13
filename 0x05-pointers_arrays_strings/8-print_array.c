#include "main.h"
#include <stdio.h>

/**
 * print_array - this function prints n elements of an array.
 * @a: input array.
 * @n: input
 * Return: void
 */
void print_array(int *a, int n)
{
	int x = 0;

	for (; x < n; x++)
	{
		printf("%d", *(a + x));
		if (x != (n - 1))
			printf(", ");
	}
	printf("\n");
}
