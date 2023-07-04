#include "lists.h"

/**
 * print_listint- the function of printing the values of a node
 * h: pointer been passed as value of head
 * Return: NOTHING
 *
 */
size_t print_listint(const listint_t *h)
{
	int count;
	const listint_t *temp = NULL;
	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
