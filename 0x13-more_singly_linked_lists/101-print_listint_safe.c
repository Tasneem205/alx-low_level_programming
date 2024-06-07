#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a linked list
 * @head: head of the list
 *
 * Return: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cursor = head;
	size_t count = 0;
	long int diff;

	while (cursor != NULL)
	{
		diff = cursor - cursor->next;
		count += 1;
		printf("[%p] %d\n", (void *)cursor, cursor->n);
		if (diff > 0)
		{
			cursor = cursor->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)cursor->next, cursor->next->n);
			break;
		}
	}
	return (count);
}
