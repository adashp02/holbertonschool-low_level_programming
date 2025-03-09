#include <stdio.h>

/**
 * main - prints all arguments given to this program
 * @argc: number of arguments
 * @argv: array of parameters
 * Return 0
 */

int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)

	{
		printf("%s\n", argv[i]);

	}
	return (0);

}
