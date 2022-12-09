#include "lists.h"

/**
 * get_dnodeint_at_index - returns the element at index fron a linked list
 *
 * @head: pointer to head of the list
 * @index: the position of the node to return
 *
 * Return: Number of nodes
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cnt = 0;
	dlistint_t *tmp = head;

	while (cnt < index)
	{
		cnt++;
		if (tmp == NULL)
			return (NULL);

		tmp = tmp->next;
	}
	return (tmp);
}
