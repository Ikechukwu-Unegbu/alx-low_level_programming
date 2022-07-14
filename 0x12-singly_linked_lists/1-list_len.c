#include "list.h"

/**
 * list_len - returns then number of elements in list
 * @h: linked list
 * Return: number of element in list
 * 
 */

size_t list_len(const list_t *h)
{
    size_t lem;

    lem = 0;

    while (h != NULL)
    {
        h = h->next;
        lem++;
    }
    return (lem);
    
}
