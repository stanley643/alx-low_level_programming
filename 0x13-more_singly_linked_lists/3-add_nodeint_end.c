#include "lists.h"

/**
 * add_nodeint_end- the function of adding the values of a node at the beginning
 * @head: pointer been passed as value of head
 * @n: integer been passed
 * Return: returns NULL and the temp
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *new_ptr = NULL;


	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = NULL;
	
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		new_ptr = *head;
		while(new_ptr->next != NULL)
		{
			new_ptr = new_ptr->next;
		}
		new_ptr->next = temp;
	}
	return (temp);
}
	
		


