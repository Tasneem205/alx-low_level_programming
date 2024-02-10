#include "main.h"
/**
 * _isalpha- is this char alphabet
 *
 * @c: the char
 * Return: 1 if alpha 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
