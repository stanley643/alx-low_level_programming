#include "lists.h"

/**
 * add_nodeint- the function of adding the values of a node at the beginning
 * @head: pointer been passed as value of head
 * @n: integer been passed
 * Return: returns NULL and the head
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;

	*head = temp;

	return (*head);
}
