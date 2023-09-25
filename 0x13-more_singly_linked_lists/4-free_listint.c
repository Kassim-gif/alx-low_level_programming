#include "lists.h"

/**
 * @head: listint_t list to be freed
 * free_listint - frees a linked list
 
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

