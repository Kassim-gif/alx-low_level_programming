#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - frees linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{  
                       *h = NULL;
			len++;
			break;
			
		}
		else
		{
			temp = (*h)->next;
			*h = temp;
			len++;
		}
	}

	*h = NULL;

	return (len);
}
