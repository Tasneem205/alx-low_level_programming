#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: the string
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	int i;
	char c = s[0];

	i = 0;
	while (c)
	{
		_putchar(c);
		i++;
		c = s[i];
	}
	_putchar('\n');
}
