#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a n9de from a link list
 *
 * @head: pointer to the first node of the list
 * @index: position of node to delete
 *
 * Return: 1 on success and -1 on failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
        dlistint_t *next, *prev;
	int cnt = 0;

        while (cnt < index)
        {
		if (*head == NULL)
			return (-1);
                *head = head->next;
        }
	prev = *head->prev;
	next = *head->next;
	prev->next = next;
	next->prev = prev;
	free(*head->n);
	free(*head);
	return (1);
}
