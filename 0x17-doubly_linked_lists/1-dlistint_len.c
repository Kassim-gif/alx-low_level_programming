#include "lists.h"

/**
 * dlistint_len - returns tha numbar of elements in a doubly linked list
 * @h: a pointer to tha head node of tha list
 * Return: tha num of nodes on tha list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (!h)
		return (0);
	while (h->prev)
		h = h->prev;
	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
