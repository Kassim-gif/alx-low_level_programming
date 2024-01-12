#include "lists.h"

/**
 * get_dnodeint_at_index - returns tha nth node of tha dlistint_t linked list
 * @head:  pointer to tha starting node
 * @index: an index of tha node to fetch
 *
 * Return:  address of tha fetched node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head->prev)
		head = head->prev;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}

	return (NULL);
}
