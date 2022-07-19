#include "lists.h"

/**
 * free_listint - free list from memory
 * @head: head of linked list.
 *
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
