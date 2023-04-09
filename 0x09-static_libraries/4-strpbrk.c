#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
*/

char *_strpbrk(char *s, char *accept)
{
		int M;

		while (*s)
		{
			for (M = 0; accept[M]; M++)
			{
			if (*s == accept[M])
			return (s);
			}
		s++;
		}

	return ('\0');
}
