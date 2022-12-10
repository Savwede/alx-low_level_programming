#include "lists.h"
/**
 * insert_at_index_zero - inserts an element at
 * index 0 in linked list
 *
 * @h: pointer to head of the list
 * @nod: pointer to new node
 *
 * Return: the newly added node
 */
dlistint_t *insert_at_index_zero(dlistint_t **h, dlistint_t **nod)
{
	dlistint_t *tmp = *h, *new_node = *nod;

	if (*h == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
	}
	else
	{
		new_node->next = tmp;
		tmp->prev = new_node;
		*h = new_node;
	}
	return (*h);
}

/**
 * insert_dnodeint_at_index - inserts an element at
 * position idx of a linked list
 *
 * @h: pointer to head of the list
 * @idx: the position of the node
 * @n: the value of the node
 *
 * Return: the newly added node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int cnt = 1;
	dlistint_t *new_node, *tmp = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
		return (insert_at_index_zero(&*h, &new_node));

	while (cnt < idx)
	{
		if (tmp == NULL)
			return (NULL);
		cnt++;
		tmp = tmp->next;
	}
	if (tmp == NULL)
	{
		new_node->prev = NULL;
	}
	else
	{
		new_node->prev = tmp;
		new_node->next = tmp->next;
		tmp->next = new_node;
	}

	return (new_node);
}
