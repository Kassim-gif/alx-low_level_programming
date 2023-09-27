#include "lists.h"

/**
 * find_listint_loop - finds  loop in linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
        listint_t *slow = head;
        listint_t *fast = head;


                if (fast == slow)
                {
                        slow = head;
                        while (slow != fast)
                        {
                                slow = slow->next;
                                fast = fast->next;
                        }
             if (!head)
                return (NULL);

        while (slow && fast && fast->next)
        {
                fast = fast->next->next;
                slow = slow->next;
                        return (fast);
                }
        }

        return (NULL);
}
