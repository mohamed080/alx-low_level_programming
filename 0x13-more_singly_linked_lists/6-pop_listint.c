#include "lists.h"

/**
 * pop_listint - deletes the head node.
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements.
 *
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int N;

	if (!head || !*head)
		return (0);

	N = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (N);
}
