#include <stdio.h>
#include "lists.h"

/**
 * list_len -  returns  num of elements in linked list_t list
 * @h: pointer to list whose length is to be returned
 *
 * Return: num of printed nodws
 */

size_t list_len(const list_t *h)
{
	size_t  i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
