#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char low;

for (low = 'a'; low <= 'z'; low++)
	printf("%c", low);
printf("\n");

return (0);
}
