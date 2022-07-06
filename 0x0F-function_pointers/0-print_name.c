#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function that takes and name and pointer to 
 * a printing function and prints the name
 * @name: pointer to a name to print
 * @f: pointer to a printing function
 * 
 */
void print_name(char *name, void (*f)(char*))
{
    if( !name || !f)
        return;
    f(name);
}
