#include <stdio.h>

/**
 * main - this program prints its own name
 * using argc and argv
 *@argc: number of arguments with atribue unused
 *@argv: array of arguments

 * Return: 0 success
 */

int main(int argc __attribute__((unused)), char *argv[])

{
	printf("%s\n", argv[0]);

	return (0);
}

