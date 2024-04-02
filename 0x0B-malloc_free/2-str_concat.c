#include "main.h"
#include <stdlib.h>
/**
* str_concat - a function that concatenates two strings.
*@s1:First string
*@s2:Second string
*
*Return: NULL in case of failure , but pointer to new string in
*case of success
*/
char *str_concat(char *s1, char *s2)
{
	int s1_size, s2_size;
	char *p;
	int i;

	/*if (s1 == NULL && s2 == NULL)
		return ("");*/

	s1_size = 0;
	s2_size = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s1_size])
		s1_size++;
	while (s2[s2_size])
		s2_size++;

	p = (char *) malloc((s1_size + s2_size + 1) * sizeof(char));

	i = 0;
	for (; i < s1_size; i++)
	{
		p[i] = s1[i];
	}

	for (; i < s1_size + s2_size; i++)
	{
		p[i] = s2[i - s1_size];
	}

	p[i] = '\0';

	return (p);
}
