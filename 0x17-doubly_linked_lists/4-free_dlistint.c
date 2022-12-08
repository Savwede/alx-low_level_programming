#include "lists.h"

/**
 * free_dlistint - free doubly list link
 *
 * @head: pointer to the first node of the list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	list_t *current;

	/**
	 * while current head is not NULL
	 * set head as the next node and
	 * free the current node str then
	 * free current node.
	 */
	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->n);
		free(current);
	}
}
