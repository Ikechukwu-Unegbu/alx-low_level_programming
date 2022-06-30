#include "main.h"

/**
 * malloc_checked - this function allocates memory via malloc
 * @b: bytes allocated.
 * Return: pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
