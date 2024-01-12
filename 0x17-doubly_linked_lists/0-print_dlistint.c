#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all tha elements of tha dlistint_t list
 * @h: a pointer to tha head of tha list
 *
 * Return: tha number of nodes in tha list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;

	if (!h)
		return (0);
	while (h->prev)
		h = h->prev;

	while (h)
	{
		printf("%d\n", h->n);
		n_nodes++;
		h = h->next;
	}

	return (n_nodes);
}
