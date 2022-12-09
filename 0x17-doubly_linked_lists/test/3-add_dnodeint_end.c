#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of the linked list
 *
 * @head: pointer to the first node of the list
 * @n: int to add to new node in the list
 *
 * Return: NULL if it fails / starting addr of the list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (tmp == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		new_node->prev = tmp;
		new_node->next = NULL;
		tmp->next = new_node;
	}
	new_node->n = n;
	return (*head);
}
