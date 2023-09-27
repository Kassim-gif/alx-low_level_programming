#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete  first element of singly linked list.
 * @head: Pointer to a list.
 * Return: Integer if success.
 **/

int pop_listint(listint_t **head)
{        
        int my_data;
	listint_t *tp;
	
	if (*head == NULL)
		return (0);

	tp = *head;
	*head = tp->next;
	my_data = tp->n;
	free(tp);
	return (my_data);
}
