#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds new node at beginning of list.
 * @head: Address of first node of a list.
 * @n: Integer to insert to  new node.
 * Return: Address of new node.
 **/
listint_t *add_nodeint(listint_t **head, const int n);
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
