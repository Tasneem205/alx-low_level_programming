#include "main.h"
/**
 * _islower- is this int lower case
 *
 * @c: the char
 * Return: 0 if not, 1 if lower
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
