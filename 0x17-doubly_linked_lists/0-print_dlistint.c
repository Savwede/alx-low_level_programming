#include "lists.h"

/**
 * print_dlistint - print elements in a linked list
 *
 * @h: pointer to head first node
 *
 * Return: Number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 1;

/*return 0 as number of nodes*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
/*if n is NULL return len as 0 and str as (nil)*/
		if (h->n == 0)
			printf("%d\n", 0);
		else
			printf("%d\n", h->n);
/*go to the next node*/
		h = h->next;
/*count number of nodes*/
		node_count += 1;
	}
/*print for the last node*/
	printf("%d\n", h->n);

	return (node_count);
}
