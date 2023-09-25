#include "lists.h"

/**
 * add_nodeint - adds new node at the start of linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
		{
			new->n = n;
			new->next = *head;
			*head = new;
		}
	}

	return (new);
}
