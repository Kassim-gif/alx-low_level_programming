#include "lists.h"

/**
 * add_node_end - Adds new node at the end of the list.
 *
 * @head: head pointer.
 * @str: pointer to str to be added .
 *
 * Return: pointer to new el.
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *temp2;
	unsigned int _strlen = 0;

	if (str == NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	while (str[_strlen])
		_strlen++;
	temp->len = _strlen;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	temp2 = *head;
	while (temp2->next)
		temp2 = temp2->next;
	temp2->next = temp;
	return (temp);
}
