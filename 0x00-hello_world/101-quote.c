#include <stdio.h>
#include <unistd.h>

/**
 * main - the code body and will print "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19", and next to it will be a new line
 * Return: will return zero if correct
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
