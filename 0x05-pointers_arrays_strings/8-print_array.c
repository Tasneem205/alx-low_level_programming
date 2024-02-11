/**
 * print_array - prints the array followed by a new line
 * @a: the array
 * @n: the size of the array
 * Returns: nothing
 */

#include <stdio.h>

void print_array(int *a, int n)
{
	int i, len;

	for (len = 0; a[len] != '\0';)
		len++;

	if (len >= n && n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
