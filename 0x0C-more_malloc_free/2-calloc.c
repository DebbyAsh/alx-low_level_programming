#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: char
 * @n: number of times to copy b
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}


/**
 * _calloc - allocates memory for an arrray
 * @nmemb:number of elements
 * @size:size of each element
 * Return: pointer to be allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pt = malloc(size * nmemb);

	if (pt == NULL)
		return (NULL);
	_memset(pt, 0, nmemb * size);
	return (pt);

}
