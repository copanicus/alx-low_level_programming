#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *a;

	p = NULL;
	a = NULL;

	while (*head != NULL)
	{
		a = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = a;
	}

	*head = p;
	return (*head);
}
