#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints a sum of diagonals
 * of a square matrix of integers
 * @a: square matrix that is a 2D array
 * @size: size of matrix (amount of columns and rows)
 */

void print_diagsums(int *a, int size)

{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)

	{
		sum1 = sum1 + a[i * size + i];
		sum2 = sum2 + a[(size * (i + 1)) - (i + 1)];

	}

	printf("%d, %d\n", sum1, sum2);

}
