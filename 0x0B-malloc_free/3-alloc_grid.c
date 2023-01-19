#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 *              with each element of the array initialized to 0
 * @width: The width (columns) of the 2-dimensional array
 * @height: The height (rows) of the 2-dimensional array
 *
 * Return: If width <= 0, height <= 0 - NULL
 *         If function fails - NULL
 *         Otherwise - a pointer to the 2-dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ar;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ar = malloc(sizeof(int *) * height);

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(sizeof(int) * width);

		if (ar[i] == NULL)
		{
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}

	return (ar);
}
