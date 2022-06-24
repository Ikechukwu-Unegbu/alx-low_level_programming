#include <stdio.h>
/**
 * main - this function will print the no of arguments passed to it.
 * @argc: no. of command line args
 * @argv: array to contain the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
