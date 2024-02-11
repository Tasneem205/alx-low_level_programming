#include "main.h"
/**
 *puts_half - puts half of a string
 *@str: string
 *Return:void
 */
void puts_half(char *str)
{
	int count, len;

	if (str[0] != '\0')
	{
		for (count = 0; str[count] != '\0'; count++)

		len = count;

		if (len % 2 == 0)
		{
			len = len / 2;
			len += 1;
		}
		else
		{
			len = (len + 1) / 2;
		}
		while (str[len] != '\0')
		{
			_putchar(str[len]);
			len++;
		}
	}
	_putchar('\n');
}
