#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated
*space in memory, which contains a copy of the
*string given as a parameter.
*@str:String to be copied
*
*Return: NULL in case of error, pointer to allocated
*space
*/

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	int s;

	s = 0;
	while (str[s])
		s++;

	char *p;

	*p = (char *) malloc((s + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (int i = 0; i < s; i++)
	{
		p[i] = str[i];
	}
	p[s] = '\0';
	return (p);
}
