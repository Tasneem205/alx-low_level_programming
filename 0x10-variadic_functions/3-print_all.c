#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: format to print a value
*/

void print_all(const char * const format, ...)
{
	va_list vp;
	char *s;
	int n = 0, i = 0;

	while (format[n] != '\0')
		n++;

	va_start(vp, format);

	while (i < n)
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(vp, int));
				break;
			case 'f':
				printf("%f", va_arg(vp, double));
				break;
			case 'c':
				printf("%c", va_arg(vp, int));
				break;
			case 's':
				s = va_arg(vp, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
		}
		if (i != n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(vp);
}
