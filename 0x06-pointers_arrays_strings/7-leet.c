#include "main.h"
/**
 * leet - function that encode a string
 * @str: string that will be encoded
 * Return: returns encoded string
*/

char *leet(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] == 'a' || str[index] == 'A')
			str[index] = '4';
		else if (str[index] == 'e' || )
		index++;
	}
	return (str);
}
