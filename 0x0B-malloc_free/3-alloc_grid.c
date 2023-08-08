#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - main function.
 * @width: first string
 * @height: sec string
 *
 * Description: function that concatenates two strings.,
 *
 * Return: Null if Failed, and string if succ
 */
int **alloc_grid(int width, int height)
{ 
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	int **grid;

	**grid = (int **)malloc(height * sizeof(int *));
    	if (grid == NULL)
	{
		return (NULL);
    	}
    	int i, j;

    	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
	    		for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
