#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees tha dlistint_t list
 * @head: tha pointer to  starting node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (!head)
		return;

	while (head->prev)
		head = head->prev;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
