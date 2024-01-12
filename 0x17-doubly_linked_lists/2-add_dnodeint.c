#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add a new node at tha begining of  dlistint_t list
 * @head: a pointer to tha start of tha list
 * @n: the data of the new node.
 *
 * Return: address of tha new element, else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
