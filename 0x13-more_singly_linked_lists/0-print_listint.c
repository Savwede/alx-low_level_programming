#include <stdio.h>

#include "lists.h"

/**
 * print_listint - print elements in a linked list
 *
 * @h: pointer to head first node
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	if (h == NULL)
		return (cnt);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
