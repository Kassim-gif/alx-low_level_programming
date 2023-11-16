#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of list_t list
 * @h: pointer to list to be printrinted
 *
 * Return: num of printed nodws
 */

size_t print_list(const list_t *h)
{
	size_t  i = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}

	return (i);
}
