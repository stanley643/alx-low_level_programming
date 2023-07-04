#include "lists.h"

/**
 * print_listint- the function of printing the values of a node
 * h: pointer been passed as value of head
 * Return: NOTHING
 *
 */
size_t listint_len(const listint_t *h)
{
        size_t count;

        while (h != NULL)
        {
                count++;
                h = h->next;
        }
        return (count);
}
