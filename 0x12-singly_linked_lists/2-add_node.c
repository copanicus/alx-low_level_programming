#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *mew;
	size_t data;

	mew = malloc(sizeof(list_t));
	if (mew == NULL)
		return (NULL);

	new->str = strdup(str);

	for (data = 0; str[data]; data++)
		;

	mew->len = data;
	mew->next = *head;
	*head = mew;

	return (*head);
}
