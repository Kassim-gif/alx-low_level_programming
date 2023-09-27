#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
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
