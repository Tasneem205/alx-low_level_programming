#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, follwed by a new line
 * @seperator: string acts as a divisor
 * @n: count of the variables
*/

void print_numbers(const char * seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n-1; i++)
	{
		if (seperator != NULL)
			printf("%d%s", va_arg(ap, int), seperator);
		else
			printf("%d", va_arg(ap, int));
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
