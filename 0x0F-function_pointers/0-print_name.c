#include "function_pointers.h"
/**
 * print_name - print a name in a spacific way
 * @name: name of the person
 * @f: pointer to a function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
