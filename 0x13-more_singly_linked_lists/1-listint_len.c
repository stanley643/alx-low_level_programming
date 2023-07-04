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
        const listint_t *temp = NULL;
        temp = h;

        while (temp != NULL)
        {
                count++;
                temp = temp->next;
        }
        return (count);
}
