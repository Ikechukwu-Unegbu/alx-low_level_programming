#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers.
 * @separator: separator string
 * @n: number of integers passed.
 *
 * Return: no return.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int number;

   

	va_start(valist, n);

	for (number = 0; number < n; number++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && number < n - 1)
        {
            printf("%s", separator);
        }
        
	}

	printf("\n");
	va_end(valist);
}
