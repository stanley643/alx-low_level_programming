#include "lists.h"

/**
 * free_listint- the function freeing the values of a node at the beginning
 * @head: pointer been passed as value of head
 *
 * Return: returns NULL and the head
 *
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		printf("list already empty\n");
	}
	else
	{
		listint_t *temp = NULL;

		temp = head;
		head = head->next;
		free(temp);
		temp = NULL;
	}
}
