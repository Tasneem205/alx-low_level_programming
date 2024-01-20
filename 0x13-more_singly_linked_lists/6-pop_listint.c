#include "lists.h"

/**
*pop_listint - deletes the head node of a linked list
*@head: head of the list
*
*Return: the deleted node data
*/

int pop_listint(listint_t **head)
{
	listint_t *popped;
	int content;

	if (head == NULL || *head == NULL)
		return (0);

	content = (*head)->n;
	popped = *head;
	*head = (*head)->next;
	free(popped);
	return (content);
}
