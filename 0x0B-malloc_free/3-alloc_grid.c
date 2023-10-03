#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Perfoms dynamic memory allocation
 * @width: width input
 * @height: height input
 * Return: pointer to 2D array or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int **grc;
	int i, y;

	if (width < 1 || height < 1)
		return (NULL);
	grc = malloc(sizeof(int *) * height);
	if (grc == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grc[i] = malloc(sizeof(int) * width);
		if (grc[i] == NULL)
		{
			for (--i; i >= 0; i--)
				free(grc[i]);
			free(grc);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (y = 0; y < width; y++)
			grc[i][y] = 0;
	return (grc );
}
