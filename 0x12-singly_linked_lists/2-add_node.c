#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -  adds  new node at  beginning of a list_t list
 * @head: pointer to the head element
 * @str: tstr to be added
 * Return: address to the el or null
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;


	return (*head);
}
