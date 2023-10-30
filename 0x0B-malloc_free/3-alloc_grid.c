#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - returns a pointer to a
*2 dimensional array of integers.
*@width: width of array
*@height: height of array
*
*Return: pointer to the array
*/

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return (NULL);
	int **p;

	**p = (int **) calloc(height, sizeof(int *));
	if (!p)
		return (NULL);
	for (int i = 0; i < height; ++i)
	{
		int *temp;

		*temp = (int *) calloc(width, sizeof(int));
		if (!temp)
		{
			/* then there is no enough memory, and we need to free our allocated memo.*/
			while (i >= 0)
			{
				free(p[i]);
				i--;
			}
			free(p);
			return (NULL);
		}
		else
		{
			for (int j = 0; j < width; ++j)
			{
				printf("%d", p[i][j]);
			}
			p[i] = temp;
		}
	}
	return (p);
}
