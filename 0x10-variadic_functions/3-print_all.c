#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j, c = 0;
	char *stringz;
	const char identifiers[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (identifiers[j])
		{
			if (format[i] == identifiers[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), c = 1;
			break;
		case 's':
			stringz = va_arg(valist, char *), c = 1;
			if (!stringz)
			{
				printf("(nil)");
				break;
			}
			printf("%s", stringz);
			break;
		} i++;
	}
	printf("\n"), va_end(valist);
}
