#include "lists.h"

/**
 * dlistint_len - prints the d linked list
 * @h: the head of the list
 *
 * Return: size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
