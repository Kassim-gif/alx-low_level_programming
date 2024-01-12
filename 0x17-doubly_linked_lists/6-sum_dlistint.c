#include "lists.h"

/**
 * sum_dlistint - returns tha sums of all tha datas of a list
 * @head:  pointer to  start node of tha list
 *
 * Return: the sum, else 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head->prev)
		head = head->prev;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
