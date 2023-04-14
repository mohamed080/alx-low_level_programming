#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer of first string
 * @s2: pointer of second string
 * @n: number of bytes
 *
 * Return: pointer shall point to a newly allocated space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *stg;
	unsigned int m, j, leng1, leng2;

	while (s1 && s1[leng1])
		leng1++;
	while (s2 && s2[leng2])
		leng2++;
	if (n < leng2)

		stg = malloc(sizeof(char) * (leng1 + n + 1));

	else
		stg = malloc(sizeof(char) * (leng1 + leng2 + 1));
	if (!stg)
		return (NULL);
	while (m < leng1)
	{
		s[m] = s1[m];
		m++;
	}
	while (n < leng2 && m < (leng1 + n))
		stg[m++] = s2[j++];

	while (n >= leng2 && m < (leng1 + leng2))
		stg[m++] = s2[j++];
	stg[m] = '\0';
	return (stg);
}
