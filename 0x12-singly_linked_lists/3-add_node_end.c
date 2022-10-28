#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *mew, *temp;
	size_t data;

	mew = malloc(sizeof(list_t));
	if (mew == NULL)
		return (NULL);

	mew->str = strdup(str);

	for (data = 0; str[data]; data++)
		;

	mew->len = data;
	mew->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = mew;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = mew;
	}

	return (*head);
}
