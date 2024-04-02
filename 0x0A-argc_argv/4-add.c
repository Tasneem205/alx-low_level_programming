#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int is_digit(char *str);
/**
* main - a program that adds positive numbers.
* @argc: arguments count
* @argv: arguments vector
* Return: 0 if succeeded, 1 otherwise.
*/
int main(int argc, char *argv[])
{
	int i, result = 0, n;

	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);
		if (!is_digit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		result += n;
	}
	printf("%d\n", result);
	return (0);
}

/**
 * is_digit - finds if this string is digits
 * @str: the string
 * Return: True if digits false if not
 */
int is_digit(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
