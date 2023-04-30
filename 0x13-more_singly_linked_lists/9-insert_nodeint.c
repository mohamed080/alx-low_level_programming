#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *w;
	listint_t *tmp = *head;

	w = malloc(sizeof(listint_t));
	if (!w || !head)
		return (NULL);

	w->n = n;
	w->next = NULL;

	if (idx == 0)
	{
		w->next = *head;
		*head = w;
		return (w);
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			w->next = tmp->next;
			tmp->next = w;
			return (w);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
