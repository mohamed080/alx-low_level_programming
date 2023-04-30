#include "lists.h"

/**
 * listint_len - returns the number of elements.
 * @h: linked list.
 *
 * Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}

	return (m);
}
