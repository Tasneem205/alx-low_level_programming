#include "lists.h"

/**
 * sum_dlistint - sum the list
 * @head: the head
 *
 * Return: the sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
