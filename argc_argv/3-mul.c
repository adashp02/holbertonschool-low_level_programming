#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 given numbers
 * and prints out the result
 * @argc: number of parameters
 * @argv: array of parameters
 * Return: 0 success, 1 error
 */

int main(int argc, char *argv[])

{
	int i;
	int j;
	int result;

	if (argc <= 2)

	{
		printf("Error\n");

		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	result = i * j;

	printf("%d\n", result);

	return (0);

}

