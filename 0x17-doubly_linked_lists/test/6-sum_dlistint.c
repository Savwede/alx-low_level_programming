#include "lists.h"

/**
 * print_dlistint - print elements in a linked list
 *
 * @head: pointer to head first node
 *
 * Return: sum of nodes value
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	/*return 0 as number of nodes*/
	if (h == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		/*go to the next node*/
		head = head->next;
	}
	sum += head->n;
	return (sum);
}
