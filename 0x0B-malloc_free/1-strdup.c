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
	int s;
	char *p;
	int i;

	if (str == NULL)
		return (NULL);

	s = 0;
	while (str[s])
		s++;

	p = (char *) malloc((s + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
	{
		p[i] = str[i];
	}

	p[s] = '\0';
	return (p);
}
