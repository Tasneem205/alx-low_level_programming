#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars, and
* initializes it with a specific char.
*@size: Size of the array
*@c: Character to insert
*Return: NULL if size is zero or if it fails,
*pointer to array if everything is normal.
*/

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (int i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
