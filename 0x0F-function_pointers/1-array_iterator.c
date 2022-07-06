#include <stdlib.h>
#include "function_pointers.h"

/**
 * 
 * 
 */

void array_iterator(int *array, size_t size,void (*action)(int))
{
    unsigned int x;

    if(!array || !action)
    {
        return;
    }

    for(x = 0; x < size; x++)
    {
        action(array[x]);
    }
}
