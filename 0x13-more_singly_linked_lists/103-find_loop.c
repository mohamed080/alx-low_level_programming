#include "lists.h"

/**
 * find_listint_loop - finds the loop.
 * @head: search for
 *
 * Return: address of the node where the loop starts
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sw = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (sw && fast && fast->next)
	{
		fast = fast->next->next;
		sw = sw->next;
		if (fast == sw)
		{
			sw = head;
			while (sw != fast)
			{
				sw = sw->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
