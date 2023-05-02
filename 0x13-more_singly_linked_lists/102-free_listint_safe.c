#include "lists.h"

/**
 * free_listint_safe - frees
 * @h: pointer to the first node.
 *
 * Return: number of elements in the freed list
*/

size_t free_listint_safe(listint_t **h)
{
	size_t leng = 0;
	int diff;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			leng++;
		}
		else
		{
			free(*h);
			*h = NULL;
			leng++;
			break;
		}
	}

	*h = NULL;

	return (leng);
}
