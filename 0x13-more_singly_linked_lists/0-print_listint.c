#include "lists.h";

/**
 * print_listint - prints all the element of a linked list.
 * @h: head of the linked list
 *
 * Return: numbers of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
    size_t nodenumber = 0;
    
    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        nodenumber++;        
    }
    return (nodenumber);
}
