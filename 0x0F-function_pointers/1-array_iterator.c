#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - the function to iterate through an array
 * @array: input array
 * @size: array size
 * @action: function to act on the array items  
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (!array || !action)
		return;

	for (x = 0; x < size; x++)
		action(array[x]);
}

