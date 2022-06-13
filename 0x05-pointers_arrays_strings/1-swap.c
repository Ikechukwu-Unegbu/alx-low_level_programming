#include "main.h"

/**
 * swap_int - this function swaps the values of two integers
 * @a: pointer one
 * @b: pointer two
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
