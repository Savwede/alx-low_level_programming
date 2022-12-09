#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of the linked list
 *
 * @head: pointer to the first node of the list
 * @n: int to add to new node in the list
 *
 * Return: NULL if it fails / starting addr of the list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		tmp->prev = new_node;
	}
	new_node->n = n;
	*head = new_node;

	return (*head);
}
