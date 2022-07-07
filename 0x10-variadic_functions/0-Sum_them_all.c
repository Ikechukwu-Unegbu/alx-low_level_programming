#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all the supplied variables
 * @n: the number of variables supplied.
 * Return: zero or sum of all supplied parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
    va_list numbers;
    unsigned int i, sum =0;
    
    if (n == 0)
		return (0);

    va_start(numbers, n);

    for(i = 0; i < n; i++)
    {

        sum += va_arg(numbers, int);

    }

    va_end(numbers);

    return (numbers);
}
