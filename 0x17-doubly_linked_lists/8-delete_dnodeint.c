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
	dlistint_t *next, *prev, *tmp = *head;
	unsigned int cnt = 0;

	if (tmp == NULL)
		return (-1);
	while (cnt < index)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
		cnt++;
	}
	prev = tmp->prev;
	next = tmp->next;
	if (prev != NULL)
		prev->next = next;
	else
		*head = next;

	if (next != NULL)
		next->prev = prev;

	free(tmp);
	return (1);
}
