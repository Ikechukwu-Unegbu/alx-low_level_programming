#include "main.h"

/**
 * main - entry point function
 * Description: prints _putchar
 * Return: 0
 */

int main(void)
{
	char putchar[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(putchar[i]);
	}
	_putchar('\n');

	return (0);
}
