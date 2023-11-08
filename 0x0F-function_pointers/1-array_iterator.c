#include <stddef.h>
/**
 * array_iterator - apply an action on each number in an array
 * @array: list of numbers
 * @size: size of the array
 * @action: pointer to the function of the action
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
