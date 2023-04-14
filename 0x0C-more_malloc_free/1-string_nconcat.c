#include "main.h"
#include <stdio.h>
/**
 * strinng_nconcat - concatenates two strings.
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

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (leng1 = 0 ; s1[leng1] != '\0' ; leng1++)
		;
	for (leng2 = 0 ; s2[leng2] != '\0' ; leng2++)
		;
	stg = malloc(leng1 + n + 1);
	if (stg == NULL)
	{
		return (NULL);
	}
	for (m = 0; s1[m] != '\0' ; m++)
		stg[m] = s1[m];
	for (j = 0; j < n ; j++)
	{
		stg[j] = s2[j];
		m++;
	}
	stg[m] = '\0';

	return (stg);
}
