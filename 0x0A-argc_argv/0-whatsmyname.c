#include <stdio.h>
/**
 * main - it will name, followed by a new line.
 * @argc: no. of command line argz
 * @argv: array to contain the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
