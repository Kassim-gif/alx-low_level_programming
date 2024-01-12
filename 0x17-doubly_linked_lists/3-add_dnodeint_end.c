#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds node to tha end of a dlistint_t list
 * @head: a pointer to tha starting node of a list
 * @n: tha data for that new node
 * Return: tha address of tha new address, else NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;

	return (new);
}
