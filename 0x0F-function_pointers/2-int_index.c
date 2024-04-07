#include <stddef.h>
/**
 * int_index - searches for an integer
 * @array: list of numbers
 * @size: size of the array
 * @cmp: pointer to a function
 *
 * Return: index.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
