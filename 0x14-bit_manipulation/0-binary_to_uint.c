#include "main.h"
/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: the binary number as a string
 *
 * Return: the converted value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res, i, strlen;

	i = 1;
	res = 0;
	strlen = 0;

	while (b[strlen] != '\0')
		strlen++;

	while (strlen)
	{
		if (b[strlen - 1] == '1')
		{
			res += i;
			i *= 2;
		}
		else if (b[strlen - 1] == '0')
		{
			i *= 2;
		}
		else
		{
			return (0);
		}
		strlen--;
	}
	return res;
}
