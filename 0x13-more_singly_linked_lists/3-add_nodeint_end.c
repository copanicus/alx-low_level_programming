#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the mew element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *mew;
	listint_t *temp;

	(void)temp;

	mew = malloc(sizeof(listint_t));

	if (mew == NULL)
		return (NULL);

	mew->n = n;
	mew->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = mew;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = mew;
	}

	return (*head);
}
