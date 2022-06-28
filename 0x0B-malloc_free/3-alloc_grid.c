#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer of an array of integers or null
 */
int **alloc_grid(int width, int height)
{
	int **grdout;
	int x, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grdout = malloc(height * sizeof(int *));
	if (grdout == NULL)
	{
		free(grdout);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		grdout[x] = malloc(width * sizeof(int));
		if (grdout[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(grdout[x]);
			free(grdout);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
		for (j = 0; j < width; j++)
			grdout[x][j] = 0;

	return (grdout);
}
