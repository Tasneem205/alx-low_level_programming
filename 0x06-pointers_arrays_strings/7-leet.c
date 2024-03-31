#include "main.h"
/**
 * leet - function that encode a string
 * @str: string that will be encoded
 * Return: returns encoded string
*/

char *leet(char *str)
{
	int index1 = 0, index2 = 0;

	char *arr = "aAeEoOtTlL";
	char *lee = "4433007711";

	while (str[index1])
	{
		for (index2 = 0; index2 < 10; index2++)
		{
			if (str[index1] == arr[index2])
				str[index1] = lee[index2];
		}
		index1++;
	}
	return (str);
}
