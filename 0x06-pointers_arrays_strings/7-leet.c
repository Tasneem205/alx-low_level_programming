#include "main.h"
/**
 * leet - function that encode a string
 * @str: string that will be encoded
 * Return: returns encoded string
*/

char *leet(char *str)
{
	int index1 = 0, index2 = 0;

	char *arr = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char *lee = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (str[index1])
	{
		for (index2 = 0' index2 < 10; index2++)
		{
			if (str[index1] == arr[index2])
				str[index1] = lee[index2];
		}
		index1++;
	}
	return (str);
}
