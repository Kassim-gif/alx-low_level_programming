#include "lists.h"

/**
 * reverse_listint - reverses  linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
    if (*head == NULL || (*head)->next == NULL)
        return *head;

    listint_t *rest = reverse_listint(&(*head)->next));

    (*head)->next->next =*head;
    (*head)->next = NULL;

    return rest;
}

