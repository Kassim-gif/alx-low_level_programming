#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sum all data (n) in a list.
 * @head: Address first node of list.
 * Return: Integer.
 **/

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
