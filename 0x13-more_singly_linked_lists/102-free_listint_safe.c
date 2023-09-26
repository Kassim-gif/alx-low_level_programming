#include "lists.h"

/**
 * print_listint_safe - prints linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		temp =(*h)-next;
		free(*h);
		*h = temp;
		len++;

		if (temp >= *h)
		{
			break; // Break loop when is detected
		}
	}

	*h = NULL;

	return (len);
}
