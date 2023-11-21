#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds new node at beginning of a list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert into the new node.
 * Return: Address of the new node.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *head;

	head = malloc(sizeof(listint_t));
	if (head == NULL)
		return (NULL);

	head->n = n;
	head->next = *head;
	*head = head;
	return (*head);
}
