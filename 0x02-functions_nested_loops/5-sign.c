#include "main.h"
/**
 * print_sign- prints the sign of a num
 *
 * @n: the number
 * Return: what it returns
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
