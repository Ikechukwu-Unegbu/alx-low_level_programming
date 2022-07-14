#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list
 * @head: head of the list.
 * @str: string to store in list
 * Return: address to list head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;
	size_t chars;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (chars = 0; str[chars]; chars++)
		;

	newnode->len = chars;
	newnode->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}

	return (*head);
}
