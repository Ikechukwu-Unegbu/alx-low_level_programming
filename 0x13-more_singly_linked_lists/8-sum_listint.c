#include "lists.h"

/**
 * sum_listint - sums all list element
 * @head: head of a list
 *
 * Return: sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int summation;

	summation = 0;
	while (head != NULL)
	{
		summation += head->n;
		head = head->next;
	}

	return (summation);
}
