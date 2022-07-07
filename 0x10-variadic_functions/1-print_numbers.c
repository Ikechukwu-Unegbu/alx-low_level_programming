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
	unsigned int i;

    if(separator == NULL)
    {
        return;
    }

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
