#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog with it's params
 * @dog: the dog structure
 * Return: null
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\nOnwer: %s\n", d->age, d->owner);
	}
}
