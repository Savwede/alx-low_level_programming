#include "lists.h"

/**
 * dlistint_len - gets the number of nodes
 *
 * @h: pointer to the head (first node)
 *
 * Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
        size_t node_count = 1;

        /*if head is null return 0 nodes*/
        if (h == NULL)
                return (0);

        /*iterate through the nodes*/
	if (h->prev == NULL)
	{
		while (h->next != NULL)
		{
			/*go to the next node*/
			h = h->next;
			/*count node*/
			node_count++;
		}
	}
	else
	{
		while (h->prev != NULL)
		{
			h = h->prev;
			node_count++;
		}
	}

        return (node_count);
}
