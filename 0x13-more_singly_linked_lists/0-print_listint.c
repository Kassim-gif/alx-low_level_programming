#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: Pointer to a list.
 * Return: num of items
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *head;
	unsigned int i = 0;

	head = h;
	while (head)
	{
		printf("%d\n", head->n);
		i++;
		head = head->next;
	}
	return (i);
}
