#include "lists.h"

/**
 * print_listint- the function of printing the values of a node
 * h: pointer been passed as value of head
 * Return: NOTHING
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
