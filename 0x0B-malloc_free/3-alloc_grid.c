#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **gridout;
	int a, j;

	if (width < 1 || height < 1)
		return (NULL);

	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		gridout[a] = malloc(width * sizeof(int));
		if (gridout[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(gridout[a]);
			free(gridout);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (j = 0; j < width; j++)
			gridout[a][j] = 0;

	return (gridout);
}
