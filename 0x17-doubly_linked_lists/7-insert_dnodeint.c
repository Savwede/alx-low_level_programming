#include "lists.h"
/**
 * insert_dnodeint_at_index - returns the element at index fron a linked list
 *
 * @h: pointer to head of the list
 * @idx: the position of the node
 * @n: the value of the node
 *
 * Return: the newly added node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	int cnt = 0;
	dlistint_t *new_node, *nest_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	while (cnt < idx)
	{
		if (h == NULL)
			return (NULL);

		h = h->next;
	}
	nest_node = h->next;
	nest_node->prev = new_node;
	h-next = new_node;
	new_node->prev = head;
	new_node->next = nest_node;
	new_node->n = n;
	return (new_node);
}
