#include <stdlib.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**		
 * *_memset - allocate memoy for an array		
 * @s: pointer area to be filled	
 * @b: char	
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s		
*/
		
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}	
	return (s);	
}
		

		
/**
 * *_calloc - allocates memory
 * @nmemb: number of elements in the array
 * @size: size
 *
 * Return: pointer		
*/
		
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)		
		return (NULL);

	ptr = malloc(size * nmemb);
			
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);
		
	return (ptr);		
}
