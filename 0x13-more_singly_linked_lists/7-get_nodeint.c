#include "lists.h"

/**
 * get_nodeint_at_index - returns the node.
 * @head: first node
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp ? tmp : NULL);
}