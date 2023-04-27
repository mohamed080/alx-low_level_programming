#include <stdio.h>
#include "lists.h"
/**
 * _strle - returns the length of a string.
 * @s: the string whose length to check.
 *
 * Return: integer length of string
*/
int _strle(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
/**
 * print_list - prints all the elements.
 * @h: pointer to the list_t.
 *
 * Return: the number of nodes.
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strle(h->str), h->str ? h->str : "(nil)";
	h = h->next;
	i++;
	}
	return (i);
}
