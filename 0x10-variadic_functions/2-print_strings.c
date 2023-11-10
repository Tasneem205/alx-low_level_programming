#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, follwed by a new line
 * @seperator: string acts as a divisor
 * @n: count of the variables
*/


void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			s = "nil";
		printf("%s", s);
		if (i != n - 1 && seperator != NULL)
			printf("%s", seperator);
	}
	putchar('\n');
	va_end(ap);
}
