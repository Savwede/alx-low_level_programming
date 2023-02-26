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
        unsigned int cnt = 0;
        dlistint_t *new_node, *tmp = *h;

        new_node = malloc(sizeof(dlistint_t));
        if (new_node == NULL)
                return (NULL);

        while (cnt < (idx - 1))
        {
                if (tmp == NULL)
                        return (NULL);

                cnt++;
                tmp = tmp->next;
        }
        new_node->prev = tmp;
        new_node->next = tmp->next;
        tmp->next = new_node;
        new_node->n = n;
        return (new_node);
}
