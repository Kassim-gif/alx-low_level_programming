#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a list.
 * @head: Address of first node of list.
 **/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
