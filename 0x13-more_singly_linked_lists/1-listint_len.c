#include "lists.h"
/**
 * listint_len - Calc num of elements.
 *
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *head;
	unsigned int i = 0;

	head = h;
	while (head)
	{
		i++;
		head = head->next;
	}
	return (i);
}
