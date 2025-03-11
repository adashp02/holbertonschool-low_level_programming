#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid (columns)
 * @height: hight of the grid (rows)
 *
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)

{
	int i, j;
	int **array;

	if (width <= 0)

		return (NULL);

	if (height <= 0)

		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);
	/* allocating memory to a pointer to array of pointers or pointers to columns */
		if (array == NULL)

			return (NULL);

	for (i = 0; i < height; i++)

	{

		array[i] = (int *) malloc(sizeof(int) * width);
		/* allocating memory to pointer for each row of this array */

			if (array == NULL)
			/* if any malloc fails in this - free memory as you progress */
			{
				free(array);

				for (j = 0; j <= i; j++)

				{
					free(array[j]);

					return (NULL);
				}

			}

	}

	for (i = 0; i < height; i++)

	{
		for (j = 0; j < width; j++)

		{

		array[i][j] = 0;

		}

	}

	return (array);

}


