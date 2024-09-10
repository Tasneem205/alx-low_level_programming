#include "lists.h"

/**
 * get_dnodeint_at_index - return node at some index
 * @head: the head
 * @index: the index
 *
 * Return: pointer to the link.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head)
	{
		if (i == index)
			return head;
		head = head->next;
		i++;
	}
	return (NULL);
}
